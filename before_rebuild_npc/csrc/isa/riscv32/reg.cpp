#include <stdio.h>
#include <stdint.h>

#include "../../../build/obj_dir/Vtop.h"
#include "../../../build/obj_dir/Vtop___024root.h"
//#include "/home/huang/ysyx-workbench/npc/build/obj_dir/Vtop___024root.h"
extern Vtop* top;

uint32_t *cpu_gpr = NULL;
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// extern "C" void set_gpr_ptr(uint32_t *a){
//     cpu_gpr = a;
// }
void scan_registers(){
    //if(!cpu_gpr) return;
    for(int i =0;i<32;i++)
    {   
        //printf("HELLOP\n");
        printf("%s\t\t0x%08x\n",regs[i],top->rootp->top__DOT__regfile__DOT__rf[i]);
    }
    printf("mepc\t\t0x%08x\n",top->csr_mepc);
    printf("mcause\t\t0x%08x\n",top->csr_mcause);
    printf("mstatus\t\t0x%08x\n",top->csr_mstatus);
    printf("mtvec\t\t0x%08x\n",top->csr_mtvec);
}