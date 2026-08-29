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
    output inst_valid
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

    assign decode_inst = inst_valid ? inst : 32'b0;

    assign lsu_ren = do_memread;
    assign lsu_raddr = mem_addr;
    assign lsu_wen = MemWEn;
    assign lsu_waddr = mem_addr;

    import "DPI-C" function void notify_ebreak();
    import "DPI-C" function int pmem_read(input int raddr);

    always @(posedge clk) begin
        if (rst) begin
            ifu_rdata <= 32'b0;
        end else begin
            ifu_rdata <= pmem_read(ifu_raddr);
        end
    end
    
    always @(posedge clk) begin
        if(inst_valid && I_ebreak && $time > 0) begin //避免仿真初期误触发
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
        .inst_valid(inst_valid)
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
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .MemWEn(MemWEn),
        .mem_addr(mem_addr),
        .do_memread(do_memread),
        .MemReadData(MemReadData),
        .load_data(load_data),
        .MemWriteData(MemWriteData),
        .wmask(wmask)
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
        .inst_valid(inst_valid),
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
