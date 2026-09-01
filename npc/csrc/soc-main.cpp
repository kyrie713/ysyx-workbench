#include "VSimTop.h"
#include "verilated.h"

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

static constexpr size_t FLASH_SIZE = 16 * 1024 * 1024;
static uint8_t flash[FLASH_SIZE];

extern "C" void flash_read(int32_t addr, int32_t *data) {
  // flash.v passes the SPI address after removing the CPU-side
  // 0x30000000 memory-map base, so addr is a byte offset in Flash.
  uint32_t offset = static_cast<uint32_t>(addr);
  assert(data != nullptr);
  assert(offset <= FLASH_SIZE - sizeof(*data));
  memcpy(data, flash + offset, sizeof(*data));
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

  // A numeric first argument keeps the old reset-only invocation convenient;
  // otherwise the first argument is treated as a Flash image path.
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
  for (uint64_t cycle = 0; cycle < run_cycles; cycle++) {
    single_cycle();
  }

  top->final();
  delete top;
  delete contextp;
  return 0;
}
