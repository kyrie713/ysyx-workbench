// RV32E integer execute unit. Branches produce a target in ALU_OUT and a
// separate taken bit so writeback can select either target or PC+4.
module ysyx_25080202_EXU(
    input R_TYPE,
    input I_TYPE,
    input I_TYPE_ARITH,
    input S_TYPE,
    input B_TYPE,
    input J_TYPE,
    input U_TYPE,
    input B_bne,
    input B_bge,
    input B_beq,
    input B_bgeu,
    input B_bltu,
    input B_blt,
    input R_add,
    input R_sub,
    input R_sltu,
    input R_sll,
    input R_and,
    input R_or,
    input R_xor,
    input R_slt,
    input R_sra,
    input R_srl,
    input I_addi,
    input I_slti,
    input I_sltiu,
    input I_srai,
    input I_xori,
    input I_ori,
    input I_andi,
    input I_srli,
    input I_slli,
    input I_jalr,
    input l_lbu,
    input l_lw,
    input l_lb,
    input l_lh,
    input l_lhu,
    input U_lui,
    input U_auipc,
    input J_jal,
    input [31:0] rdata_1,
    input [31:0] rdata_2,
    input [31:0] imm,
    input [31:0] pc,
    output reg branch_taken,
    output reg [31:0] ALU_OUT
);
    reg [31:0] A;
    reg [31:0] B;

    always @(*) begin
        A = 32'b0;
        B = 32'b0;
        ALU_OUT = 32'b0;
        branch_taken = 1'b0;

        if (R_TYPE | I_TYPE | S_TYPE)
            A = rdata_1;
        else if (B_TYPE | J_TYPE | U_auipc)
            A = pc;
        else if (U_lui)
            A = 32'b0;

        if (R_TYPE)
            B = rdata_2;
        else if (I_TYPE | S_TYPE | B_TYPE | U_TYPE | J_TYPE)
            B = imm;

        case (1'b1)
            R_add, I_addi, I_jalr, S_TYPE, l_lbu, l_lw, l_lb, l_lh, l_lhu,
            U_auipc, J_jal: ALU_OUT = A + B;
            R_sub:   ALU_OUT = A - B;
            R_sltu:  ALU_OUT = (A < B) ? 32'd1 : 32'd0;
            R_slt, I_slti: ALU_OUT = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0;
            R_sll, I_slli: ALU_OUT = A << B[4:0];
            R_and, I_andi: ALU_OUT = A & B;
            R_or, I_ori:   ALU_OUT = A | B;
            R_xor, I_xori: ALU_OUT = A ^ B;
            R_sra, I_srai: ALU_OUT = $signed(A) >>> B[4:0];
            R_srl, I_srli: ALU_OUT = A >> B[4:0];
            I_sltiu: ALU_OUT = (A < B) ? 32'd1 : 32'd0;
            U_lui:   ALU_OUT = B;
            default: ALU_OUT = A + B;
        endcase

        if (B_TYPE) begin
            branch_taken = (B_bne && (rdata_1 != rdata_2)) ||
                           (B_beq && (rdata_1 == rdata_2)) ||
                           (B_bge && ($signed(rdata_1) >= $signed(rdata_2))) ||
                           (B_bgeu && (rdata_1 >= rdata_2)) ||
                           (B_blt && ($signed(rdata_1) < $signed(rdata_2))) ||
                           (B_bltu && (rdata_1 < rdata_2));
            ALU_OUT = pc + imm;
        end
    end
endmodule
