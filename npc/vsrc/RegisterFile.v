module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr_1,
  input [ADDR_WIDTH-1:0] raddr_2,
  output [DATA_WIDTH-1:0] rdata_1,
  output [DATA_WIDTH-1:0] rdata_2,
  output [DATA_WIDTH-1:0] debug_a0
  // output [DATA_WIDTH-1:0] debug_zero,
  // output [DATA_WIDTH-1:0] debug_ra,
  // output [DATA_WIDTH-1:0] debug_sp,
  // output [DATA_WIDTH-1:0] debug_gp,
  // output [DATA_WIDTH-1:0] debug_tp,
  // output [DATA_WIDTH-1:0] debug_s0,
  // output [DATA_WIDTH-1:0] debug_s1,
  // output [DATA_WIDTH-1:0] debug_a0,
  // output [DATA_WIDTH-1:0] debug_a1,
  // output [DATA_WIDTH-1:0] debug_a2,
  // output [DATA_WIDTH-1:0] debug_a3,
  // output [DATA_WIDTH-1:0] debug_a4,
  // output [DATA_WIDTH-1:0] debug_a5
);
      
/* 寄存器文件 */
reg [DATA_WIDTH-1:0] rf [2**(ADDR_WIDTH-1)-1:0];
  integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1)
            rf[i] = 32'b0; // DPI-C 访问前保证清零
    end



  always @(posedge clk) begin
    if (wen && waddr != 0) rf[waddr[3:0]] <= wdata;
  end

  assign rdata_1 = (raddr_1 == 0) ? 32'b0 : rf[raddr_1[3:0]];
  assign rdata_2 = (raddr_2 == 0) ? 32'b0 : rf[raddr_2[3:0]];
  assign debug_a0 = rf[10];

  // assign debug_zero = 32'b0;
  // assign debug_ra = rf[1];
  // assign debug_sp = rf[2];
  // assign debug_gp = rf[3];
  // assign debug_tp = rf[4];
  // assign debug_s0 = rf[8];
  // assign debug_s1 = rf[9];
  // assign debug_a0 = rf[10];
  // assign debug_a1 = rf[11];
  // assign debug_a2 = rf[12];
  // assign debug_a3 = rf[13];
  // assign debug_a4 = rf[14];
  // assign debug_a5 = rf[15];

endmodule
