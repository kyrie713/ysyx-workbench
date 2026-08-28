module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr_1,
  input [ADDR_WIDTH-1:0] raddr_2,
  input rst,
  output reg [DATA_WIDTH-1:0] rdata_1,
  output reg [DATA_WIDTH-1:0] rdata_2
);
      
/* 寄存器文件 */
reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0] /*verilator public_flat*/;
  integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1)
            rf[i] = 32'b0; // DPI-C 访问前保证清零
    end



  always @(posedge clk) begin
    if (wen && waddr != 0) rf[waddr] <= wdata;
  end

    assign rdata_1 = (raddr_1 == 0) ? 32'b0 : rf[raddr_1];
    assign rdata_2 = (raddr_2 == 0) ? 32'b0 : rf[raddr_2];
    

endmodule