module PC(
    input  I_jalr,
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
        end else
            next_pc = PC_plus_4;
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