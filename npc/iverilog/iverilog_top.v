`timescale 1ns/1ns

module iverilog_memory(
    input         clock,
    input         reset,
    input         ifu_reqValid,
    input  [31:0] ifu_addr,
    output reg    ifu_respValid,
    output reg [31:0] ifu_rdata,
    input         lsu_reqValid,
    input  [31:0] lsu_addr,
    input         lsu_wen,
    input  [31:0] lsu_wdata,
    input  [3:0]  lsu_wmask,
    output reg    lsu_respValid,
    output reg [31:0] lsu_rdata
);
    always @(posedge clock) begin
        if (reset) begin
            ifu_respValid <= 1'b0;
            lsu_respValid <= 1'b0;
        end else begin
            ifu_respValid <= ifu_reqValid;
            if (ifu_reqValid) begin
                ifu_rdata <= $pmem_read(ifu_addr);
            end

            lsu_respValid <= lsu_reqValid;
            if (lsu_reqValid) begin
                if (lsu_wen) begin
                    $pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
                end else begin
                    lsu_rdata <= $pmem_read(lsu_addr);
                end
            end
        end
    end
endmodule

module iverilog_top;
    reg clock;
    reg reset;

    wire        ifu_reqValid;
    wire [31:0] ifu_addr;
    wire        ifu_respValid;
    wire [31:0] ifu_rdata;
    wire        lsu_reqValid;
    wire [31:0] lsu_addr;
    wire [1:0]  lsu_size;
    wire        lsu_wen;
    wire [31:0] lsu_wdata;
    wire [3:0]  lsu_wmask;
    wire        lsu_respValid;
    wire [31:0] lsu_rdata;

    reg [63:0] cycle_count;
    integer max_cycles;
    integer wave_cycles;
    reg wave_enabled;

    NPC dut(
        .clock(clock),
        .reset(reset),
        .io_ifu_reqValid(ifu_reqValid),
        .io_ifu_addr(ifu_addr),
        .io_ifu_respValid(ifu_respValid),
        .io_ifu_rdata(ifu_rdata),
        .io_lsu_reqValid(lsu_reqValid),
        .io_lsu_addr(lsu_addr),
        .io_lsu_size(lsu_size),
        .io_lsu_wen(lsu_wen),
        .io_lsu_wdata(lsu_wdata),
        .io_lsu_wmask(lsu_wmask),
        .io_lsu_respValid(lsu_respValid),
        .io_lsu_rdata(lsu_rdata)
    );

    iverilog_memory memory(
        .clock(clock),
        .reset(reset),
        .ifu_reqValid(ifu_reqValid),
        .ifu_addr(ifu_addr),
        .ifu_respValid(ifu_respValid),
        .ifu_rdata(ifu_rdata),
        .lsu_reqValid(lsu_reqValid),
        .lsu_addr(lsu_addr),
        .lsu_wen(lsu_wen),
        .lsu_wdata(lsu_wdata),
        .lsu_wmask(lsu_wmask),
        .lsu_respValid(lsu_respValid),
        .lsu_rdata(lsu_rdata)
    );

    initial begin
        clock = 1'b0;
        reset = 1'b1;
        cycle_count = 64'b0;
        wave_enabled = $test$plusargs("WAVE");

        if (!$value$plusargs("MAX_CYCLES=%d", max_cycles)) begin
            max_cycles = 1000000000;
        end
        if (!$value$plusargs("WAVE_CYCLES=%d", wave_cycles)) begin
            wave_cycles = 5000;
        end

        $pmem_init;
        if (wave_enabled) begin
            $dumpfile("build-iverilog/wave.vcd");
            $dumpvars(0, iverilog_top);
        end

        repeat (10) @(posedge clock);
        @(negedge clock);
        reset = 1'b0;
    end

    always #1 clock = ~clock;

    always @(posedge clock) begin
        if (!reset) begin
            cycle_count <= cycle_count + 64'd1;
            if (cycle_count >= max_cycles) begin
                $fatal(1, "Icarus simulation timeout after %0d cycles", max_cycles);
            end
            if (wave_enabled && cycle_count == wave_cycles) begin
                $dumpoff;
            end
        end
    end
endmodule
