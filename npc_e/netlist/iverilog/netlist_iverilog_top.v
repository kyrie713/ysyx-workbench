`timescale 1ns/1ns

module netlist_iverilog_memory(
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
            if (ifu_reqValid)
                ifu_rdata <= $pmem_read(ifu_addr);

            lsu_respValid <= lsu_reqValid;
            if (lsu_reqValid) begin
                if (lsu_wen)
                    $pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
                else
                    lsu_rdata <= $pmem_read(lsu_addr);
            end
        end
    end
endmodule

module netlist_iverilog_top;
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
    reg wave_enabled;

    ysyx_25080202 dut(
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

    netlist_iverilog_memory memory(
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

        if (!$value$plusargs("MAX_CYCLES=%d", max_cycles))
            max_cycles = 1000000000;

        $pmem_init;
        if (wave_enabled) begin
            $dumpfile("netlist-wave.vcd");
            $dumpvars(0, netlist_iverilog_top);
        end

        repeat (100) @(posedge clock);
        @(negedge clock);
        reset = 1'b0;
    end

    always #1 clock = ~clock;

    always @(posedge clock) begin
        if (!reset) begin
            if (cycle_count >= max_cycles)
                $fatal(1, "Icarus netlist timeout after %0d cycles", max_cycles);
            cycle_count <= cycle_count + 64'd1;
        end
    end

    always @(negedge clock) begin
        if (!reset && ifu_respValid && ifu_rdata === 32'h00100073) begin
            $display("HIT GOOD TRAP (ebreak fetched)");
            $finish;
        end
    end
endmodule
