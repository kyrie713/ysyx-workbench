#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h> 
#include "Vtop.h"  
#include "verilated.h"
#include "verilated_vcd_c.h" // 可选，如果要导出vcd则需要加上

void nvboard_bind_all_pins(Vtop* top);

int main(int argc, char** argv, char** env) {
    
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
    nvboard_bind_all_pins(top);
    nvboard_init();
  
    
    VerilatedVcdC* tfp = new VerilatedVcdC; 
    contextp->traceEverOn(true);
    top->trace(tfp, 99); 
    tfp->open("wave.vcd"); 

    
    top->clk = 0;
    top->clrn = 1; 
    top->ps2_clk = 0;
    top->ps2_data = 0;
    top->led_off = 0; 

    
    while (!contextp->gotFinish()) {
        nvboard_update(); 
        contextp->timeInc(1); 
        top->clk = !top->clk; 
        top->eval(); 
        tfp->dump(contextp->time()); 
    }

    
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}