#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <nvboard.h> 
#include "Vtop.h"  
#include "verilated.h"
 #include "verilated_vcd_c.h" // 可选，如果要导出vcd则需要加上

//void nvboard_bind_all_pins(Vtop* top);

// 声明外部存储器函数
extern "C" int pmem_read(int raddr);
extern "C" void init_memory(const char* path);

// 全局变量控制仿真结束
bool simulation_finished = false;
extern "C" void notify_ebreak(){
    printf("EBREAK detected,terminating simulation.\n");
    simulation_finished = true;
}
int main(int argc, char** argv, char** env) {
    const char* hex_path = "/home/huang/ysyx-workbench/npc/logisim/mem_formatted.hex";
    //初始化存储器
    init_memory(hex_path);
    //init_memory();
    
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};//创建一个Vtop实例，Vtop是你的顶层Verilog模块的C++表示。contextp是Verilator上下文对象，用于管理仿真。
    //nvboard_bind_all_pins(top);
    //nvboard_init();
    
    
    // VerilatedVcdC* tfp = new VerilatedVcdC; //这是用于波形生成的对象
    // contextp->traceEverOn(true);
    // top->trace(tfp, 99); //这句代码和上面那句代码用于启用波形跟踪和连接波形对象。
    // tfp->open("wave.vcd"); //这是用于打开波形文件的代码

    top->rst  = 1; 
    top->clk = 0;


    int cycle_count = 0;
    // int instruction_count = 0;
    // const int max_instructions = 7;// 只执行一条指令

    // 打印初始寄存器状态
    // printf("Initial register state:\n");
    // printf("x0 (zero): 0x%08x\n", top->debug_zero);
    // printf("x1 (ra):   0x%08x\n", top->debug_ra);
    // printf("x2 (sp):   0x%08x\n", top->debug_sp);
    // printf("x3 (gp):   0x%08x\n", top->debug_gp);
    // printf("x4 (tp):   0x%08x\n", top->debug_tp);
    // printf("x8 (s0):   0x%08x\n", top->debug_s0);
    // printf("x9 (s1):   0x%08x\n", top->debug_s1);
    // printf("x10 (a0):  0x%08x\n", top->debug_a0);
    // printf("x11 (a1):  0x%08x\n", top->debug_a1);
    // printf("x13 (a3):  0x%08x\n", top->debug_a3);
    // printf("x14 (a4):  0x%08x\n", top->debug_a4);
    // printf("--------------------------------\n");
    // 复位阶段
    for (int i = 0; i < 4; i++) {
        top->clk = !top->clk;
        top->eval();
        contextp->timeInc(1);
        //printf("Reset cycle %d: clk=%d, PC=0x%08x\n", i, top->clk, top->PC);//// 打印PC值用于调试
        //cycle_count++;
    }
    top->rst = 0;
    //&& cycle_count <= 12006
    //top->PC = 0x80000000;
    while(!contextp->gotFinish() && !simulation_finished ){ //(!contextp->gotFinish()&& instruction_count < max_instructions) {
        //nvboard_update(); 
        printf("clk=%d\n",top->clk);
        top->clk = !top->clk;
        printf("clk=%d\n",top->clk);
        top->inst = pmem_read(top->PC); // 从存储器中读取指令    
         
        top->eval(); 
        //printf("clk=%d, PC=0x%08x\n", top->clk, top->PC);//// 打印PC值用于调试
        if (top->clk == 1) {
            printf("clk=%d,Cycle %d: PC=0x%08x, inst=0x%08x\n", 
                   top->clk,cycle_count, top->PC, top->inst);
            
            // 检测第一条指令是否执行完成
            // if (top->PC == 4) { // 执行完第一条指令后PC=4
            //     printf("addi instruction executed! Terminating simulation.\n");
                
            // 检查寄存器x2的值是否正确
            // 假设x1初始值为0，则x2应为1
            // 您需要根据实际设计添加寄存器访问接口
            // 例如：printf("x2 = 0x%08x\n", get_register_value(2));
            //}
            // 打印寄存器值
            printf("Registers after instruction:\n");
            printf("x0 (zero): 0x%08x\n", top->debug_zero);
            printf("x1 (ra):   0x%08x\n", top->debug_ra);
            printf("x2 (sp):   0x%08x\n", top->debug_sp);
            printf("x3 (gp):   0x%08x\n", top->debug_gp);
            printf("x4 (tp):   0x%08x\n", top->debug_tp);
            printf("x8 (s0):   0x%08x\n", top->debug_s0);
            printf("x9 (s1):   0x%08x\n", top->debug_s1);
            printf("x10 (a0):  0x%08x\n", top->debug_a0);
            printf("x11 (a1):  0x%08x\n", top->debug_a1);
            printf("x12 (a2):  0x%08x\n", top->debug_a2);
            printf("x13 (a3):  0x%08x\n", top->debug_a3);
            printf("x14 (a4):  0x%08x\n", top->debug_a4);
            printf("x15 (a5):  0x%08x\n", top->debug_a5);
            printf("--------------------------------\n");
            
            //instruction_count++; // 执行完一条指令后增加计数            
        }
        //tfp->dump(contextp->time()); //这是用于将仿真数据写入波形文件的代码
        contextp->timeInc(1);
        cycle_count++;
    }
    delete top;
    //tfp->close();//这是用于关闭波形文件的代码
    delete contextp;
    return 0;
}