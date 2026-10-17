// SimpleBus-facing RV32E core. One instruction is held in EXEC until its
// optional load/store transaction has returned, so architectural state changes
// happen exactly once per committed instruction.
`ifdef YSYX_SOC
module NPC #(
    parameter [31:0] RESET_PC = 32'h30000000
) (
`else
module NPC #(
    parameter [31:0] RESET_PC = 32'h80000000
) (
`endif
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
    input  [31:0] io_lsu_rdata,
    output [31:0] debug_pc,
    output [31:0] debug_inst
);
    wire [31:0] PC;
    wire [31:0] ALU_OUT;
    wire [31:0] R1_data;
    wire [31:0] R2_data;
    wire [31:0] load_data;
    wire [31:0] a0;
    wire [31:0] imm;
    wire [31:0] inst;
    wire [31:0] csr_rdata;
    wire [11:0] csr_addr;
    wire [4:0] r1;
    wire [4:0] r2;
    wire [4:0] rd;
    wire [4:0] shamt;
    wire [4:0] csr_zimm;

    wire R_TYPE, I_TYPE_ARITH, L_TYPE_LOAD, S_TYPE, U_TYPE, I_TYPE;
    wire MemWEn, B_TYPE, J_TYPE;
    wire B_bne, B_bge, B_beq, B_bgeu, B_bltu, B_blt;
    wire I_jalr, U_lui, U_auipc, J_jal;
    wire R_add, R_sub, R_sltu, R_sll, R_and, R_or, R_xor, R_slt, R_sra, R_srl;
    wire l_lw, l_lbu, l_lb, l_lh, l_lhu;
    wire I_addi, I_slti, I_sltiu, I_srai, I_xori, I_ori, I_andi, I_srli, I_slli;
    wire I_csrrs, I_csrrw, I_csrrc, I_csrrsi, I_csrrwi, I_csrrci;
    wire I_ebreak;
    wire S_sh, S_sw, S_sb;
    wire ifu_valid, lsu_done, branch_taken;
    wire commit_valid = ifu_valid && (!(L_TYPE_LOAD || S_TYPE) || lsu_done);

    assign debug_pc = PC;
    assign debug_inst = inst;

`ifdef __ICARUS__
    always @(posedge clock) begin
        if (!reset && commit_valid && I_ebreak) begin
            if (a0 === 32'b0) begin
                $display("HIT GOOD TRAP");
                $finish;
            end else begin
                $fatal(1, "HIT BAD TRAP: code=%0d", $signed(a0));
            end
        end
    end
`else
    import "DPI-C" function void notify_ebreak(input int code);
    always @(posedge clock) begin
        if (!reset && commit_valid && I_ebreak)
            notify_ebreak(a0);
    end
`endif

    ysyx_25080202_IFU ifu (
        .clk(clock), .rst(reset), .pc(PC),
        .ifu_reqValid(io_ifu_reqValid), .ifu_raddr(io_ifu_addr),
        .ifu_respValid(io_ifu_respValid), .ifu_rdata(io_ifu_rdata),
        .inst(inst), .inst_valid(ifu_valid), .inst_done(commit_valid)
    );

    ysyx_25080202_IDU idu (
        .inst(ifu_valid ? inst : 32'b0),
        .R_TYPE(R_TYPE), .I_TYPE_ARITH(I_TYPE_ARITH), .L_TYPE_LOAD(L_TYPE_LOAD),
        .S_TYPE(S_TYPE), .U_TYPE(U_TYPE), .I_TYPE(I_TYPE), .MemWEn(MemWEn),
        .B_TYPE(B_TYPE), .J_TYPE(J_TYPE), .B_bne(B_bne), .B_bge(B_bge),
        .B_beq(B_beq), .B_bgeu(B_bgeu), .B_bltu(B_bltu), .B_blt(B_blt),
        .I_jalr(I_jalr), .U_lui(U_lui), .U_auipc(U_auipc), .J_jal(J_jal),
        .R_add(R_add), .R_sub(R_sub), .R_sltu(R_sltu), .R_sll(R_sll),
        .R_and(R_and), .R_or(R_or), .R_xor(R_xor), .R_slt(R_slt),
        .R_sra(R_sra), .R_srl(R_srl), .l_lw(l_lw), .l_lbu(l_lbu), .l_lb(l_lb),
        .l_lh(l_lh), .l_lhu(l_lhu), .I_addi(I_addi), .I_slti(I_slti),
        .I_sltiu(I_sltiu), .I_srai(I_srai), .I_xori(I_xori), .I_ori(I_ori),
        .I_andi(I_andi), .I_srli(I_srli), .I_slli(I_slli), .I_csrrs(I_csrrs),
        .I_csrrw(I_csrrw), .I_csrrc(I_csrrc), .I_csrrsi(I_csrrsi),
        .I_csrrwi(I_csrrwi), .I_csrrci(I_csrrci),
        .S_sh(S_sh), .S_sw(S_sw), .S_sb(S_sb), .I_ebreak(I_ebreak),
        .csr_addr(csr_addr), .shamt(shamt),
        .csr_zimm(csr_zimm), .imm(imm), .r1(r1), .r2(r2), .rd(rd)
    );

    ysyx_25080202_LSU lsu (
        .clk(clock), .rst(reset), .inst_valid(ifu_valid), .R2_data(R2_data),
        .ALU_OUT(ALU_OUT), .l_lw(l_lw), .l_lbu(l_lbu), .l_lb(l_lb),
        .l_lh(l_lh), .l_lhu(l_lhu), .S_sb(S_sb), .S_sh(S_sh), .S_sw(S_sw),
        .lsu_reqValid(io_lsu_reqValid), .lsu_addr(io_lsu_addr),
        .lsu_size(io_lsu_size), .lsu_wen(io_lsu_wen), .lsu_wdata(io_lsu_wdata),
        .lsu_wmask(io_lsu_wmask), .lsu_respValid(io_lsu_respValid),
        .lsu_rdata(io_lsu_rdata), .load_data(load_data), .lsu_done(lsu_done)
    );

    ysyx_25080202_EXU exu (
        .R_TYPE(R_TYPE), .I_TYPE(I_TYPE), .I_TYPE_ARITH(I_TYPE_ARITH),
        .S_TYPE(S_TYPE), .B_TYPE(B_TYPE), .J_TYPE(J_TYPE), .U_TYPE(U_TYPE),
        .B_bne(B_bne), .B_bge(B_bge), .B_beq(B_beq), .B_bgeu(B_bgeu),
        .B_bltu(B_bltu), .B_blt(B_blt), .R_add(R_add), .R_sub(R_sub),
        .R_sltu(R_sltu), .R_sll(R_sll), .R_and(R_and), .R_or(R_or),
        .R_xor(R_xor), .R_slt(R_slt), .R_sra(R_sra), .R_srl(R_srl),
        .I_addi(I_addi), .I_slti(I_slti), .I_sltiu(I_sltiu), .I_srai(I_srai),
        .I_xori(I_xori), .I_ori(I_ori), .I_andi(I_andi), .I_srli(I_srli),
        .I_slli(I_slli), .I_jalr(I_jalr), .l_lbu(l_lbu), .l_lw(l_lw),
        .l_lb(l_lb), .l_lh(l_lh), .l_lhu(l_lhu), .U_lui(U_lui),
        .U_auipc(U_auipc), .J_jal(J_jal), .rdata_1(R1_data),
        .rdata_2(R2_data), .imm(imm), .pc(PC), .branch_taken(branch_taken),
        .ALU_OUT(ALU_OUT)
    );

    ysyx_25080202_CSR csr (
        .clk(clock), .rst(reset), .csr_valid(commit_valid),
        .I_csrrs(I_csrrs), .I_csrrw(I_csrrw), .I_csrrc(I_csrrc),
        .I_csrrsi(I_csrrsi), .I_csrrwi(I_csrrwi), .I_csrrci(I_csrrci),
        .csr_addr(csr_addr), .csr_rs1(r1), .csr_zimm(csr_zimm),
        .csr_wdata(R1_data), .csr_rdata(csr_rdata)
    );

    ysyx_25080202_WBU #(.RESET_PC(RESET_PC)) wbu (
        .clk(clock), .rst(reset), .inst_valid(commit_valid), .ALU_OUT(ALU_OUT),
        .load_data(load_data), .R_TYPE(R_TYPE), .I_TYPE_ARITH(I_TYPE_ARITH),
        .I_TYPE(I_TYPE), .L_TYPE_LOAD(L_TYPE_LOAD), .U_TYPE(U_TYPE),
        .J_TYPE(J_TYPE), .B_TYPE(B_TYPE), .branch_taken(branch_taken),
        .I_jalr(I_jalr), .l_lw(l_lw), .l_lbu(l_lbu), .l_lb(l_lb), .l_lh(l_lh),
        .l_lhu(l_lhu), .I_csrrw(I_csrrw), .I_csrrs(I_csrrs), .I_csrrc(I_csrrc),
        .I_csrrsi(I_csrrsi), .I_csrrwi(I_csrrwi), .I_csrrci(I_csrrci),
        .csr_rdata(csr_rdata), .r1(r1), .r2(r2),
        .rd(rd), .R1_data(R1_data), .R2_data(R2_data), .a0(a0), .PC(PC)
    );
endmodule
