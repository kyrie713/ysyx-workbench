module IFU(
    input         clk,
    input         rst,
    input  [31:0] pc,
    input  [31:0] ifu_rdata,
    output [31:0] ifu_raddr,
    output [31:0] inst,
    output        inst_valid
);
    localparam IDLE = 1'b0;
    localparam WAIT = 1'b1;

    reg state;

    assign ifu_raddr = pc;
    assign inst = ifu_rdata;
    assign inst_valid = (state == WAIT);

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: state <= WAIT;
                WAIT: state <= IDLE;
            endcase
        end
    end
endmodule
