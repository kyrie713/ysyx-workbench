module IFU(
    input [31:0] PC,
    output[31:0] inst
);
    import "DPI-C" function int pmem_read(input int raddr);
    assign inst = pmem_read(PC);
endmodule