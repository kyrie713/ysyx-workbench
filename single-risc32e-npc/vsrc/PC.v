module PC(
    input I_jalr,
    input I_ecall, 
    input I_mret,
    input J_jal,
    input B_bne,
    input B_bge,
    input B_beq,
    input B_bgeu,
    input B_bltu,
    input B_blt,
    input [31:0]mtvec,
    input [31:0]csr_rdata,
    input [31:0] ALU_OUT,
    input clk,
    input rst,
    output reg [31:0] PC,
    output reg [31:0] PC_plus_4,
    output reg [31:0] next_pc
);
    always @(*) begin 
        PC_plus_4 = PC + 4;
        if(I_jalr) begin
            next_pc = {ALU_OUT[31:1],1'b0};
        end else if(J_jal) begin
            next_pc = ALU_OUT;
        end else if(B_bne) begin
            next_pc = ALU_OUT;
        end else if(B_bge) begin
            next_pc = ALU_OUT;
        end else if(B_beq) begin
            next_pc = ALU_OUT;
        end else if(B_bgeu) begin
            next_pc = ALU_OUT;
        end else if(B_bltu) begin
            next_pc = ALU_OUT;
        end else if(B_blt) begin
            next_pc = ALU_OUT;
        end else if(I_ecall) begin
            next_pc = mtvec;
        end else if(I_mret) begin
            next_pc = csr_rdata;
           // $display("I_mret_csr_rdata = 0x%08x\n",csr_rdata);
        end else begin
            next_pc = PC_plus_4;
        end
    end
    
    always @(posedge clk) begin 
        if(rst) begin 
            PC <= 32'h80000000;
        end
        else if(I_jalr ) begin 
            PC <= next_pc;
        end else begin 
            PC <= next_pc;
        end 
    end 
endmodule