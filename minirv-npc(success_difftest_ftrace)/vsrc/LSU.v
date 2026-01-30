module LSU(
    input [31:0] MemReadData,
    input [31:0] R2_data,
    input [31:0] ALU_OUT,
    input [31:0] PC_plus_4,
    input l_lw,
    input l_lbu,
    input I_jalr,
    input S_sb,
    input S_sw,
    input R_TYPE,
    input I_TYPE_ARITH,
    input I_TYPE,
    input U_TYPE,
    input J_TYPE,
    output  reg [31:0] RegWriteData,
    output  reg [31:0] MemWriteData,
    output  reg [31:0] MemReadDataoneword,
    output  reg Reg_WE,
    output  reg [3:0] wmask
);
  always @(*) begin
    Reg_WE = R_TYPE | I_TYPE | U_TYPE | J_TYPE;
    
    RegWriteData = 32'b0;
    MemWriteData = 32'b0;
    MemReadDataoneword = 32'b0;
    wmask = 4'b0000;
    // 寄存器写回数据选择
    if(l_lw) begin 
        RegWriteData = MemReadData;
    end else if (R_TYPE|I_TYPE_ARITH|U_TYPE) begin
        RegWriteData = ALU_OUT;
    end else if(I_jalr) begin
        RegWriteData = PC_plus_4;
    end else if(l_lbu) begin
        case(ALU_OUT[1:0])
          2'b00: RegWriteData = {24'b0, MemReadData[7:0]};
          2'b01: RegWriteData = {24'b0, MemReadData[15:8]};
          2'b10: RegWriteData = {24'b0, MemReadData[23:16]};
          2'b11: RegWriteData = {24'b0, MemReadData[31:24]};
        endcase
    end

    // 存储器写数据
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
endmodule