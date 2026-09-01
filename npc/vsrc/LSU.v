module LSU #(
    parameter integer RANDOM_REQ_DELAY = 0,
    parameter integer MAX_REQ_DELAY = 3
)(
    input         clk,
    input         rst,
    input         inst_valid,
    input  [31:0] R2_data,
    input  [31:0] ALU_OUT,
    input         l_lw,
    input         l_lbu,
    input         S_sb,
    input         S_sw,
    output        lsu_reqValid,
    output [31:0] lsu_addr,
    output [1:0]  lsu_size,
    output        lsu_wen,
    output reg [31:0] lsu_wdata,
    output reg [3:0]  lsu_wmask,
    input         lsu_respValid,
    input  [31:0] lsu_rdata,
    output reg [31:0] load_data,
    output        lsu_done
);
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;
    localparam RESP = 2'b10;

    reg [1:0] state;
    reg [31:0] load_data_reg;
    reg [15:0] lfsr;
    integer req_delay_count;
    wire is_load = l_lw | l_lbu;
    wire is_store = S_sb | S_sw;
    wire is_mem = is_load | is_store;

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

    assign lsu_addr = ALU_OUT;
    // SimpleBus size encoding: byte=00, halfword=01, word=10.
    assign lsu_size = (l_lbu || S_sb) ? 2'b00 : 2'b10;
    assign lsu_reqValid = inst_valid && is_mem && (state == IDLE) &&
                          (req_delay_count == 0);
    assign lsu_wen = lsu_reqValid && is_store;
    assign lsu_done = inst_valid && is_mem && (state == RESP);

    always @(*) begin
        lsu_wdata = 32'b0;
        lsu_wmask = 4'b0000;

        if (S_sb) begin
            case (ALU_OUT[1:0])
                2'b00: lsu_wdata = {24'b0, R2_data[7:0]};
                2'b01: lsu_wdata = {16'b0, R2_data[7:0], 8'b0};
                2'b10: lsu_wdata = {8'b0, R2_data[7:0], 16'b0};
                2'b11: lsu_wdata = {R2_data[7:0], 24'b0};
            endcase
            lsu_wmask = 4'b0001 << ALU_OUT[1:0];
        end else if (S_sw) begin
            lsu_wdata = R2_data;
            lsu_wmask = 4'b1111;
        end
    end

    always @(*) begin
        load_data = 32'b0;
        if (lsu_done) begin
            if (l_lw) begin
                load_data = load_data_reg;
            end else if (l_lbu) begin
                case (ALU_OUT[1:0])
                    2'b00: load_data = {24'b0, load_data_reg[7:0]};
                    2'b01: load_data = {24'b0, load_data_reg[15:8]};
                    2'b10: load_data = {24'b0, load_data_reg[23:16]};
                    2'b11: load_data = {24'b0, load_data_reg[31:24]};
                endcase
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            load_data_reg <= 32'b0;
            lfsr <= 16'h1;
            req_delay_count <= (RANDOM_REQ_DELAY != 0) ? random_delay(32'h1) : 0;
        end else begin
            case (state)
                IDLE: begin
                    if (req_delay_count != 0) begin
                        req_delay_count <= req_delay_count - 1;
                    end else if (lsu_reqValid) begin
                        state <= WAIT;
                    end
                end
                WAIT: begin
                    if (lsu_respValid) begin
                        if (is_load) begin
                            load_data_reg <= lsu_rdata;
                        end
                        state <= RESP;
                    end
                end
                RESP: begin
                    state <= IDLE;
                    if (RANDOM_REQ_DELAY != 0) begin
                        req_delay_count <= random_delay({16'b0, lfsr});
                        lfsr <= lfsr_next(lfsr);
                    end else begin
                        req_delay_count <= 0;
                    end
                end
                default: begin
                    state <= IDLE;
                    load_data_reg <= 32'b0;
                    lfsr <= 16'h1;
                    req_delay_count <= 0;
                end
            endcase
        end
    end
endmodule
