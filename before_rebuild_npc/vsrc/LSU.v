module LSU(
    //input [31:0] MemReadData,
    input [31:0] R2_data,
    input [31:0] ALU_OUT,
    input S_sb,
    input S_sw,
    input S_sh,
    input l_lbu,
    input l_lw,
    input l_lh,
    input l_lhu,
    input l_lb,
    input MemWEn,
    input  [31:0] lsu_rdata,
    output [31:0] lsu_raddr,
    output [31:0] lsu_waddr,
    output reg [31:0] lsu_wdata,
    output lsu_ren,
    output lsu_wen,
    output  reg [31:0] load_result,
    output  reg [3:0] lsu_wmask
);



  assign lsu_raddr = ALU_OUT;
  assign lsu_waddr = ALU_OUT;
  assign lsu_ren = l_lw | l_lbu | l_lh | l_lhu |l_lb;
  assign lsu_wen = MemWEn;

  always @(*) begin

    lsu_wdata = 32'b0;
    lsu_wmask = 4'b0000;

    if (S_sb) begin // 字节存储
        case(ALU_OUT[1:0])
          2'b00: lsu_wdata = {24'b0, R2_data[7:0]};
          2'b01: lsu_wdata = {16'b0, R2_data[7:0], 8'b0};
          2'b10: lsu_wdata = {8'b0, R2_data[7:0], 16'b0};
          2'b11: lsu_wdata = {R2_data[7:0], 24'b0};
        endcase
    end else if(S_sw)begin // 字存储
        lsu_wdata = R2_data;
    end else if (S_sh) begin
        case (ALU_OUT[1:0])
          2'b00: begin
            lsu_wdata = {16'b0, R2_data[15:0]};
          end
          2'b10: begin
            lsu_wdata = {R2_data[15:0], 16'b0};
          end
          default: begin
            lsu_wdata = 32'b0;
          end
      endcase
    end

    // 写掩码生成
    if (S_sb) begin
        case(ALU_OUT[1:0])
          2'b00: lsu_wmask = 4'b0001;
          2'b01: lsu_wmask = 4'b0010;
          2'b10: lsu_wmask = 4'b0100;
          2'b11: lsu_wmask = 4'b1000;
        endcase
    end else if (S_sw) begin
        lsu_wmask = 4'b1111;
    end else if (S_sh) begin
       case(ALU_OUT[1:0])
          2'b00:lsu_wmask = 4'b0011;
          2'b10:lsu_wmask = 4'b1100;
          default:begin
            lsu_wmask = 4'b0000;
          end
       endcase
    end


    //Reg_WE = R_TYPE | I_TYPE | U_TYPE | J_TYPE | I_csrrs | I_csrrw;
    
    load_result = 32'b0;
    case (1'b1)
        l_lw: load_result = lsu_rdata;
        l_lbu: begin
            case(ALU_OUT[1:0])
                2'b00: load_result = {24'b0, lsu_rdata[7:0]};
                2'b01: load_result = {24'b0, lsu_rdata[15:8]};
                2'b10: load_result = {24'b0, lsu_rdata[23:16]};
                2'b11: load_result = {24'b0, lsu_rdata[31:24]};
                default: load_result = 32'b0;
            endcase
        end
        l_lb: begin
            case(ALU_OUT[1:0])
                2'b00: load_result = {{24{lsu_rdata[7]}}, lsu_rdata[7:0]};
                2'b01: load_result = {{24{lsu_rdata[15]}},lsu_rdata[15:8]};
                2'b10: load_result = {{24{lsu_rdata[23]}},lsu_rdata[23:16]};
                2'b11: load_result = {{24{lsu_rdata[31]}},lsu_rdata[31:24]};
                //default: RegWriteData = 32'b0;
            endcase
        end        
        l_lh: begin 
            case(ALU_OUT[1:0])
                2'b00:load_result = {{16{lsu_rdata[15]}},lsu_rdata[15:0]};
                2'b10:load_result = {{16{lsu_rdata[31]}},lsu_rdata[31:16]};
                default: load_result = 32'b0;
            endcase
        end
        l_lhu:begin
            case(ALU_OUT[1:0])
                2'b00:load_result = {16'b0,lsu_rdata[15:0]};
                2'b10:load_result = {16'b0,lsu_rdata[31:16]};
                default:load_result = 32'b0;
            endcase
        end
    endcase
  end
endmodule