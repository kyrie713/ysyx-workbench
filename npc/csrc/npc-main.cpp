#ifndef not_include_loading
#define not_include_loading 1
#endif
#ifndef CPU_CLOCK_RATIO
#define CPU_CLOCK_RATIO 1
#endif
#if CPU_CLOCK_RATIO < 1
#error "CPU_CLOCK_RATIO must be at least 1"
#endif
#ifdef YSYXSOC

#include "VSimTop.h"
#include "VSimTop___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <nvboard.h>
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NPC_WAVEFORM 1
static constexpr size_t FLASH_SIZE = 16 * 1024 * 1024;
static uint8_t flash[FLASH_SIZE];
static bool simulation_finished = false;
static int32_t halt_code = 0;
static bool measure_soc = false;
static bool headless = false;
static uint64_t soc_cycles = 0;
static uint64_t soc_instructions = 0;
static VerilatedVcdC *soc_trace = nullptr;
static bool trace_enabled = false;
static bool trace_started = false;
static uint64_t trace_cycles = 0;
static constexpr uint64_t TRACE_WINDOW = 2500;
static uint64_t clock_phase = 0;
static bool slow_clock_level = false;
#if not_include_loading
static bool app_started = false;
#endif
void nvboard_bind_all_pins(VSimTop *top);


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
  bool slow_clock_rise = false;

  top->cpuClock = 0;
  bool next_clock_level = ((clock_phase / CPU_CLOCK_RATIO) & 1) != 0;
  if (!slow_clock_level && next_clock_level) {
    slow_clock_rise = true;
  }
  slow_clock_level = next_clock_level;
  top->clock = next_clock_level;
  top->eval();
  if (trace_started && trace_cycles < TRACE_WINDOW) {
    soc_trace->dump(contextp->time());
  }
  contextp->timeInc(1);
  clock_phase = (clock_phase + 1) % (2 * CPU_CLOCK_RATIO);

  top->cpuClock = 1;
  next_clock_level = ((clock_phase / CPU_CLOCK_RATIO) & 1) != 0;
  if (!slow_clock_level && next_clock_level) {
    slow_clock_rise = true;
  }
  slow_clock_level = next_clock_level;
  top->clock = next_clock_level;
  top->eval();
  if (trace_enabled) {
    const uint32_t pc =
        top->rootp->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC;
    if (!trace_started && pc >= 0x80000000u) {
      soc_trace->open("wave.vcd");
      trace_started = true;
      printf("[WAVE] recording %llu cycles to wave.vcd\n",
             (unsigned long long)TRACE_WINDOW);
    }
    if (trace_started && trace_cycles < TRACE_WINDOW) {
      soc_trace->dump(contextp->time());
      trace_cycles++;
      if (trace_cycles == TRACE_WINDOW) {
        soc_trace->close();
      }
    }
  }
  contextp->timeInc(1);
  clock_phase = (clock_phase + 1) % (2 * CPU_CLOCK_RATIO);

  if (measure_soc) {
#if not_include_loading
    const bool count_this_cycle = app_started;
    const uint32_t pc =
        top->rootp->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__PC;
    if (!app_started && pc >= 0x80000000u) {
      app_started = true;
    }
    if (count_this_cycle) {
      soc_cycles++;
      if (top->rootp->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid) {
        soc_instructions++;
      }
    }
#else
    soc_cycles++;
    if (top->rootp->SimTop__DOT__asic__DOT__soc__DOT__cpu__DOT__core0__DOT__wbu__DOT__inst_valid) {
      soc_instructions++;
    }
#endif
  }

  if (slow_clock_rise && !headless) {
    nvboard_update();
  }
}

int main(int argc, char **argv) {
  const char *default_image =
      "../ysyxSoC/ready-to-run/minirv/hello-minirv-ysyxsoc.bin";
  const char *image_path = default_image;
  uint64_t run_cycles = 1000000000000;

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

  trace_enabled = getenv("NPC_WAVEFORM") != nullptr;
  headless = getenv("NPC_HEADLESS") != nullptr;
  if (trace_enabled) {
    contextp->traceEverOn(true);
    soc_trace = new VerilatedVcdC;
    top->trace(soc_trace, 99);
  }

  top->clock = 0;
  top->cpuClock = 0;
  top->reset = 1;
  top->coreSel = 0;
  top->externalPins_mygpio_in = 0;
  top->externalPins_uart0_rx = 1;

  if (!headless) {
    nvboard_bind_all_pins(top);
    nvboard_init();
  }

  for (int cycle = 0; cycle < 100; cycle++) {
    single_cycle();
  }

  top->reset = 0;
  measure_soc = true;
  while (!simulation_finished) {
    single_cycle();
  }

  printf("total cpuClock cycles = %llu\n",
         (unsigned long long)soc_cycles);
  printf("total retired instructions = %llu\n",
         (unsigned long long)soc_instructions);
  printf("clock ratio = cpuClock/clock = %d\n", CPU_CLOCK_RATIO);
#if not_include_loading
  printf("IPC mode = application only (loader excluded)\n");
#else
  printf("IPC mode = SoC total (loader included)\n");
#endif
  printf("IPC = %.6f\n",
         soc_cycles == 0 ? 0.0 :
         (double)soc_instructions / (double)soc_cycles);

  top->final();
  if (soc_trace != nullptr) {
    if (trace_started && trace_cycles < TRACE_WINDOW) {
      soc_trace->close();
    }
    delete soc_trace;
  }
  //nvboard_quit();
  delete top;
  delete contextp;
  return simulation_finished && halt_code != 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}

#else

#include "Vtop.h"
#include "verilated.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>

static bool simulation_finished = false;
static int32_t halt_code = 0;
static VerilatedContext *contextp = nullptr;
static Vtop *top = nullptr;

extern "C" void init_memory(const char *path);
extern "C" void notify_ebreak(int32_t code) {
    halt_code = code;
    simulation_finished = true;
    std::printf("%s\n", code == 0 ? "HIT GOOD TRAP" : "HIT BAD TRAP");
}

static void cycle() {
    top->clk = 0;
    top->eval();
    contextp->timeInc(1);
    top->clk = 1;
    top->eval();
    contextp->timeInc(1);
}

int main(int argc, char **argv) {
    const char *image = argc > 1 ? argv[1] :
        "../am-kernels/kernels/hello/build/hello-riscv32e-npc.bin";
    std::uint64_t max_cycles = argc > 2 ?
        std::strtoull(argv[2], nullptr, 0) : 1000000000ull;

    init_memory(image);
    contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vtop{contextp};
    top->clk = 0;
    top->rst = 1;
    top->eval();
    for (int i = 0; i < 10; i++) cycle();
    top->rst = 0;

    for (std::uint64_t i = 0; i < max_cycles && !simulation_finished; i++)
        cycle();
    if (!simulation_finished) {
        std::fprintf(stderr, "NPC TIMEOUT after %llu cycles\n",
                     static_cast<unsigned long long>(max_cycles));
        halt_code = 1;
    }
    top->final();
    delete top;
    delete contextp;
    return halt_code == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}

#endif
