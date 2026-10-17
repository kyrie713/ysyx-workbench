// RV32E has sixteen architectural integer registers (x0-x15).
module ysyx_25080202_RegisterFile #(
  parameter ADDR_WIDTH = 5,
  parameter DATA_WIDTH = 32
) (
  input clk,
  input rst,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr_1,
  input [ADDR_WIDTH-1:0] raddr_2,
  output [DATA_WIDTH-1:0] rdata_1,
  output [DATA_WIDTH-1:0] rdata_2,
  output [DATA_WIDTH-1:0] debug_a0
);
  reg [DATA_WIDTH-1:0] rf [0:15];
  integer i;

  always @(posedge clk) begin
    if (rst) begin
      for (i = 0; i < 16; i = i + 1)
        rf[i] <= {DATA_WIDTH{1'b0}};
    end else if (wen && (waddr != 0) && (waddr < 16)) begin
      rf[waddr[3:0]] <= wdata;
    end
  end

  assign rdata_1 = (raddr_1 == 0 || raddr_1 >= 16) ? 32'b0 : rf[raddr_1[3:0]];
  assign rdata_2 = (raddr_2 == 0 || raddr_2 >= 16) ? 32'b0 : rf[raddr_2[3:0]];
  assign debug_a0 = rf[10];
endmodule
