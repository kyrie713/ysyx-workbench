module IFU(
    input clk,
    input rst,
    input [31:0] PC,
    input lsu_busy,
// --- 与内存的接口 ---
    output reg         ifu_reqValid,
    output reg [31:0]  ifu_raddr,
    input              ifu_reqReady,

    output reg         ifu_respReady,
    input              ifu_respValid,
    input      [31:0]  ifu_rdata,
    output reg         ifu_valid,
    output reg         ifu_done,
    output reg  [31:0] inst_pc,
    output reg  [31:0] inst
);

    reg [1:0] ifu_state;
    
    // localparam ifu_idle     = 2'b00;
    // localparam wait_req     = 2'b01;
    // localparam wait_resp    = 2'b10;
    localparam IDLE = 2'b00;
    localparam ifu_wait  = 2'b10;
    assign ifu_done  = (ifu_state == ifu_wait) ? 1'b1:1'b0;
    assign ifu_raddr = (ifu_state == IDLE )? PC :32'h00000000;
    assign inst = ifu_rdata;
    always @(posedge clk) begin
        if(rst) begin
            ifu_state <= IDLE;
            //ifu_done  <= 0;
        end
        else begin

            case(ifu_state)

                IDLE: begin
                    //ifu_raddr <= PC;
                    ifu_state <= ifu_wait;
                    //ifu_done  <= 0;
                end


                ifu_wait: begin
                    //inst      <= ifu_rdata;
                    //ifu_done  <= 1;
                    ifu_state <= IDLE;
                end


                default: begin
                    ifu_state <= IDLE;
                    //ifu_done  <= 0;
                end

            endcase

        end
    end


    // always @(posedge clk) begin
    //     if (rst) begin
    //         ifu_state <= ifu_idle;
    //         inst <= 32'b0;
    //         ifu_valid <= 0;
    //     end
    //     else begin
    //         case(ifu_state)
    //             ifu_idle: begin  
    //                     ifu_reqValid <= 1;
    //                     ifu_valid <= 0;
    //                     ifu_done <= 0;
    //                     ifu_raddr <= PC;
    //                     ifu_state <= wait_req;
    //             end
    //             wait_req:begin
    //                 if(ifu_reqReady && ifu_reqValid) begin
    //                     ifu_reqValid <= 0;
    //                     ifu_respReady <=1;
    //                     ifu_state <= wait_resp;
    //                 end
    //                 else begin
    //                     ifu_state <= wait_req;
    //                 end
    //             end
    //             wait_resp: begin 
    //                 if (ifu_respValid && ifu_respReady) begin
    //                     inst <= ifu_rdata;
    //                     //inst_valid <= 1;
    //                     inst_pc <= PC;
    //                     ifu_valid <= 1;
    //                     ifu_respReady <= 0;
    //                     ifu_state <= ifu_idle;
    //                 end
    //                 else begin 
    //                     ifu_state <= wait_resp;  
    //                 end
    //             end
    //             default: begin
    //                 ifu_state     <= ifu_idle;  
    //                 ifu_reqValid  <= 0;         
    //                 ifu_respReady <= 0;         
    //             end
    //         endcase

    //    end
    // end
    //assign inst = ((ifu_state == wait_resp) && (ifu_respValid && ifu_respReady)) ? ifu_rdata :32'b0;
endmodule