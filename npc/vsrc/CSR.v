module CSR(
    input clk,
    input [31:0] PC,
    input rst,
    input I_ecall,
    input I_csrrs,
    input I_csrrw,                    //判断指令是不是 csrrw
    input I_mret,
    input [11:0] csr_addr,            // SR 地址 = inst[31:20]
    input [31:0] csr_wdata,           //要写进CSR的数据
    output reg [31:0] csr_mtvec,
    output reg [31:0] csr_mcause,
    output reg [31:0] csr_mstatus,
    output reg [31:0] csr_mepc,
    output reg [31:0] csr_mret_mepc,
    output reg [31:0] csr_rdata      //从CSR寄存器读到的数据

);

    reg [63:0] mcycle;
    reg [31:0] mepc;
    reg [31:0] mcause;
    reg [31:0] mstatus;
    reg [31:0] mtvec;

    localparam [31:0] MVENDORID = 32'h79737978;  // "ysyx"
    localparam [31:0] MARCHID   = 32'h017EB18A;  // 学号部分
    //
    assign csr_mret_mepc = mepc;
    always @(*) begin
        //csr_rdata = 32'b0;
        // if(I_mret) begin
        //     csr_rdata = mepc;
        // end
        if(I_csrrs||I_csrrw) begin
            //$display("I_csrrs =  %b :  csrraddr = 0x%08x",I_csrrs,csr_addr);
        case (csr_addr)
            12'hB00: csr_rdata = mcycle[31:0];
            12'hB80: csr_rdata = mcycle[63:32];
            12'hF11: csr_rdata = MVENDORID;
            12'hF12: csr_rdata = MARCHID;
            12'h342: csr_rdata = mcause;
            12'h341: csr_rdata = mepc;
            12'h300: csr_rdata = mstatus;
            12'h305: csr_rdata = mtvec;
            default: csr_rdata = 32'b0;
        endcase
           // $display("I_csrrs =  %b :  csrraddr = 0x%08x csrrdata = 0x%08x csrrwdata = 0x%08x\n",I_csrrw,csr_addr,csr_rdata,csr_wdata);
        end else begin
           csr_rdata = 32'b0;
        end
    end
    assign csr_mtvec   = mtvec;
    assign csr_mepc    = mepc;
    assign csr_mcause  = mcause;
    assign csr_mstatus = mstatus;
    // ========= 时序逻辑：写 =========
    always @(posedge clk) begin
        if (rst) begin
            mcycle <= 64'b0;
            mstatus <= 32'h1800;
            //mepc    <= 32'b0;
            //mcause  <= 32'b11;
            //mtvec   <= 32'b0;
        end else begin
            mcycle <= mcycle + 1;
            if(I_ecall) begin 
                mepc <= PC;
                mcause<=32'd11;
            end
            if (I_csrrw) begin
                case (csr_addr)
                    12'hB00: mcycle[31:0] <= csr_wdata;
                    12'hB80: mcycle[63:32] <= csr_wdata;
                    12'h305: mtvec        <= csr_wdata;
                    12'h341: mepc         <= csr_wdata;
                    12'h342: mcause       <= csr_wdata;
                    12'h300: mstatus      <= csr_wdata;
                    12'hF11, 12'hF12: ;  // 只读 CSR，不允许写
                    default: ;
                endcase
                //$display("I_csrrs =  %b :  csrraddr = 0x%08x csrrdata = 0x%08x csrrwdata = 0x%08x\n",I_csrrw,csr_addr,csr_rdata,csr_wdata);
            end else if (I_csrrs && csr_wdata != 32'b0) begin
                case (csr_addr)
                    12'hB00: mcycle[31:0] <= mcycle[31:0] | csr_wdata;
                    12'hB80: mcycle[63:32] <= mcycle[63:32] | csr_wdata;
                    12'hF11, 12'hF12: ;  // 只读 CSR
                    default: ;
                endcase
            end
        end
    end

endmodule