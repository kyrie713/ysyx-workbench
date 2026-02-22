module top(
    input clk,
    input rst,
    output [31:0] PC,
    output [31:0] next_pc,
    output [31:0] inst,
    output logic do_memread,
    output logic MemWEn,
    output logic [31:0] mem_addr,
    output logic [31:0] MemWriteData,
    output logic [31:0] MemReadData,
    output [31:0] csr_mtvec,
    output [31:0] csr_mcause,
    output [31:0] csr_mepc,
    output [31:0] csr_mstatus,
    output I_ecall,
    // 新增：调试寄存器输出
    output [31:0] debug_zero,
    output [31:0] debug_ra,
    output [31:0] debug_sp,
    output [31:0] debug_gp,
    output [31:0] debug_tp,
    output [31:0] debug_s0,
    output [31:0] debug_s1,
    output [31:0] debug_a0,
    output [31:0] debug_a1,
    output [31:0] debug_a2,
    output [31:0] debug_a3,
    output [31:0] debug_a4,
    output [31:0] debug_a5
);
// 定义内部信号
    wire [31:0] PC_plus_4;
    wire [31:0] ALU_OUT;
    wire [31:0] R1_data;
    wire [31:0] R2_data;
    wire [31:0] csr_rdata;
    wire [31:0] csr_wdata;
    wire [11:0] csr_addr;
    wire [31:0] csr_mret_mepc;
    //wire [31:0] MemReadData;
    wire [31:0] RegWriteData;
    //wire [31:0] MemWriteData;
    wire [31:0] MemReadDataoneword;
    // wire [31:0] csr_mtvec;
    // wire [31:0] csr_mcause;
    // wire [31:0] csr_mepc;
    // wire [31:0] csr_mstatus;
    wire Reg_WE;
    wire I_jalr;
    wire [4:0] r1;
    wire [4:0] r2;
    wire [4:0] rd;
    wire [31:0] imm;
    wire R_TYPE;
    wire I_TYPE_ARITH;
    wire L_TYPE_LOAD;
    wire S_TYPE;
    wire U_TYPE;
    wire I_TYPE;
    //wire MemWEn;
    wire B_TYPE;
    wire J_TYPE;
    wire B_bne;
    wire B_bge;
    wire B_beq;
    wire B_bgeu;
    wire B_bltu;
    wire B_blt;
    wire U_lui;
    wire U_auipc;
    wire J_jal;
    wire R_add;
    wire R_sub;
    wire R_sltu;
    wire R_sll;
    wire R_and;
    wire R_or;
    wire R_xor;
    wire R_slt;
    wire R_sra;
    wire R_srl;
    wire l_lw;
    wire l_lbu;
    wire l_lb;
    wire l_lh;
    wire l_lhu;
    wire I_addi; 
    wire I_sltiu;
    wire I_srai;
    wire I_xori;
    wire I_ori;
    wire I_andi;
    wire I_srli;
    wire I_slli;
    wire I_csrrs;
    wire I_csrrw;
    wire I_mret;
    wire S_sh;
    wire S_sw;
    wire S_sb;
    wire I_ebreak;
    //wire I_ecall;
    wire [3:0] wmask;
    wire [4:0] shamt;
    // 指令存储器接口
    import "DPI-C" function int pmem_read(input int raddr);
    assign inst = pmem_read(PC);//问题就是出现在这里，先读出来的值是地址为0的内存块的值
    // always @(*) begin
    //     $display("PC :0x%08x",PC);
    // end
    // 数据存储器接口
    //reg [31:0] MemReadData;
    assign mem_addr = ALU_OUT;
    assign do_memread = l_lw | l_lbu | l_lh | l_lhu |l_lb;
    assign MemReadData = do_memread ? pmem_read(mem_addr) : 32'b0;
    //     $display("0x%08x\n",MemReadData);
    //     $display("ALU_OUT = 0x%08x\n",ALU_OUT);
    // end
    // DPI-C写函数
    import "DPI-C" function void pmem_write(
        input int waddr, input int wdata, input int wmask);
    
    // 存储器写操作（时钟同步）
    always @(posedge clk) begin
        if (MemWEn) begin
            // $display("Verilog: Writing to addr=0x%08x, data=0x%08x, mask=0x%x", 
            //     mem_addr, MemWriteData, wmask);
            pmem_write(mem_addr, MemWriteData,  {28'b0, wmask});
        end
    end

    import "DPI-C" function void notify_ebreak();
    
    always @(posedge clk) begin
        if(I_ebreak && $time > 0) begin //避免仿真初期误触发
            $display("[TRAP] EBREAK at PC = 0x%08x",PC);
            notify_ebreak();
        end
    end
    // always@(*)begin 
    //     if(inst == 32'h0ff57513) begin
    //         $display("I_addi = %d\n",I_addi);
    //     end
    // end
    PC pc(
        .I_jalr(I_jalr),
        .J_jal(J_jal),
        .I_ecall(I_ecall),
        .I_mret(I_mret),
        .mtvec(csr_mtvec),
        .csr_rdata(csr_mret_mepc),
        .B_bne(B_bne),
        .B_bge(B_bge),
        .B_beq(B_beq),
        .B_bgeu(B_bgeu),
        .B_bltu(B_bltu),
        .B_blt(B_blt),
        .ALU_OUT(ALU_OUT),
        .clk(clk),
        .rst(rst),
        .PC(PC),
        .PC_plus_4(PC_plus_4),
        .next_pc(next_pc)
    );

    IDU idu(
        .inst(inst),
        .R_TYPE(R_TYPE),
        .I_TYPE_ARITH(I_TYPE_ARITH),
        .L_TYPE_LOAD(L_TYPE_LOAD),
        .S_TYPE(S_TYPE),
        .U_TYPE(U_TYPE),
        .I_TYPE(I_TYPE),
        .MemWEn(MemWEn),
        .B_TYPE(B_TYPE),
        .J_TYPE(J_TYPE),
        .B_bne(B_bne),
        .B_bge(B_bge),
        .B_beq(B_beq),
        .B_bgeu(B_bgeu),
        .B_bltu(B_bltu),
        .B_blt(B_blt),
        .I_jalr(I_jalr),
        .U_lui(U_lui),
        .U_auipc(U_auipc),
        .J_jal(J_jal),
        .R_add(R_add),
        .R_sub(R_sub),
        .R_sltu(R_sltu),
        .R_sll(R_sll),
        .R_and(R_and),
        .R_or(R_or),
        .R_xor(R_xor),
        .R_slt(R_slt),
        .R_sra(R_sra),
        .R_srl(R_srl),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .l_lb(l_lb),
        .l_lh(l_lh),
        .l_lhu(l_lhu),
        .I_addi(I_addi),
        .I_sltiu(I_sltiu),
        .I_srai(I_srai),
        .I_xori(I_xori),
        .I_ori(I_ori),
        .I_andi(I_andi),
        .I_srli(I_srli),
        .I_slli(I_slli),
        .I_csrrs(I_csrrs),
        .I_csrrw(I_csrrw),
        .S_sh(S_sh),
        .S_sw(S_sw),
        .S_sb(S_sb),
        .I_ebreak(I_ebreak),
        .I_ecall(I_ecall),
        .I_mret(I_mret),
        .csr_addr(csr_addr),
        .shamt(shamt),
        .imm(imm),
        .r1(r1),
        .r2(r2),
        .rd(rd)
    );

    LSU lsu (
        .MemReadData(MemReadData),
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .S_sh(S_sh),
        .MemWriteData(MemWriteData),
        .MemReadDataoneword(MemReadDataoneword),
        .wmask(wmask)
    );

    RegisterFile  regfile (
        .clk(clk),
        .wdata(RegWriteData),
        .waddr(rd),
        .wen(Reg_WE),
        .rst(rst),
        .raddr_1(r1),
        .raddr_2(r2),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        // 连接调试寄存器输出
        .zero(debug_zero),
        .ra(debug_ra),
        .sp(debug_sp),
        .gp(debug_gp),
        .tp(debug_tp),
        .s0(debug_s0),
        .s1(debug_s1),
        .a0(debug_a0),
        .a1(debug_a1),
        .a2(debug_a2),
        .a3(debug_a3),
        .a4(debug_a4),
        .a5(debug_a5)
    );

    ALU alu (
        .R_TYPE(R_TYPE),
        .I_TYPE(I_TYPE),
        .S_TYPE(S_TYPE),
        .B_TYPE(B_TYPE),
        .J_TYPE(J_TYPE),
        .U_TYPE(U_TYPE),
        .B_bne(B_bne),
        .B_bge(B_bge),
        .B_beq(B_beq),
        .B_bgeu(B_bgeu),
        .B_bltu(B_bltu),
        .B_blt(B_blt),
        .R_add(R_add),
        .R_sub(R_sub),
        .R_sltu(R_sltu),
        .R_sll(R_sll),
        .R_and(R_and),
        .R_or(R_or),
        .R_xor(R_xor),
        .R_slt(R_slt),
        .R_sra(R_sra),
        .R_srl(R_srl),
        .I_addi(I_addi),
        .I_sltiu(I_sltiu),
        .I_srai(I_srai),
        .I_xori(I_xori),
        .I_ori(I_ori),
        .I_andi(I_andi),
        .I_srli(I_srli),
        .I_slli(I_slli),
        .I_jalr(I_jalr),
        .I_csrrs(I_csrrs),
        .I_csrrw(I_csrrw),
        .l_lbu(l_lbu),
        .l_lw(l_lw),
        .l_lb(l_lb),
        .l_lh(l_lh),
        .l_lhu(l_lhu),
        .U_auipc(U_auipc),
        .U_lui(U_lui),
        .J_jal(J_jal),
        .shamt(shamt),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        .inst(inst),
        .imm(imm),
        .pc(PC),
        .csr_wdata(csr_wdata),
        .ALU_OUT(ALU_OUT)
    );

    WBU wbu(
    .MemReadData(MemReadData),
    .ALU_OUT(ALU_OUT),
    .PC_plus_4(PC_plus_4),
    .csr_rdata(csr_rdata),
    .l_lbu(l_lbu),
    .l_lw(l_lw),
    .l_lh(l_lh),
    .l_lhu(l_lhu),
    .l_lb(l_lb),
    .I_jalr(I_jalr),
    .I_sltiu(I_sltiu),
    .I_srai(I_srai),
    .I_xori(I_xori),
    .I_ori(I_ori),
    .I_andi(I_andi),
    .I_srli(I_srli),
    .I_slli(I_slli),
    .I_csrrs(I_csrrs),
    .I_csrrw(I_csrrw),
    .U_auipc(U_auipc),
    .U_lui(U_lui),
    .J_jal(J_jal),
    .R_TYPE(R_TYPE),
    .I_TYPE_ARITH(I_TYPE_ARITH),
    .I_TYPE(I_TYPE),
    .U_TYPE(U_TYPE),
    .J_TYPE(J_TYPE),
    .RegWriteData(RegWriteData),
    .Reg_WE(Reg_WE)
    );
    CSR csr(
    .clk(clk),
    .rst(rst),
    .PC(PC),
    .I_ecall(I_ecall),
    .I_mret(I_mret),
    .I_csrrs(I_csrrs),
    .I_csrrw(I_csrrw), 
    .csr_mtvec(csr_mtvec),
    .csr_mcause(csr_mcause),
    .csr_mstatus(csr_mstatus),
    .csr_mepc(csr_mepc),
    .csr_addr(csr_addr),          
    .csr_mret_mepc(csr_mret_mepc),
    .csr_wdata(csr_wdata),           
    .csr_rdata(csr_rdata)      

);
endmodule