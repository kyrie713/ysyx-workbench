module ysyx_25080202(
    input clock,
    input reset,
    input io_ifu_respValid,
    input [31:0]io_ifu_rdata,
    output [31:0] io_ifu_addr,
    output io_ifu_reqValid,
    input [31:0]  io_lsu_rdata,
    input  io_lsu_respValid,
    output io_lsu_reqValid,
    output [31:0] io_lsu_addr,
    output io_lsu_wen,
    output [31:0] io_lsu_wdata,
    output [3:0]  io_lsu_wmask,
    output [1:0]  io_lsu_size

);
    // ===============================
    // 内部信号定义
    // ===============================
    wire        I_csrrw;
    wire        I_csrrs;
    wire [11:0] csr_addr;
    wire [31:0] csr_wdata;
    wire [31:0] csr_rdata;
    wire [31:0] PC_plus_4;
    wire [31:0] ALU_OUT;
    wire [31:0] R1_data;
    wire [31:0] R2_data;
    wire [31:0] RegWriteData;
    wire Reg_WE;
    wire I_jalr;
    wire [4:0] r1, r2, rd;
    wire [31:0] imm;
    wire R_TYPE, I_TYPE_ARITH, L_TYPE_LOAD, S_TYPE, U_TYPE, I_TYPE;
    wire B_TYPE, J_TYPE, U_lui, R_add, l_lw, l_lbu, I_add, S_sw, S_sb, I_ebreak;
    wire [3:0] wmask;
    // ===== IFU ↔ Memory =====
    //wire [31:0] ifu_raddr;
    //reg [31:0] ifu_rdata;
    reg        ifu_reqValid;
    reg        ifu_respValid;
    wire        ifu_valid;
    wire        pc_valid;
    wire [31:0] PC;
    wire        cpu_en;
    // ===== LSU ↔ Memory =====
   // wire [31:0] lsu_addr;
    //wire [31:0] lsu_wdata;
   // wire [3:0]  lsu_wmask;
   // wire [31:0] lsu_rdata;
    // wire        lsu_wen;
    // wire        lsu_reqValid;
    // wire        lsu_respValid;
    wire        lsu_ready;
    wire        lsu_working;
    wire        lsu_valid;
    // ===== WBU 控制信号 =====
    wire        wbu_ready;
    wire        wbu_valid;
    wire [31:0] next_pc;
    wire [31:0] reg_wdata;
    wire [31:0] csr_wdata_out;
    wire [31:0] inst;

   // wire ifu_wen;

    // ===============================
    // 指令存储器仿真接口
    // ===============================
    //import "DPI-C" function int pmem_read(input int raddr);

    ysyx_25080202_IFU ifu (
        .clk(clock),
        .rst(reset),
        .PC(PC),
        .inst(inst),
        .pc_valid(pc_valid),
        .wbu_ready(wbu_ready),
        .ifu_valid(ifu_valid),
        .ifu_wen(),
        .ifu_reqValid(io_ifu_reqValid),   // *** 修改：连接握手信号
        .ifu_respValid(io_ifu_respValid),// *** 修改：连接握手信号
        .ifu_raddr(io_ifu_addr),
        .ifu_rdata(io_ifu_rdata),
        .lsu_ready(lsu_ready)
    );

    // always @(posedge clk) begin
    //     if (ifu_reqValid && !ifu_wen) begin 
    //         ifu_rdata<= pmem_read(ifu_raddr);
    //         ifu_respValid <= 1'b1;// 真正的1拍延迟返回 ✅
    //     end
    // end

    // ===============================
    // 数据存储器接口
    // ===============================
    //import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);

    //wire [31:0] lsu_addr;
    //wire        lsu_wen;
    //wire [31:0] lsu_wdata;
    //wire [3:0]  lsu_wmask;
    //reg  [31:0] lsu_rdata;
    wire [31:0] load_wdata;
    //reg         lsu_respValid;   // *** 修改：新增握手信号 respValid
    //wire        lsu_reqValid;    // *** 修改：来自 LSU 的握手信号

    // *** 修改：SimpleBus 风格的数据存储器仿真逻辑 ***
    // always @(posedge clk) begin
    //     // 读请求   
    //      //$display("[LSU RESP] mem[0x80008FFC] = 0x%08x", pmem_read(32'h80008FFC));
    //     if(lsu_reqValid && !lsu_wen) begin
    //        //$display("LSU: respValid=%b, valid=%b, wbu_ready=%b, rdata=0x%x", lsu_respValid, lsu_valid, wbu_ready, lsu_rdata);
    //         lsu_rdata <= pmem_read(lsu_addr);
    //         lsu_respValid <=1'b1;
    //     // 写请求
    //     end else if (lsu_reqValid && lsu_wen) begin
    //         pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
    //         lsu_respValid <= 1'b1;
    //     end
    //     else   if (lsu_respValid) begin
    //     // 不要立刻清零，延迟一拍
    //         lsu_respValid <=1'b0;
    //     end
    // end

    // ===============================
    // EBREAK Trap
    // ===============================
    import "DPI-C" function void notify_ebreak();
    always @(posedge clock) begin
        if (I_ebreak && $time > 0) begin
            $display("[TRAP] EBREAK at PC = 0x%08x", PC);
            notify_ebreak();
        end
    end

    ysyx_25080202_PC pc(
        .clk(clock),
        .rst(reset),
        .next_pc(next_pc),
        .wbu_valid(wbu_valid),
        .pc_valid(pc_valid),
        .pc(PC)
    );

    ysyx_25080202_IDU idu(
        .inst(inst),
        .R_TYPE(R_TYPE),
        .I_TYPE_ARITH(I_TYPE_ARITH),
        .L_TYPE_LOAD(L_TYPE_LOAD),
        .S_TYPE(S_TYPE),
        .U_TYPE(U_TYPE),
        .I_TYPE(I_TYPE),
        .MemWEn(),
        .B_TYPE(B_TYPE),
        .J_TYPE(J_TYPE),
        .I_jalr(I_jalr),
        .U_lui(U_lui),
        .R_add(R_add),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .I_add(I_add),
        .S_sw(S_sw),
        .S_sb(S_sb),
        .I_ebreak(I_ebreak),
        .I_csrrw(I_csrrw),
        .I_csrrs(I_csrrs),
        .csr_addr(csr_addr),
        .imm(imm),
        .r1(r1),
        .r2(r2),
        .rd(rd),
        .wmask(wmask)
    );

    ysyx_25080202_LSU lsu (
        .rst(reset),
        .clk(clock),
        .rd(rd),
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .R_TYPE(R_TYPE),
        .I_TYPE_ARITH(I_TYPE_ARITH),
        .U_TYPE(U_TYPE),
        .J_TYPE(J_TYPE),
        .I_csrrw(I_csrrw),
        .CSR_RDATA(csr_rdata),
        //.lsu_en(cpu_en),
        .I_TYPE(I_TYPE),
        .wmask(wmask),
        // ===== SimpleBus 信号 =====
        .ifu_valid(ifu_valid),
        .wbu_ready(wbu_ready),
        .lsu_valid(lsu_valid),
        .lsu_reqValid(io_lsu_reqValid),   // *** 修改：增加 reqValid 信号连接
        .lsu_respValid(io_lsu_respValid), // *** 修改：增加 respValid 信号连接
        .lsu_rdata(io_lsu_rdata),
        .lsu_addr(io_lsu_addr),
        .lsu_wen(io_lsu_wen),
        .lsu_wdata(io_lsu_wdata),
        .lsu_wmask(io_lsu_wmask),
        .lsu_ready(lsu_ready),
        .lsu_working(lsu_working),
        .io_lsu_size(io_lsu_size),
        //.wb_addr(lsu_wb_addr),
        // ===== 写回寄存器 =====
        .RegWriteData(load_wdata)
        //.Reg_WE(Reg_WE)
    );

    ysyx_25080202_RegisterFile regfile (
        .clk(clock),
        .wdata(reg_wdata),
        .waddr(rd),
        .L_wen(wbu_valid && !(S_sb||S_sw)),
        .raddr_1(r1),
        .raddr_2(r2),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        .zero(),
        .ra(),
        .sp(),
        .gp(),
        .tp(),
        .s0(),
        .s1(),
        .a0(),
        .a1(),
        .a2(),
        .a3(),
        .a4(),
        .a5()
    );

    ysyx_25080202_EXU alu (
        .R_TYPE(R_TYPE),
        .I_TYPE(I_TYPE),
        .S_TYPE(S_TYPE),
        .B_TYPE(B_TYPE),
        .J_TYPE(J_TYPE),
        .U_TYPE(U_TYPE),
        .R_add(R_add),
        .I_add(I_add),
        .I_jalr(I_jalr),
        .l_lbu(l_lbu),
        .l_lw(l_lw),
        .I_csrrw(I_csrrw),
        .I_csrrs(I_csrrs),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        .imm(imm),
        .pc(PC),
        .csr_wdata(csr_wdata),
        .ALU_OUT(ALU_OUT)
    );

    ysyx_25080202_CSR csr(
        .clk(clock),
        .rst(reset),
        .I_csrrw(I_csrrw),
        .I_csrrs(I_csrrs),
        .csr_addr(csr_addr),
        .csr_wdata(csr_wdata_out),
        .csr_rdata(csr_rdata)
    );
    ysyx_25080202_WBU wbu (
        .clk(clock),
        .rst(reset),
        .ALU_OUT(ALU_OUT),
        .CSR_RDATA(csr_rdata),
        .i_csr_wdata(csr_wdata),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .I_jalr(I_jalr),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .I_add(I_add),
        .R_add(R_add),
        .U_lui(U_lui),
        .I_csrrw(I_csrrw),
        .I_csrrs(I_csrrs),
        .load_wdata(load_wdata),
        .lsu_busy(lsu_working),
        .lsu_valid(lsu_valid),
        .ifu_valid(ifu_valid),
        .PC(PC),
        .wbu_ready(wbu_ready),
        .wbu_valid(wbu_valid),
        .next_pc(next_pc),
        .reg_wdata(reg_wdata),
        .csr_wdata(csr_wdata_out)
    );
endmodule
