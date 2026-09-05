#define YSYXSOC 1
#ifdef YSYXSOC

#include "VSimTop.h"
#include "verilated.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static constexpr size_t FLASH_SIZE = 16 * 1024 * 1024;
static uint8_t flash[FLASH_SIZE];
static bool simulation_finished = false;
static int32_t halt_code = 0;

extern "C" void flash_read(int32_t addr, int32_t *data) {
  // flash.v provides a byte offset after removing the 0x30000000 base.
  uint32_t offset = static_cast<uint32_t>(addr);
  assert(data != nullptr);
  assert(offset <= FLASH_SIZE - sizeof(*data));
  memcpy(data, flash + offset, sizeof(*data));
}

extern "C" void notify_ebreak(int32_t code) {
  halt_code = code;
  simulation_finished = true;
  printf("%s\n", code == 0
    ? "\033[32mHIT GOOD TRAP\033[0m"
    : "\033[31mHIT BAD TRAP\033[0m");
}

static VSimTop *top;
static VerilatedContext *contextp;

static void load_flash(const char *image_path) {
  FILE *fp = fopen(image_path, "rb");
  if (fp == nullptr) {
    perror(image_path);
    exit(EXIT_FAILURE);
  }

  size_t image_size = fread(flash, 1, FLASH_SIZE, fp);
  if (ferror(fp)) {
    perror(image_path);
    fclose(fp);
    exit(EXIT_FAILURE);
  }
  int extra_byte = (image_size == FLASH_SIZE) ? fgetc(fp) : EOF;
  if (extra_byte != EOF || ferror(fp)) {
    fprintf(stderr, "Flash image is larger than %zu bytes: %s\n",
            FLASH_SIZE, image_path);
    fclose(fp);
    exit(EXIT_FAILURE);
  }
  fclose(fp);
  printf("[FLASH] loaded %zu bytes from %s\n", image_size, image_path);
}

static void single_cycle() {
  top->clock = 0;
  top->cpuClock = 0;
  top->eval();
  top->clock = 1;
  top->cpuClock = 1;
  top->eval();
  contextp->timeInc(1);
}

int main(int argc, char **argv) {
  const char *default_image =
      "../ysyxSoC/ready-to-run/minirv/hello-minirv-ysyxsoc.bin";
  const char *image_path = default_image;
  uint64_t run_cycles = 300000000;

  if (argc > 1) {
    char *end = nullptr;
    uint64_t value = strtoull(argv[1], &end, 0);
    if (end != argv[1] && *end == '\0') {
      run_cycles = value;
    } else {
      image_path = argv[1];
    }
  }
  if (argc > 2) {
    run_cycles = strtoull(argv[2], nullptr, 0);
  }
  load_flash(image_path);

  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VSimTop{contextp};

  top->clock = 0;
  top->cpuClock = 0;
  top->reset = 1;
  top->coreSel = 0;
  top->externalPins_mygpio_in = 0;
  top->externalPins_uart0_rx = 0;

  for (int cycle = 0; cycle < 100; cycle++) {
    single_cycle();
  }

  top->reset = 0;
  for (uint64_t cycle = 0;
       cycle < run_cycles && !simulation_finished;
       cycle++) {
    single_cycle();
  }

  top->final();
  delete top;
  delete contextp;
  return simulation_finished && halt_code != 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}

#else

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#include <nvboard.h> 
#include "Vtop.h"  
#include "verilated.h"
#include "include/isa_def.h"
#include "../Config/auto.conf.h"
#include "../build/obj_dir/Vtop___024root.h"
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
void init_device();
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

    init_memory(image_path);
    printf("img_size = %ld\n",img_size);

    
    init_disasm();
    
    init_device();
    itrace_fp = fopen("/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/npc-log.txt", "w");
    printf("itrace_fp = %p\n", (void *)itrace_fp); 
    assert(itrace_fp);
    g_nr_guest_inst = 0;
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vtop{contextp};
    #ifdef  CONFIG_WAVEFORM
    tfp = new VerilatedVcdC; 
    contextp->traceEverOn(true);
    top->trace(tfp, 99); 
    tfp->open("wave.vcd"); 
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
    cpu.pc = top->PC;
    
    for(int i = 0; i < 32; i++){
    cpu.gpr[i] = top->rootp->top__DOT__wbu__DOT__regfile__DOT__rf[i];
    }
    //这里也是
    // cpu.mstatus = top->csr_mstatus;
    // cpu.mcause  = top->csr_mcause;
    // cpu.mepc    = top->csr_mepc;
    // cpu.mtvec   = top->csr_mtvec;
    char ref_so_file[] = "/home/huang/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so";
    init_difftest(ref_so_file,img_size, difftest_port);


    sdb_mainloop();
    printf("total_inst: %ld\n",g_nr_guest_inst);
    #ifdef CONFIG_WAVEFORM 
    tfp->close();
    #endif
    delete contextp;
    return 0;
}

#endif
