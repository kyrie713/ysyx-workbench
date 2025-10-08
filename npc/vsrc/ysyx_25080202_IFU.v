module ysyx_25080202_IFU(
    input  clk,
    input  rst,
    input  [31:0] PC,
    input pc_valid,
    input lsu_ready,
    input wbu_ready,
    output reg [31:0] inst,
    output reg ifu_valid,
    output reg ifu_wen,
    output reg        ifu_reqValid,
    input             ifu_respValid,
    output reg [31:0] ifu_raddr,
    input  [31:0]     ifu_rdata
);
    localparam IFU_IDLE = 1'b0;
    localparam IFU_WAIT = 1'b1;
    reg ifu_state;

    always @(posedge clk) begin
        if (rst) begin
            ifu_state    <= IFU_IDLE;
            inst         <= 32'h0; // NOP
            ifu_valid <= 1'b0;
            ifu_raddr <= 32'h30000000;
            ifu_reqValid <= 1'b0;
            //ifu_wen <=1'b0;
        end else begin
            case (ifu_state)
                IFU_IDLE: begin
                    if(pc_valid) begin 
                        ifu_state <= IFU_WAIT; // 发请求后进入 WAIT
                        ifu_raddr <= PC;
                        ifu_reqValid <=1'b1;
                    end 
                    else begin 
                        ifu_state <=IFU_IDLE;
                        //if(wbu_ready || lsu_ready && ifu_valid) begin
                        if((wbu_ready || lsu_ready)&& ifu_valid) begin
                            ifu_valid <= 1'b0;
                        end
                    end
                end
                IFU_WAIT: begin
                    if (ifu_reqValid) begin
                        ifu_reqValid <= 1'b0;
                    end                    
                    if (ifu_respValid) begin
                        ifu_state <= IFU_IDLE;
                        ifu_valid <= 1'b1;
                        inst <= ifu_rdata;
                    end
                end
                default :begin
                    ifu_state <= IFU_IDLE;
                    end
            endcase
        end
    end
endmodule



