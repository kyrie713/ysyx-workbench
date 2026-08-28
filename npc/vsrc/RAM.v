module RAM(
    input              clk,
    input              rst,

    // ================== IFU 端口 ==================
    input              ifu_reqValid,
    output             ifu_reqReady,  
    input      [31:0]  ifu_raddr,
    
    output reg         ifu_respValid, 
    input              ifu_respReady,
    output reg [31:0]  ifu_rdata,    

    // ================== LSU 端口 ==================
    input              lsu_reqValid,
    output             lsu_reqReady,  
    input      [31:0]  lsu_addr,
    input              lsu_wen,
    input      [31:0]  lsu_wdata,
    input      [ 3:0]  lsu_wmask,
    
    output reg         lsu_respValid, 
    input              lsu_respReady,
    output reg [31:0]  lsu_rdata      
);

    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);

    localparam S_idle = 1'b0;
    localparam S_wait = 1'b1;

    reg ifu_state;
    reg lsu_state;

    // assign ifu_reqReady = (ifu_state == S_idle);
    // assign lsu_reqReady = (lsu_state == S_idle);
    always @(posedge clk) begin
        ifu_rdata <= pmem_read(ifu_raddr);
    end


    always @(posedge clk) begin
        lsu_rdata <= (!lsu_wen) ? pmem_read(lsu_addr) : 32'b0;
    if (lsu_wen) begin
        pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
    end
    end
//     always @(posedge clk) begin
//         if(rst) begin
//             ifu_state     <= S_idle;
//             ifu_respValid <= 0;
//             ifu_rdata     <= 32'b0;
//         end
//         else begin
//             case (ifu_state)
//                 S_idle: begin
//                 // 握手成功：收到请求且RAM空闲
//                     if(ifu_reqValid && ifu_reqReady) begin
//                         ifu_rdata     <= pmem_read(ifu_raddr); // 读出数据
//                         ifu_respValid <= 1;                    // 标记响应数据有效
//                         ifu_state     <= S_wait;               // 进入等待响应接收状态
//                     end
//                 end
//                 S_wait: begin
//                     if(ifu_respReady) begin
//                         ifu_respValid <= 0;
//                         ifu_state     <= S_idle; 
//                     end
//                 end
//             endcase
//         end
//     end


//     always @(posedge clk) begin
//         if(rst) begin
//             lsu_state     <= S_idle;    
//             lsu_respValid <= 0;
//             lsu_rdata     <= 32'b0;
//         end
//         else begin
//             case (lsu_state)
//                 S_idle: begin
//                     if(lsu_reqValid && lsu_reqReady) begin
//                         if(lsu_wen) begin
//                             pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask}); 
//                         end
//                         else begin
//                             lsu_rdata <= pmem_read(lsu_addr);         
//                         end
//                         lsu_respValid <= 1;
//                         lsu_state     <= S_wait;
//                     end
//                 end
//                 S_wait: begin
//                     if(lsu_respReady) begin
//                         lsu_respValid <= 0;
//                         lsu_state     <= S_idle; 
//                     end
                    
//                 end
//             endcase
//         end
//     end

// endmodule
// module lfsr_module(
//     input clk,
//     input reset,    // Active-high synchronous reset to 5'h1
//     output [4:0] q
// ); 
//     always @(posedge clk) begin
//         if(reset) begin
//             q <= 5'h1;
//         end else begin
//             q<= {0^q[0],q[4],q[3]^q[0],q[2],q[1]};
//         end
//     end

endmodule
