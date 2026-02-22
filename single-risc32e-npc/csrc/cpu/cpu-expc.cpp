#include "../include/isa_def.h"
#include "../include/debug.h"
//#include "../include/utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../../Config/auto.conf.h"


//#include <nvboard.h> 
#include "Vtop.h"  
#include "verilated.h"
#include "../../build/obj_dir/Vtop___024root.h"

#define CONFIG_DEVICE 1
//#define ITRACE
//#define ENABLE_WAVEFORM

uint64_t g_timer = 0;


extern Vtop* top;
extern VerilatedContext* contextp;
extern bool simulation_finished;
extern FILE* itrace_fp;
extern uint64_t g_nr_guest_inst;
uint32_t cpu_dnpc;
void device_update();
void disassemble(char *str,int size,uint64_t pc,uint8_t *code,int nbyte);
void init_disasm();
void call_ftrace(uint32_t pc, uint32_t target);
void ret_ftrace(uint32_t pc);
typedef struct { uint32_t pc; }Decode;
void difftest_step(vaddr_t pc, vaddr_t npc);
void difftest_skip_ref() ;
static void difftest(uint32_t pc, uint32_t dnpc) {
  // if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  Decode d = {pc};
  #ifdef CONFIG_DIFFTEST
    difftest_step(d.pc, dnpc);
  #endif
  //scan_wp();
}


uint64_t get_system_time_us();

