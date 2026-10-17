`timescale 1ns/1ns

module netlist_memory(
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
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(
        input int waddr, input int wdata, input int wmask);

    always @(posedge clock) begin
        if (reset) begin
            ifu_respValid <= 1'b0;
            lsu_respValid <= 1'b0;
        end else begin
            ifu_respValid <= ifu_reqValid;
            if (ifu_reqValid)
                ifu_rdata <= pmem_read(ifu_addr);

            lsu_respValid <= lsu_reqValid;
            if (lsu_reqValid) begin
                if (lsu_wen)
                    pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
                else
                    lsu_rdata <= pmem_read(lsu_addr);
            end
        end
    end
endmodule

module netlist_top(
    input clock,
    input reset,
    output ifu_reqValid,
    output [31:0] ifu_addr,
    output ifu_respValid,
    output [31:0] ifu_rdata,
    output lsu_reqValid,
    output [31:0] lsu_addr,
    output [1:0] lsu_size,
    output lsu_wen,
    output [31:0] lsu_wdata,
    output [3:0] lsu_wmask,
    output lsu_respValid,
    output [31:0] lsu_rdata
);
    wire [31:0] dut_ifu_rdata;
    wire [31:0] dut_lsu_rdata;

    ysyx_25080202 dut(
        .clock(clock),
        .reset(reset),
        .io_ifu_reqValid(ifu_reqValid),
        .io_ifu_addr(ifu_addr),
        .io_ifu_respValid(ifu_respValid),
        .io_ifu_rdata(dut_ifu_rdata),
        .io_lsu_reqValid(lsu_reqValid),
        .io_lsu_addr(lsu_addr),
        .io_lsu_size(lsu_size),
        .io_lsu_wen(lsu_wen),
        .io_lsu_wdata(lsu_wdata),
        .io_lsu_wmask(lsu_wmask),
        .io_lsu_respValid(lsu_respValid),
        .io_lsu_rdata(dut_lsu_rdata)
    );

    assign ifu_rdata = dut_ifu_rdata;
    assign lsu_rdata = dut_lsu_rdata;

    netlist_memory memory(
        .clock(clock),
        .reset(reset),
        .ifu_reqValid(ifu_reqValid),
        .ifu_addr(ifu_addr),
        .ifu_respValid(ifu_respValid),
        .ifu_rdata(dut_ifu_rdata),
        .lsu_reqValid(lsu_reqValid),
        .lsu_addr(lsu_addr),
        .lsu_wen(lsu_wen),
        .lsu_wdata(lsu_wdata),
        .lsu_wmask(lsu_wmask),
        .lsu_respValid(lsu_respValid),
        .lsu_rdata(dut_lsu_rdata)
    );
endmodule
