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
    //wire [31:0] MemReadData;
    wire [31:0] RegWriteData;
    //wire [31:0] MemWriteData;
    wire [31:0] MemReadDataoneword;
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
    wire U_lui;
    wire R_add;
    wire l_lw;
    wire l_lbu;
    wire I_add; 
    wire S_sw;
    wire S_sb;
    wire I_ebreak;
    wire [3:0] wmask;
    // 指令存储器接口
    import "DPI-C" function int pmem_read(input int raddr);
    assign inst = pmem_read(PC);//问题就是出现在这里，先读出来的值是地址为0的内存块的值
    // always @(*) begin
    //     $display("PC :0x%08x",PC);
    // end
    // 数据存储器接口
    //reg [31:0] MemReadData;
    assign mem_addr = ALU_OUT;
    assign do_memread = l_lw | l_lbu;
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

    PC pc(
        .I_jalr(I_jalr),
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
        .I_jalr(I_jalr),
        .U_lui(U_lui),
        .R_add(R_add),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .I_add(I_add),
        .S_sw(S_sw),
        .S_sb(S_sb),
        .I_ebreak(I_ebreak),
        .imm(imm),
        .r1(r1),
        .r2(r2),
        .rd(rd)
    );

    LSU lsu (
        .MemReadData(MemReadData),
        .R2_data(R2_data),
        .ALU_OUT(ALU_OUT),
        .PC_plus_4(PC_plus_4),
        .l_lw(l_lw),
        .l_lbu(l_lbu),
        .I_jalr(I_jalr),
        .S_sb(S_sb),
        .S_sw(S_sw),
        .R_TYPE(R_TYPE),
        .I_TYPE_ARITH(I_TYPE_ARITH),
        .U_TYPE(U_TYPE),
        .J_TYPE(J_TYPE),
        .I_TYPE(I_TYPE),
        .RegWriteData(RegWriteData),
        .MemWriteData(MemWriteData),
        .MemReadDataoneword(MemReadDataoneword),
        .Reg_WE(Reg_WE),
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
        .R_add(R_add),
        .I_add(I_add),
        .I_jalr(I_jalr),
        .l_lbu(l_lbu),
        .l_lw(l_lw),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        .imm(imm),
        .pc(PC),
        .ALU_OUT(ALU_OUT)
    );
endmodule