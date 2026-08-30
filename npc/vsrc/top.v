module top(
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
    output [31:0] ifu_raddr,
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
    wire [3:0] wmask;
    wire [31:0] decode_inst;
    wire ifu_valid;
    wire lsu_req;
    wire lsu_done;
    wire commit_valid;

    assign decode_inst = ifu_valid ? inst : 32'b0;
    assign commit_valid = ifu_valid && (!L_TYPE_LOAD || lsu_done);
    assign inst_valid = commit_valid;

    assign mem_addr = lsu_addr;
    assign MemWriteData = lsu_wdata;
    assign MemWEn = lsu_wen;
    assign lsu_ren = lsu_req && !lsu_wen;
    assign lsu_raddr = lsu_addr;
    assign lsu_waddr = lsu_addr;
    assign MemReadData = lsu_rdata;
    assign do_memread = lsu_ren;

    import "DPI-C" function void notify_ebreak();
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(
        input int waddr, input int wdata, input int wmask);

    always @(posedge clk) begin
        if (rst) begin
            ifu_rdata <= 32'b0;
        end else begin
            ifu_rdata <= pmem_read(ifu_raddr);
        end
    end

    // 数据存储器采用固定 1 周期返回：load 在请求沿采样数据，store 在请求沿写入。
    always @(posedge clk) begin
        if (rst) begin
            lsu_rdata <= 32'b0;
        end else begin
            lsu_rdata <= (lsu_req && !lsu_wen) ? pmem_read(lsu_addr) : 32'b0;
            if (lsu_req && lsu_wen) begin
                pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
            end
        end
    end
    
    always @(posedge clk) begin
        if(commit_valid && I_ebreak && $time > 0) begin //避免仿真初期误触发
            $display("[TRAP] EBREAK at PC = 0x%08x",PC);
            notify_ebreak();
        end
    end

    IFU ifu(
        .clk(clk),
        .rst(rst),
        .pc(PC),
        .ifu_rdata(ifu_rdata),
        .ifu_raddr(ifu_raddr),
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

    LSU lsu (
        .clk(clk),
        .rst(rst),
        .inst_valid(ifu_valid),
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .lsu_rdata(lsu_rdata),
        .lsu_addr(lsu_addr),
        .lsu_req(lsu_req),
        .lsu_wen(lsu_wen),
        .lsu_wdata(lsu_wdata),
        .lsu_wmask(lsu_wmask),
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
