module IFU(
    input         clk,
    input         rst,
    input  [31:0] pc,
    output        ifu_reqValid,
    output [31:0] ifu_raddr,
    input         ifu_respValid,
    input  [31:0] ifu_rdata,
    output [31:0] inst,
    output        inst_valid,
    input         inst_done
);
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;
    localparam EXEC = 2'b10;

    reg [1:0] state;
    reg [31:0] inst_reg;

    // 随机请求延迟测试代码已注释，正式硬件每次在 IDLE 状态发出请求。
    // parameter integer RANDOM_REQ_DELAY = 0;
    // parameter integer MAX_REQ_DELAY = 3;
    // reg [15:0] lfsr;
    // integer req_delay_count;
    // function lfsr_next;
    // function random_delay;

    assign ifu_reqValid = (state == IDLE);
    assign ifu_raddr = pc;
    assign inst = inst_reg;
    assign inst_valid = (state == EXEC);

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            inst_reg <= 32'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (ifu_reqValid) begin
                        state <= WAIT;
                    end
                end
                WAIT: begin
                    if (ifu_respValid) begin
                        inst_reg <= ifu_rdata;
                        state <= EXEC;
                    end
                end
                EXEC: begin
                    if (inst_done) begin
                        state <= IDLE;
                    end
                end
                default: begin
                    state <= IDLE;
                    inst_reg <= 32'b0;
                end
            endcase
        end
    end
endmodule
