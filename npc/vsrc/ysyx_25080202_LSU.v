module ysyx_25080202_LSU(
    input             rst,
    input             clk,
    input      [31:0] R2_data,
    input      [31:0] ALU_OUT,
    //input      [31:0] PC_plus_4,
    input             l_lw,
    input             l_lbu,
    input             S_sb,
    input             S_sw,
    input             R_TYPE,
    input             I_TYPE_ARITH,
    input             I_TYPE,
    input             U_TYPE,
    input             J_TYPE,
    input             I_csrrw,
    input      [31:0] CSR_RDATA,
    input      [4:0]  rd,
    input [3:0] wmask,//IDU传进来的
    // SimpleBus 接口
    input ifu_valid,
    input wbu_ready,
    output reg lsu_valid,
    output reg lsu_reqValid,
    input  lsu_respValid,
    output reg [31:0] lsu_addr,
    output reg lsu_wen,
    output reg [31:0] lsu_wdata,
    output reg [3:0]  lsu_wmask,
    input  [31:0] lsu_rdata,
    output reg lsu_ready,
    output lsu_working,
    output reg [1:0] io_lsu_size,
    // 写回寄存器文件
    output reg [31:0] RegWriteData
);

    // 状态机
    localparam LSU_IDLE = 1'b0;
    localparam LSU_WAIT = 1'b1;
    reg state;

    // 写数据与掩码（组合逻辑）
    wire [31:0] deviation_rdata = lsu_rdata >> (lsu_addr[1:0] * 8);
    // reg [31:0] MemWriteData;
    //reg [3:0]  wmask;


    //assign lsu_addr  = ALU_OUT;
    wire wen  = S_sb | S_sw;
    wire ren  = l_lbu|l_lw; 
    assign lsu_working = ren | wen;

    // 状态迁移（时序逻辑）
    always @(posedge clk) begin
        if (rst) begin
            state        <= LSU_IDLE;
            lsu_ready    <= 1'b0;
            lsu_valid    <= 1'b0;
            lsu_reqValid <= 1'b0;
            lsu_wen      <= 1'b0;
            RegWriteData <=32'b0;
            io_lsu_size <=2'b0;
        end else begin
            case (state)
                LSU_IDLE: begin
                        if (ifu_valid && (wen || ren)) begin
                          //$display("[LSU][%0t] REQ: addr=0x%08h wen=%b ren=%b wdata=0x%08h wmask=0x%1h ALU_OUT=0x%08h", 
         //$time, ALU_OUT, wen, ren, R2_data, wmask, ALU_OUT);
                          state <= LSU_WAIT;
                          lsu_ready<=1'b1;
                          lsu_wen<=wen;
                          //lsu_wdata<= R2_data;
                          lsu_addr <= ALU_OUT;
                          lsu_wmask <= (wmask << ALU_OUT[1:0]);
                          lsu_wdata <= (R2_data << (8 * ALU_OUT[1:0]));
                          //lsu_wdata<= R2_data;
                          lsu_reqValid <= 1'b1;
                          if(S_sb || l_lbu) begin
                            io_lsu_size <= 2'b00;
                          end
                          else if(S_sw || l_lw) begin 
                            io_lsu_size <=2'b10;
                          end else begin 
                            io_lsu_size <= 2'b00;
                          end
                        end
                        else begin
                          state<=LSU_IDLE;
                          if(lsu_valid && wbu_ready) begin
                            lsu_valid <= 1'b0;
                          end
                        end
                      end
                LSU_WAIT: begin
                    if(lsu_ready) begin
                        lsu_ready <= 1'b0;
                    end
                
                    if(lsu_reqValid) begin
                        lsu_reqValid <= 1'b0;
                    end

                    if (lsu_respValid) begin
                        lsu_valid <= 1'b1;
                        state <= LSU_IDLE;
                        if(lsu_wen) begin
                            lsu_wen <= 1'b0;
                        end
                        if(l_lw) begin
                            RegWriteData <= deviation_rdata;
                        end else if(l_lbu) begin
                            // case(ALU_OUT[1:0])
                            //     2'b00: RegWriteData = {24'b0, lsu_rdata[7:0]};
                            //     2'b01: RegWriteData = {24'b0, lsu_rdata[15:8]};
                            //     2'b10: RegWriteData = {24'b0, lsu_rdata[23:16]};
                            //     2'b11: RegWriteData = {24'b0, lsu_rdata[31:24]};
                            // endcase
                            RegWriteData <= {24'b0, deviation_rdata[7:0]};
                            end else begin 
                                RegWriteData <=0;
                        end
                end    
            end                
            endcase
        end
    end

endmodule