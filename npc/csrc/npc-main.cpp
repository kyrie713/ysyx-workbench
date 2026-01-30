#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <nvboard.h> 
#include "Vtop.h"  
#include "verilated.h"
#include "include/isa_def.h"
#include "../Config/auto.conf.h"

//#define ENABLE_WAVEFORM
#ifdef CONFIG_WAVEFORM
#include "verilated_vcd_c.h"
#endif

bool simulation_finished = false;

VerilatedContext* contextp = nullptr;
Vtop* top = nullptr;
FILE *itrace_fp = NULL;
VerilatedVcdC* tfp = nullptr; //这是用于波形生成的对象


uint64_t g_nr_guest_inst; 
static char elf_path[512];

riscv32_NPC_state cpu = {};        
NPCState npc_state = {};
extern long img_size;
static int difftest_port = 1034;


extern "C" void notify_ebreak() {
    npc_state.state = NPC_END;
    npc_state.halt_pc = cpu.pc;
    simulation_finished = true;
}

void sdb_mainloop();
void init_disasm();
extern "C" void init_memory(const char* path);
void parse_elf(const char *elf_file);
void init_difftest(char *ref_so_file, long img_size, int port);

void print_yellow_logo();

void get_elf_path(const char*bin_path){
    int len = 0;
    while(bin_path[len] !='\0'){
        elf_path[len] = bin_path[len];
        len++;
    }
    elf_path[len] = '\0';
    int last_dot = -1;
    for(int i = 0;i<len;i++){
        if(elf_path[i] == '.'){
            last_dot = i;
        }
    }
    if(last_dot != -1){
        elf_path[last_dot+1] = 'e';
        elf_path[last_dot+2] = 'l';
        elf_path[last_dot+3] = 'f';
        elf_path[last_dot+4] = '\0';
     }
}

int main(int argc,char** argv,char** env){
    printf("image_path = %s\n",argv[1]);
    const char* image_path = argv[1];
    get_elf_path(image_path);
    printf("elf_path = %s\n",elf_path);
    #ifdef CONFIG_FTRACE
    parse_elf(elf_path);
    #endif
    // cpu.pc = 0x80000000;
    init_memory(image_path);
    printf("img_size = %ld\n",img_size);
    // char ref_so_file[] = "/home/huang/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so";
    // init_difftest(ref_so_file,img_size, difftest_port);


    init_disasm();///home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/npc-log.txt
    // itrace_fp = fopen("../../am-kernels/tests/cpu-tests/build/npc-log.txt", "w");
    
    itrace_fp = fopen("/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/npc-log.txt", "w");
    printf("itrace_fp = %p\n", (void *)itrace_fp); 
    assert(itrace_fp);
    g_nr_guest_inst = 0;
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vtop{contextp};//创建一个Vtop实例，Vtop是你的顶层Verilog模块的C++表示。contextp是Verilator上下文对象，用于管理仿真。   
    #ifdef  CONFIG_WAVEFORM
    tfp = new VerilatedVcdC; //这是用于波形生成的对象
    contextp->traceEverOn(true);
    top->trace(tfp, 99); //这句代码和上面那句代码用于启用波形跟踪和连接波形对象。
    tfp->open("wave.vcd"); //这是用于打开波形文件的代码
    #endif
    print_yellow_logo();
    printf("Welcome to \033[1;33;41mriscv32-NPC!\033[0m\n"); // 红底黄字
    printf("\033[1;36mFor help, type \"help\"\033[0m\n");    // 青色文字

    // reset
    top->rst  = 1; 
    top->eval();
    top->clk = 0;
    for (int i = 0; i < 10; i++) {
        top->clk = 1;
        top->eval();
        contextp->timeInc(1);

        top->clk = 0;
        top->eval();
        contextp->timeInc(1);
    }
    top->rst = 0;
    // printf("Registers after reset:\n");
    // for (int i=0;i<32;i++) printf("x%d = 0x%08x\n", i, cpu.gpr[i]);
    cpu.pc = top->PC;
    //printf("cpu_pc = 0x%08x\n",cpu.pc);
    //cpu.gpr[2] = MEM_BASE + MEM_SIZE; // 初始化 SP
    char ref_so_file[] = "/home/huang/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so";
    init_difftest(ref_so_file,img_size, difftest_port);


    sdb_mainloop();
    printf("total_inst: %ld\n",g_nr_guest_inst);
    #ifdef CONFIG_WAVEFORM 
    tfp->close();//这是用于关闭波形文件的代码
    #endif
    delete contextp;
    return 0;
}