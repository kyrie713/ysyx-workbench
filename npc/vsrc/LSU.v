module LSU(
    input [31:0] MemReadData,
    input [31:0] R2_data,
    input [31:0] ALU_OUT,
    input S_sb,
    input S_sw,
    input S_sh,
    output  reg [31:0] MemWriteData,
    output  reg [31:0] MemReadDataoneword,
    output  reg [3:0] wmask
);
  always @(*) begin

    MemWriteData = 32'b0;
    MemReadDataoneword = 32'b0;
    wmask = 4'b0000;

    if (S_sb) begin // 字节存储
        case(ALU_OUT[1:0])
          2'b00: MemWriteData = {24'b0, R2_data[7:0]};
          2'b01: MemWriteData = {16'b0, R2_data[7:0], 8'b0};
          2'b10: MemWriteData = {8'b0, R2_data[7:0], 16'b0};
          2'b11: MemWriteData = {R2_data[7:0], 24'b0};
        endcase
    end else if(S_sw)begin // 字存储
        MemWriteData = R2_data;
    end else if (S_sh) begin
        case (ALU_OUT[1:0])
          2'b00: begin
            MemWriteData = {16'b0, R2_data[15:0]};
          end
          2'b10: begin
            MemWriteData = {R2_data[15:0], 16'b0};
          end
          default: begin
            MemWriteData = 32'b0;
          end
      endcase
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
    end else if (S_sh) begin
       case(ALU_OUT[1:0])
          2'b00:wmask = 4'b0011;
          2'b10:wmask = 4'b1100;
          default:begin
            wmask = 4'b0000;
          end
       endcase
    end
  end
endmodule