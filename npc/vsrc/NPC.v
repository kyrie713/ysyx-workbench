// SoC-facing NPC top level. The legacy `top` module remains available for
// the DPI-based local simulator; this module exposes only SimpleBus signals.
module NPC(
    input         clock,
    input         reset,
    output        io_ifu_reqValid,
    output [31:0] io_ifu_addr,
    input         io_ifu_respValid,
    input  [31:0] io_ifu_rdata,
    output        io_lsu_reqValid,
    output [31:0] io_lsu_addr,
    output [1:0]  io_lsu_size,
    output        io_lsu_wen,
    output [31:0] io_lsu_wdata,
    output [3:0]  io_lsu_wmask,
    input         io_lsu_respValid,
    input  [31:0] io_lsu_rdata
);
    wire [31:0] PC;
    wire [31:0] PC_plus_4;
    wire [31:0] ALU_OUT;
    wire [31:0] R1_data;
    wire [31:0] R2_data;
    wire [31:0] load_data;
    wire [31:0] RegWriteData;
    wire [31:0] a0;
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
    wire MemWEn;
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
    wire [31:0] inst;
    wire ifu_valid;
    wire lsu_done;
    wire commit_valid;

    assign commit_valid = ifu_valid && (!(L_TYPE_LOAD || S_TYPE) || lsu_done);

    import "DPI-C" function void notify_ebreak(input int code);

    always @(posedge clock) begin
        if (!reset && commit_valid && I_ebreak) begin
            notify_ebreak(a0);
        end
    end

    IFU ifu(
        .clk(clock),
        .rst(reset),
        .pc(PC),
        .ifu_reqValid(io_ifu_reqValid),
        .ifu_raddr(io_ifu_addr),
        .ifu_respValid(io_ifu_respValid),
        .ifu_rdata(io_ifu_rdata),
        .inst(inst),
        .inst_valid(ifu_valid),
        .inst_done(commit_valid)
    );

    IDU idu(
        .inst(ifu_valid ? inst : 32'b0),
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

    LSU lsu(
        .clk(clock),
        .rst(reset),
        .inst_valid(ifu_valid),
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .lsu_reqValid(io_lsu_reqValid),
        .lsu_addr(io_lsu_addr),
        .lsu_size(io_lsu_size),
        .lsu_wen(io_lsu_wen),
        .lsu_wdata(io_lsu_wdata),
        .lsu_wmask(io_lsu_wmask),
        .lsu_respValid(io_lsu_respValid),
        .lsu_rdata(io_lsu_rdata),
        .load_data(load_data),
        .lsu_done(lsu_done)
    );

    EXU exu(
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

    WBU #(
        .RESET_PC(32'h30000000)
    ) wbu(
        .clk(clock),
        .rst(reset),
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
        .a0(a0),
        .PC(PC),
        .PC_plus_4(PC_plus_4),
        .next_pc(),
        .RegWriteData(RegWriteData),
        .Reg_WE(Reg_WE)
    );
endmodule
