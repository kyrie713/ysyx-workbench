module IFU(
    input clk,
    input [31:0] PC,
    output reg [31:0] ifu_raddr,
    input [31:0] ifu_rdata,
    output[31:0] inst
);
    assign ifu_raddr = PC;
    assign inst = ifu_rdata;
endmodule