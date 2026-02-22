module ALU(
    input R_TYPE,
    input I_TYPE,
    input S_TYPE,
    input B_TYPE,
    input J_TYPE,
    input U_TYPE,
    input R_add,
    input I_add,
    input I_jalr,
    input l_lbu,
    input l_lw,
    input [31:0] rdata_1,
    input [31:0] rdata_2,
    input [31:0] imm,
    input [31:0] pc,
    output reg [31:0] ALU_OUT
);
    reg [31:0] A;
    reg [31:0] B;

    always @(*) begin 
        A = 0;
        B = 0;
        ALU_OUT = 0;

        if (R_TYPE | I_TYPE | S_TYPE) begin
            A = rdata_1;
        end
        else if (B_TYPE | J_TYPE) begin 
            A = pc;
        end
        else if (U_TYPE) begin 
            A = 32'b0;
        end

        if (R_TYPE) begin 
            B = rdata_2;
        end 
        else if (S_TYPE | I_TYPE | B_TYPE | U_TYPE) begin
            B = imm;
        end

        if (R_add | I_add | I_jalr | U_TYPE | S_TYPE | l_lbu|l_lw) begin 
            ALU_OUT = A + B;
        end else begin
            ALU_OUT = 0;
        end
        // $display("A = 0x%08x\n",A);//debug
        // $display("B = 0x%08x\n",B);//debug
        // $display("ALU_OUT = 0x%08x\n",ALU_OUT);//debug
        // $display("I_TYPE = %d\n",I_TYPE);//debug
    end
endmodule