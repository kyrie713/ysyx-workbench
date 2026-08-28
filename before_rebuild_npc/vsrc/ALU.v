module ALU(
    input R_TYPE,
    input I_TYPE,
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
    input I_sltiu,
    input I_srai,
    input I_xori,
    input I_ori,
    input I_andi,
    input I_srli,
    input I_slli,
    input I_jalr,
    input I_csrrw,
    input I_csrrs,
    input l_lbu,
    input l_lw,
    input l_lb,
    input l_lh,
    input l_lhu,
    input U_lui,
    input U_auipc,
    input J_jal,
    input [4:0] shamt,
    input [31:0] rdata_1,
    input [31:0] rdata_2,
    input [31:0] inst,
    input [31:0] imm,
    input [31:0] pc,
    output reg [31:0] csr_wdata,
    output reg [31:0] ALU_OUT
);
    reg [31:0] A;
    reg [31:0] B;

    always @(*) begin 
        A = 0;
        B = 0;
        ALU_OUT = 0;

        if(I_csrrw |I_csrrs) begin
            csr_wdata = rdata_1;
        end
        else begin 
            csr_wdata = 32'b0;
        end
        if (R_TYPE || I_TYPE || S_TYPE) begin
            A = rdata_1;
        end
        else if (J_jal ||B_TYPE ||U_auipc) begin 
            A = pc;
        end
        else if (U_lui) begin 
            A = 32'b0;
        end

        if (R_TYPE) begin 
            B = rdata_2;
        end 
        else if (S_TYPE || I_TYPE || B_TYPE || U_TYPE ||J_jal) begin
            B = imm;
        end


        case (1'b1)
            R_add, I_addi, I_jalr, U_auipc, S_TYPE, l_lbu, l_lw,U_lui,l_lh,l_lhu,l_lb: ALU_OUT = A + B;
            R_and:   ALU_OUT = A & B;
            R_or:    ALU_OUT = A | B;
            R_xor:   ALU_OUT = A ^ B;
            R_sll:   ALU_OUT = A << B[4:0];
            R_sub:   ALU_OUT = A - B;          
            R_sltu:  ALU_OUT = (A < B) ? 1 : 0;  
            R_slt:   ALU_OUT = ($signed(A) < $signed(B)) ? 1 : 0;
            R_sra:   ALU_OUT = $signed(A) >>> B[4:0];
            R_srl:   ALU_OUT = A >> B[4:0];
            J_jal:   ALU_OUT = A + B;
            B_bne:   ALU_OUT = (rdata_1 != rdata_2) ? A+B : A+4;
            B_bge:   ALU_OUT = ($signed(rdata_1) >= $signed(rdata_2)) ? A+B : A+4;
            B_beq:   ALU_OUT = (rdata_1 == rdata_2) ? A+B : A+4;
            B_bgeu:  ALU_OUT = (rdata_1 >= rdata_2) ? A+B : A+4;
            B_bltu:  ALU_OUT = (rdata_1 <  rdata_2) ? A+B : A+4;
            B_blt:   ALU_OUT = ($signed(rdata_1) < $signed(rdata_2)) ? A+B : A+4;
            I_srli:  ALU_OUT = A >> shamt;
            I_slli:  ALU_OUT = A << shamt;
            I_srai:  ALU_OUT = $signed(A) >>> shamt;
            I_sltiu: ALU_OUT = (A < B) ? 1 : 0;
            I_andi:  ALU_OUT = A & B;
            I_xori:  ALU_OUT = A ^ B;
            I_ori:   ALU_OUT = A | B;
            default: ALU_OUT = 0;
    endcase

    end
endmodule