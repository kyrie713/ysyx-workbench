module top #(
    parameter integer IFU_MEM_LATENCY = 30,
    parameter integer LSU_MEM_LATENCY = 1,
    parameter integer IFU_MEM_RANDOM_DELAY = 0,
    parameter integer LSU_MEM_RANDOM_DELAY = 0,
    parameter integer IFU_RANDOM_REQ_DELAY = 0,
    parameter integer LSU_RANDOM_REQ_DELAY = 0,
    parameter integer MAX_MEM_LATENCY = 20,
    parameter integer MAX_REQ_DELAY = 3
)(
    input clk,
    input rst,
    output [31:0] PC,
    output [31:0] next_pc,
    output [31:0] inst,
    output do_memread,
    output MemWEn,
    output [31:0] mem_addr,
    output [31:0] MemWriteData,
    output [31:0] MemReadData,
    output lsu_ren,
    output [31:0] lsu_raddr,
    output lsu_wen,
    output [31:0] lsu_waddr,
    output lsu_reqValid,
    output reg lsu_respValid,
    output [31:0] ifu_raddr,
    output ifu_reqValid,
    output reg ifu_respValid,
    output reg [31:0] ifu_rdata,
    output inst_valid,
    output reg [31:0] lsu_rdata,
    output [31:0] lsu_addr,
    output [31:0] lsu_wdata,
    output [3:0] lsu_wmask
);
    wire [31:0] PC_plus_4;
    wire [31:0] ALU_OUT;
    wire [31:0] R1_data;
    wire [31:0] R2_data;
    wire [31:0] load_data;
    wire [31:0] RegWriteData;
    wire Reg_WE;
    wire I_jalr;
    wire [4:0] r1;
    wire [4:0] r2;
    wire [4:0] rd;
    wire [31:0] imm;
    wire R_TYPE;
    wire I_TYPE_ARITH;
    wire L_TYPE_LOAD;
    wire S_TYPE;
    wire U_TYPE;
    wire I_TYPE;
    //wire MemWEn;
    wire B_TYPE;
    wire J_TYPE;
    wire U_lui;
    wire R_add;
    wire l_lw;
    wire l_lbu;
    wire I_add;
    wire S_sw;
    wire S_sb;
    wire I_ebreak;
    wire [31:0] decode_inst;
    wire ifu_valid;
    wire lsu_done;
    wire commit_valid;
    wire lsu_reqValid_int;
    wire ifu_reqValid_int;
    reg ifu_pending;
    reg [31:0] ifu_pending_addr;
    integer ifu_delay_count;
    reg [15:0] ifu_lfsr;
    reg lsu_pending;
    reg lsu_pending_wen;
    reg [31:0] lsu_pending_addr;
    reg [31:0] lsu_pending_wdata;
    reg [3:0] lsu_pending_wmask;
    integer lsu_delay_count;
    reg [15:0] lsu_lfsr;

    function [15:0] lfsr_next;
        input [15:0] value;
        begin
            lfsr_next = {value[14:0],
                         value[15] ^ value[13] ^ value[12] ^ value[10]};
        end
    endfunction

    function integer selected_latency;
        input integer value;
        input integer fixed_latency;
        input integer random_enable;
        begin
            if (random_enable != 0) begin
                if (MAX_MEM_LATENCY <= 1) begin
                    selected_latency = 1;
                end else begin
                    selected_latency = 1 + (value % MAX_MEM_LATENCY);
                end
            end else if (fixed_latency <= 1) begin
                selected_latency = 1;
            end else begin
                selected_latency = fixed_latency;
            end
        end
    endfunction

    assign decode_inst = ifu_valid ? inst : 32'b0;
    assign commit_valid = ifu_valid && (!(L_TYPE_LOAD || S_TYPE) || lsu_done);
    assign inst_valid = commit_valid;

    assign mem_addr = lsu_addr;
    assign MemWriteData = lsu_wdata;
    assign MemWEn = lsu_wen;
    assign lsu_ren = lsu_reqValid && !lsu_wen;
    assign lsu_raddr = lsu_addr;
    assign lsu_waddr = lsu_addr;
    assign MemReadData = lsu_rdata;
    assign do_memread = lsu_ren;
    assign lsu_reqValid = lsu_reqValid_int;
    assign ifu_reqValid = ifu_reqValid_int;

    import "DPI-C" function void notify_ebreak();
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(
        input int waddr, input int wdata, input int wmask);

    always @(posedge clk) begin
        if (rst) begin
            ifu_rdata <= 32'b0;
            ifu_respValid <= 1'b0;
            ifu_pending <= 1'b0;
            ifu_pending_addr <= 32'b0;
            ifu_delay_count <= 0;
            ifu_lfsr <= 16'h1;
        end else begin
            ifu_respValid <= 1'b0;
            if (ifu_pending) begin
                if (ifu_delay_count == 0) begin
                    ifu_rdata <= pmem_read(ifu_pending_addr);
                    ifu_respValid <= 1'b1;
                    ifu_pending <= 1'b0;
                end else begin
                    ifu_delay_count <= ifu_delay_count - 1;
                end
            end else if (ifu_reqValid_int) begin
                if (selected_latency({16'b0, ifu_lfsr}, IFU_MEM_LATENCY,
                                    IFU_MEM_RANDOM_DELAY) <= 1) begin
                    ifu_rdata <= pmem_read(ifu_raddr);
                    ifu_respValid <= 1'b1;
                end else begin
                    ifu_pending <= 1'b1;
                    ifu_pending_addr <= ifu_raddr;
                    ifu_delay_count <= selected_latency(
                        {16'b0, ifu_lfsr}, IFU_MEM_LATENCY,
                        IFU_MEM_RANDOM_DELAY) - 2;
                end
                ifu_lfsr <= lfsr_next(ifu_lfsr);
            end
        end
    end

    // 数据存储器只在 reqValid 有效时接受请求，并在延迟结束后产生 respValid。
    always @(posedge clk) begin
        if (rst) begin
            lsu_rdata <= 32'b0;
            lsu_respValid <= 1'b0;
            lsu_pending <= 1'b0;
            lsu_pending_wen <= 1'b0;
            lsu_pending_addr <= 32'b0;
            lsu_pending_wdata <= 32'b0;
            lsu_pending_wmask <= 4'b0;
            lsu_delay_count <= 0;
            lsu_lfsr <= 16'h1;
        end else begin
            lsu_respValid <= 1'b0;
            lsu_rdata <= 32'b0;
            if (lsu_pending) begin
                if (lsu_delay_count == 0) begin
                    if (lsu_pending_wen) begin
                        pmem_write(lsu_pending_addr, lsu_pending_wdata,
                                  {28'b0, lsu_pending_wmask});
                    end else begin
                        lsu_rdata <= pmem_read(lsu_pending_addr);
                    end
                    lsu_respValid <= 1'b1;
                    lsu_pending <= 1'b0;
                end else begin
                    lsu_delay_count <= lsu_delay_count - 1;
                end
            end else if (lsu_reqValid_int) begin
                if (selected_latency({16'b0, lsu_lfsr}, LSU_MEM_LATENCY,
                                    LSU_MEM_RANDOM_DELAY) <= 1) begin
                    if (lsu_wen) begin
                        pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
                    end else begin
                        lsu_rdata <= pmem_read(lsu_addr);
                    end
                    lsu_respValid <= 1'b1;
                end else begin
                    lsu_pending <= 1'b1;
                    lsu_pending_wen <= lsu_wen;
                    lsu_pending_addr <= lsu_addr;
                    lsu_pending_wdata <= lsu_wdata;
                    lsu_pending_wmask <= lsu_wmask;
                    lsu_delay_count <= selected_latency(
                        {16'b0, lsu_lfsr}, LSU_MEM_LATENCY,
                        LSU_MEM_RANDOM_DELAY) - 2;
                end
                lsu_lfsr <= lfsr_next(lsu_lfsr);
            end
        end
    end
    
    always @(posedge clk) begin
        if(commit_valid && I_ebreak && $time > 0) begin //避免仿真初期误触发
            $display("[TRAP] EBREAK at PC = 0x%08x",PC);
            notify_ebreak();
        end
    end

    IFU #(
        .RANDOM_REQ_DELAY(IFU_RANDOM_REQ_DELAY),
        .MAX_REQ_DELAY(MAX_REQ_DELAY)
    ) ifu(
        .clk(clk),
        .rst(rst),
        .pc(PC),
        .ifu_reqValid(ifu_reqValid_int),
        .ifu_raddr(ifu_raddr),
        .ifu_respValid(ifu_respValid),
        .ifu_rdata(ifu_rdata),
        .inst(inst),
        .inst_valid(ifu_valid),
        .inst_done(commit_valid)
    );

    IDU idu(
        .inst(decode_inst),
        .R_TYPE(R_TYPE),
        .I_TYPE_ARITH(I_TYPE_ARITH),
        .L_TYPE_LOAD(L_TYPE_LOAD),
        .S_TYPE(S_TYPE),
        .U_TYPE(U_TYPE),
        .I_TYPE(I_TYPE),
        .MemWEn(MemWEn),
        .B_TYPE(B_TYPE),
        .J_TYPE(J_TYPE),
        .I_jalr(I_jalr),
        .U_lui(U_lui),
        .R_add(R_add),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .I_add(I_add),
        .S_sw(S_sw),
        .S_sb(S_sb),
        .I_ebreak(I_ebreak),
        .imm(imm),
        .r1(r1),
        .r2(r2),
        .rd(rd)
    );

    LSU #(
        .RANDOM_REQ_DELAY(LSU_RANDOM_REQ_DELAY),
        .MAX_REQ_DELAY(MAX_REQ_DELAY)
    ) lsu (
        .clk(clk),
        .rst(rst),
        .inst_valid(ifu_valid),
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .lsu_reqValid(lsu_reqValid_int),
        .lsu_addr(lsu_addr),
        .lsu_wen(lsu_wen),
        .lsu_wdata(lsu_wdata),
        .lsu_wmask(lsu_wmask),
        .lsu_respValid(lsu_respValid),
        .lsu_rdata(lsu_rdata),
        .load_data(load_data),
        .lsu_done(lsu_done)
    );

    EXU exu (
        .R_TYPE(R_TYPE),
        .I_TYPE(I_TYPE),
        .S_TYPE(S_TYPE),
        .B_TYPE(B_TYPE),
        .J_TYPE(J_TYPE),
        .U_TYPE(U_TYPE),
        .R_add(R_add),
        .I_add(I_add),
        .I_jalr(I_jalr),
        .l_lbu(l_lbu),
        .l_lw(l_lw),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        .imm(imm),
        .pc(PC),
        .ALU_OUT(ALU_OUT)
    );

    WBU wbu (
        .clk(clk),
        .rst(rst),
        .inst_valid(commit_valid),
        .ALU_OUT(ALU_OUT),
        .load_data(load_data),
        .R_TYPE(R_TYPE),
        .I_TYPE_ARITH(I_TYPE_ARITH),
        .I_TYPE(I_TYPE),
        .U_TYPE(U_TYPE),
        .J_TYPE(J_TYPE),
        .I_jalr(I_jalr),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .r1(r1),
        .r2(r2),
        .rd(rd),
        .R1_data(R1_data),
        .R2_data(R2_data),
        .PC(PC),
        .PC_plus_4(PC_plus_4),
        .next_pc(next_pc),
        .RegWriteData(RegWriteData),
        .Reg_WE(Reg_WE)
    );
endmodule
