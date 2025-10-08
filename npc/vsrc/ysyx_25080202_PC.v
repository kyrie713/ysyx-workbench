module ysyx_25080202_PC (
    input clk,
    input rst,
    input [31:0] next_pc,
    input wbu_valid,
    output reg pc_valid,
    output reg [31:0] pc
);
    always @(posedge clk) begin
        if (rst) begin
            pc <= 32'h30000000;  // 起始地址
            pc_valid <= 1;
        end
        else if (wbu_valid) begin
            pc <= next_pc;
            pc_valid <= 1;
        end
        else if(pc_valid) begin
            pc_valid <= 0;
        end
    end
endmodule
