module LSU(
    //input [31:0] MemReadData,
    input ifu_done,
    input clk,
    input rst,
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

    output reg         lsu_reqValid,
    input              lsu_reqReady,
    output [31:0]      lsu_addr,
    output             lsu_wen,
    output reg [31:0]  lsu_wdata,
    output reg [ 3:0]  lsu_wmask,
    input              lsu_respValid,
    output reg         lsu_respReady,
    input  [31:0]      lsu_rdata,
    output             lsu_busy,

    //output lsu_ren,

    output  reg [31:0] load_result

);

    reg [1:0] lsu_state;
    localparam lsu_idle = 2'b00;
    localparam lsu_wait_req = 2'b01;
    localparam lsu_wait_resp = 2'b10;
    wire is_load = l_lw | l_lbu | l_lh | l_lhu | l_lb;
    wire is_store = S_sb | S_sh | S_sw;
    assign lsu_busy = (is_load | is_store) && !(lsu_state == lsu_wait_req && lsu_respValid);

    always @(posedge clk) begin
        if(rst) begin
            lsu_reqValid  <= 0;
            lsu_respReady <= 0;
            lsu_state <= lsu_idle;
        end
        else begin
            case (lsu_state)
                lsu_idle:   begin
                            if (is_load || is_store) begin
                                lsu_reqValid <= 1;
                                lsu_state <= lsu_wait_req;
                            end
                            else begin
                                lsu_reqValid <= 0;
                                lsu_state <= lsu_idle;
                            end
                            end
                lsu_wait_req:   begin 
                            if (lsu_reqReady && lsu_reqValid) begin
                                lsu_respReady <= 1;
                                lsu_state <= lsu_wait_resp;
                            end
                            else begin
                                lsu_respReady <= 0;
                                lsu_state <= lsu_wait_req;
                            end
                            end
                lsu_wait_resp:   begin
                            if (lsu_respValid && lsu_respReady) begin
                                lsu_respReady <= 0;
                                lsu_state <= lsu_idle;
                            end
                            else begin
                                lsu_respReady <= 0;
                                lsu_state <= lsu_wait_resp;
                            end
                            end
                default:    begin   
                            lsu_reqValid <= 0;
                            lsu_respReady <= 0;
                            lsu_state <= lsu_idle;
                            end
            endcase
        end
    end 
//     always @(*) begin
//         lsu_next_state = lsu_state;
//         lsu_reqValid = 0;
//         lsu_respReady = 0;
//         case (lsu_state)
//             lsu_idle:   begin
//                         if (is_load) begin
//                             lsu_reqValid = 1;
//                             if(lsu_reqReady) begin
//                                 lsu_next_state = lsu_wait;
//                             end
//                             else begin
//                                 lsu_next_state = lsu_idle;
//                             end
//                             //lsu_addr = ALU_OUT;
//                         end
//                         else if (is_store) begin
//                             lsu_reqValid = 1;
//                             if(lsu_reqReady) begin
//                                 lsu_next_state = lsu_wait;
//                             end
//                             else begin
//                                 lsu_next_state = lsu_idle;
//                             end
//                             //lsu_addr = ALU_OUT;
//                         end
//                         else begin
//                             lsu_next_state = lsu_idle;
//                         end
//                         end
//             lsu_wait:   begin 
//                         if (lsu_respValid) begin
//                             lsu_respReady = 1;
//                             lsu_next_state = lsu_idle;
//                         end
//                         end
//             default:    begin
//                         lsu_next_state = lsu_idle;
//                         end
//         endcase
// end
  assign lsu_addr = ALU_OUT;
  //assign lsu_ren = l_lw | l_lbu | l_lh | l_lhu |l_lb;
  assign lsu_wen = MemWEn&&ifu_done;

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