module IFU #(
    parameter integer RANDOM_REQ_DELAY = 0,
    parameter integer MAX_REQ_DELAY = 3
)(
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
    reg [15:0] lfsr;
    integer req_delay_count;

    function [15:0] lfsr_next;
        input [15:0] value;
        begin
            lfsr_next = {value[14:0],
                         value[15] ^ value[13] ^ value[12] ^ value[10]};
        end
    endfunction

    function integer random_delay;
        input integer value;
        begin
            if (MAX_REQ_DELAY <= 0) begin
                random_delay = 0;
            end else begin
                random_delay = value % (MAX_REQ_DELAY + 1);
            end
        end
    endfunction

    assign ifu_reqValid = (state == IDLE) && (req_delay_count == 0);
    assign ifu_raddr = pc;
    assign inst = inst_reg;
    assign inst_valid = (state == EXEC);

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            inst_reg <= 32'b0;
            lfsr <= 16'h1;
            req_delay_count <= (RANDOM_REQ_DELAY != 0) ? random_delay(32'h1) : 0;
        end else begin
            case (state)
                IDLE: begin
                    if (req_delay_count != 0) begin
                        req_delay_count <= req_delay_count - 1;
                    end else if (ifu_reqValid) begin
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
                        if (RANDOM_REQ_DELAY != 0) begin
                            req_delay_count <= random_delay({16'b0, lfsr});
                            lfsr <= lfsr_next(lfsr);
                        end else begin
                            req_delay_count <= 0;
                        end
                    end
                end
                default: begin
                    state <= IDLE;
                    inst_reg <= 32'b0;
                    lfsr <= 16'h1;
                    req_delay_count <= 0;
                end
            endcase
        end
    end
endmodule
