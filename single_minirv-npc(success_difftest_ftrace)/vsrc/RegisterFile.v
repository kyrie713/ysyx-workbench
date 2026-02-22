module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input [ADDR_WIDTH-1:0] raddr_1,
  input [ADDR_WIDTH-1:0] raddr_2,
  input rst,
  output reg [DATA_WIDTH-1:0] rdata_1,
  output reg [DATA_WIDTH-1:0] rdata_2,
  
  // 新增：调试寄存器输出端口
  output reg [DATA_WIDTH-1:0] zero,
  output reg [DATA_WIDTH-1:0] ra,
  output reg [DATA_WIDTH-1:0] sp,
  output reg [DATA_WIDTH-1:0] gp,
  output reg [DATA_WIDTH-1:0] tp,
  output reg [DATA_WIDTH-1:0] s0,
  output reg [DATA_WIDTH-1:0] s1,
  output reg [DATA_WIDTH-1:0] a0,
  output reg [DATA_WIDTH-1:0] a1,
  output reg [DATA_WIDTH-1:0] a2,
  output reg [DATA_WIDTH-1:0] a3,
  output reg [DATA_WIDTH-1:0] a4,
  output reg [DATA_WIDTH-1:0] a5  
);
  //import "DPI-C" function void set_gpr_ptr(input logic [31:0] a[]);
    // 寄存器定义（RISC-V ABI名称）
    localparam ZERO = 0;
    localparam RA   = 1;
    localparam SP   = 2;
    localparam GP   = 3;
    localparam TP   = 4;
    localparam S0   = 8;
    localparam S1   = 9;
    localparam A0   = 10;
    localparam A1   = 11;
    localparam A2   = 12;
    localparam A3   = 13;
    localparam A4   = 14;
    localparam A5   = 15;
      
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
    
    // 调试寄存器输出    
    assign zero = (ZERO == 0) ? 32'b0 : rf[ZERO]; // x0 始终为0
    assign ra   = rf[RA];
    assign sp   = rf[SP];
    assign gp   = rf[GP];
    assign tp   = rf[TP];
    assign s0   = rf[S0];
    assign s1   = rf[S1];
    assign a0   = rf[A0];
    assign a1   = rf[A1];
    assign a2   = rf[A2];
    assign a3   = rf[A3];
    assign a4   = rf[A4];
    assign a5   = rf[A5];

  // initial begin 
  //   set_gpr_ptr(rf);
  // end
endmodule