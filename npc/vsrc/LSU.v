module LSU(
    input clk,
    input [31:0] R2_data,
    input [31:0] ALU_OUT,
    input l_lw,
    input l_lbu,
    input S_sb,
    input S_sw,
    input MemWEn,
    output [31:0] mem_addr,
    output do_memread,
    output reg [31:0] MemReadData,
    output reg [31:0] load_data,
    output reg [31:0] MemWriteData,
    output reg [3:0] wmask
);
  import "DPI-C" function int pmem_read(input int raddr);
  import "DPI-C" function void pmem_write(
    input int waddr, input int wdata, input int wmask);

  assign mem_addr = ALU_OUT;
  assign do_memread = l_lw | l_lbu;

  always @(*) begin
    MemReadData = do_memread ? pmem_read(mem_addr) : 32'b0;
  end

  always @(*) begin
    load_data = 32'b0;
    if (l_lw) begin
        load_data = MemReadData;
    end else if (l_lbu) begin
        case(ALU_OUT[1:0])
          2'b00: load_data = {24'b0, MemReadData[7:0]};
          2'b01: load_data = {24'b0, MemReadData[15:8]};
          2'b10: load_data = {24'b0, MemReadData[23:16]};
          2'b11: load_data = {24'b0, MemReadData[31:24]};
        endcase
    end
  end

  always @(*) begin
    MemWriteData = 32'b0;
    wmask = 4'b0000;

    if (S_sb) begin // 字节存储
        case(ALU_OUT[1:0])
          2'b00: MemWriteData = {24'b0, R2_data[7:0]};
          2'b01: MemWriteData = {16'b0, R2_data[7:0], 8'b0};
          2'b10: MemWriteData = {8'b0, R2_data[7:0], 16'b0};
          2'b11: MemWriteData = {R2_data[7:0], 24'b0};
        endcase
    end else begin // 字存储
        MemWriteData = R2_data;
    end

    // 写掩码生成
    if (S_sb) begin
        case(ALU_OUT[1:0])
          2'b00: wmask = 4'b0001;
          2'b01: wmask = 4'b0010;
          2'b10: wmask = 4'b0100;
          2'b11: wmask = 4'b1000;
        endcase
    end else if (S_sw) begin
        wmask = 4'b1111;
    end
  end

  always @(posedge clk) begin
    if (MemWEn) begin
        pmem_write(mem_addr, MemWriteData, {28'b0, wmask});
    end
  end
endmodule
