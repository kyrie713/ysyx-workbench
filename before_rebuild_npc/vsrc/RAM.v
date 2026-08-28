module RAM(
    input     clk,
    //IFU 端口(取指)
    input     ifu_ren,
    input      [31:0] ifu_raddr,
    output     [31:0] ifu_rdata,
    //lsu 端口(读数据)
    input     lsu_ren,
    input      [31:0] lsu_raddr,
    output reg [31:0] lsu_rdata,
    //lsu 端口(写数据)
    input     lsu_wen,
    input      [31:0] lsu_waddr,
    input      [31:0] lsu_wdata,
    input      [3 :0] lsu_wmask
);
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);
    
    
    assign ifu_rdata = pmem_read(ifu_raddr);
    assign lsu_rdata = lsu_ren ? pmem_read(lsu_raddr) : 32'b0;
    always @(posedge clk) begin   
        if (lsu_wen) begin
            pmem_write(lsu_waddr, lsu_wdata,  {28'b0, lsu_wmask});
        end 
    end


endmodule