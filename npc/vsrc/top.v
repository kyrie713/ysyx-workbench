// Stand-alone RV32E runner used by abstract-machine's riscv32e-npc platform.
// The memory side uses the same one-cycle response contract as the SimpleBus
// bridge, while the C++ model provides the physical memory and UART MMIO.
// Icarus has its own VPI top and does not parse Verilator's DPI declarations.
`ifndef __ICARUS__
module top(
    input clk,
    input rst,
    output [31:0] PC,
    output [31:0] inst,
    output do_memread,
    output MemWEn,
    output [31:0] mem_addr,
    output [31:0] MemWriteData,
    output [31:0] MemReadData
);
    wire ifu_reqValid;
    wire [31:0] ifu_addr;
    reg ifu_respValid;
    reg [31:0] ifu_rdata;
    wire lsu_reqValid;
    wire [31:0] lsu_addr;
    wire [1:0] lsu_size;
    wire lsu_wen;
    wire [31:0] lsu_wdata;
    wire [3:0] lsu_wmask;
    reg lsu_respValid;
    reg [31:0] lsu_rdata;
    wire [31:0] debug_pc;
    wire [31:0] debug_inst;

    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);

    assign PC = debug_pc;
    assign inst = debug_inst;
    assign do_memread = lsu_reqValid && !lsu_wen;
    assign MemWEn = lsu_wen;
    assign mem_addr = lsu_addr;
    assign MemWriteData = lsu_wdata;
    assign MemReadData = lsu_rdata;

    NPC core (
        .clock(clk), .reset(rst),
        .io_ifu_reqValid(ifu_reqValid), .io_ifu_addr(ifu_addr),
        .io_ifu_respValid(ifu_respValid), .io_ifu_rdata(ifu_rdata),
        .io_lsu_reqValid(lsu_reqValid), .io_lsu_addr(lsu_addr),
        .io_lsu_size(lsu_size), .io_lsu_wen(lsu_wen),
        .io_lsu_wdata(lsu_wdata), .io_lsu_wmask(lsu_wmask),
        .io_lsu_respValid(lsu_respValid), .io_lsu_rdata(lsu_rdata),
        .debug_pc(debug_pc), .debug_inst(debug_inst)
    );

    always @(posedge clk) begin
        if (rst) begin
            ifu_respValid <= 1'b0;
            lsu_respValid <= 1'b0;
            ifu_rdata <= 32'b0;
            lsu_rdata <= 32'b0;
        end else begin
            ifu_respValid <= ifu_reqValid;
            if (ifu_reqValid) ifu_rdata <= pmem_read(ifu_addr);
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
`endif