static void ftrace(){
    uint32_t inst = top->inst;
    uint32_t pc   = top->PC;
    uint32_t next_pc = top->next_pc;

    uint32_t opcode = inst & 0x7F;
    uint32_t rd     = (inst >> 7) & 0x1F;
    uint32_t funct3 = (inst >> 12) & 0x7;
    uint32_t rs1    = (inst >> 15) & 0x1F;
     
    if (opcode == 0x6F) { // jal
        call_ftrace(pc, next_pc);
    } else 
    if (opcode == 0x67 && funct3 == 0) { // jalr
        int32_t imm = (inst >> 20) & 0xFFF;   // 12-bit immediate
        if (imm & 0x800) imm |= 0xFFFFF000;  // sign extend

        if (rd == 0 && rs1 == 1 && imm == 0) {
            ret_ftrace(pc);
        } else if(rd == 1){
            call_ftrace(pc, next_pc);
        }
    }
}
#ifdef CONFIG_WAVEFORM
#include "verilated_vcd_c.h"
extern VerilatedVcdC* tfp;
static void exec_once(Vtop* top,VerilatedContext* contextp,VerilatedVcdC* tfp){
    // cpu.inst = top->inst;
    #ifdef CONFIG_FTRACE
    ftrace();
    #endif
    #ifdef CONFIG_ITRACE 
        char disasm_output [128];
        uint32_t inst = top->inst;
        uint8_t code[4];
        code[0] = inst & 0xff;
        code[1] = (inst >> 8) & 0xff;
        code[2] = (inst >> 16) & 0xff;
        code[3] = (inst >> 24) & 0xff;
        disassemble(disasm_output,sizeof(disasm_output),top->PC,code,4);
        printf("0x%08x: 0x%08x %s\n",top->PC,top->inst,disasm_output);
        fprintf(itrace_fp, "0x%08x: 0x%08x %s\n", top->PC, top->inst, disasm_output);
        fflush(itrace_fp);   /* 强制把缓冲区刷到磁盘，先调试用 */
        //printf("[itrace] write pc=0x%08x\n", top->PC);  /* 终端能看到就说明确实执行了 */
        //log_mem_access(top);
    #endif

    top->clk = 0;top->eval();contextp->timeInc(1);tfp->dump(contextp->time());    
    top->clk = 1;top->eval();contextp->timeInc(1);tfp->dump(contextp->time());
    cpu.pc = top->PC;\
    cpu_dnpc = top->next_pc;
    for(int i = 0; i < 32; i++){
    cpu.gpr[i] = top->rootp->top__DOT__regfile__DOT__rf[i];
    }
}
#else
static void exec_once(Vtop* top,VerilatedContext* contextp){
    // cpu.pc = top->PC;
    // cpu_dnpc = top->next_pc;
    // cpu.inst = top->inst;  
    #ifdef CONFIG_FTRACE  
    ftrace();
    #endif
    #ifdef CONFIG_ITRACE 
        char disasm_output [256];
        uint32_t inst = top->inst;
        uint8_t code[4];
        code[0] = inst & 0xff;
        code[1] = (inst >> 8) & 0xff;
        code[2] = (inst >> 16) & 0xff;
        code[3] = (inst >> 24) & 0xff;
        disassemble(disasm_output,sizeof(disasm_output),top->PC,code,4);
        printf("0x%08x: 0x%08x %s\n",top->PC,top->inst,disasm_output);
        fprintf(itrace_fp, "0x%08x: 0x%08x %s\n", top->PC, top->inst, disasm_output);
        fflush(itrace_fp);   /* 强制把缓冲区刷到磁盘，先调试用 */
        //printf("[itrace] write pc=0x%08x\n", top->PC);  /* 终端能看到就说明确实执行了 */
        //log_mem_access(top);
    #endif
    top->clk = 0;top->eval();contextp->timeInc(1);
    top->clk = 1;top->eval();contextp->timeInc(1);
    cpu.pc = top->PC;
    cpu_dnpc = top->next_pc;
    for(int i = 0; i < 32; i++){
    cpu.gpr[i] = top->rootp->top__DOT__regfile__DOT__rf[i];
    }
    //printf("0x%08x: 0x%08x\n", cpu.pc, cpu.inst);
    cpu.mstatus = top->csr_mstatus;
    cpu.mcause  = top->csr_mcause;
    cpu.mepc    = top->csr_mepc;
    cpu.mtvec   = top->csr_mtvec;
}//npc_state.state == NPC_RUNNING || 
#endif
static void execute(uint64_t n) {
    for (;n > 0; n --) {
        #ifdef CONFIG_WAVEFORM 
            exec_once(top,contextp,tfp);
        #else 
            exec_once(top,contextp);
        #endif
        
        g_nr_guest_inst ++;
        #ifdef CONFIG_DIFFTEST
        bool skip = false;
        if(top->do_memread && top->mem_addr == 0xa0000048)
        { 
          skip = true;
        }
        else if(top->do_memread && top->mem_addr == 0xa000004C)
        {
          skip = true;
        }
        else if(top->MemWEn && top->mem_addr == 0xa0000038)
        {
          skip = true;
        }
        // } else if(top->I_ecall)
        // {

        //   skip = true;
        // }

        if (skip) {
            difftest_skip_ref();  
        }
        else {
            difftest(cpu.pc, cpu_dnpc);   // 正常 diff
        }
        #endif
        #ifdef CONFIG_DEVICE 
          device_update();
        #endif
        if (simulation_finished) break;
    }
}
static void statistic() {
  setlocale(LC_NUMERIC, "");
  #define NPCBERIC_FMT "%'" PRIu64
  Log("host time spent = " NPCBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NPCBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NPCBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}    
void cpu_exec(uint64_t n) {
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT: case NPC_QUIT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }
  uint64_t timer_start = get_system_time_us();

  execute(n);

  uint64_t timer_end = get_system_time_us();
  g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
    {

      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
          statistic();
      }
      break;
    
  }//执行完 execute(n) 后，NEMU 可能有不同的状态,不同状态要做不同处理,这段代码就是在处理这些情况
}

    // if (npc_state.state == NPC_ABORT) {
    // // 红色高亮
    //     printf("\033[34m[%s:%d %s] npc:\033[0m  \033[1;31mABORT\033[0m at pc = 0x%08x\n",
    //            __FILE__, __LINE__, __func__, npc_state.halt_pc);
    // } else if (npc_state.halt_ret == 0) {
    // // 绿色高亮
    //     printf("\033[34m[%s:%d %s] npc:\033[0m  \033[1;32mHIT GOOD TRAP\033[0m at pc = 0x%08x\n",
    //            __FILE__, __LINE__, __func__, npc_state.halt_pc);
    // } else {
    // // 红色高亮
    //     printf("\033[34m[%s:%d %s] npc:\033[0m  \033[1;31mHIT BAD TRAP\033[0m at pc = 0x%08x\n",
    //            __FILE__, __LINE__, __func__, npc_state.halt_pc);
    // }

