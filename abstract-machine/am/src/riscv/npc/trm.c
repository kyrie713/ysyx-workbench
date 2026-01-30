#include <am.h>
#include <klib-macros.h>
//#include <stdio.h>
extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define SERIAL_PORT 0xa0000038//0x10000000
Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  *(volatile char *)SERIAL_PORT = ch;
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void _trm_init() {
   //unsigned int lo;
    // asm volatile("csrrw %0, mvendorid, x0" : "=r"(vendor_id));
    // asm volatile("csrrw %0, marchid, x0"   : "=r"(arch_id));

    // printf("mvendorid = %d (0x%x)\n", vendor_id, vendor_id);
    // printf("marchid   = %d (0x%x)\n", arch_id, arch_id);
// for (int i = 0; i < 5; i++) {
//     asm volatile("csrrw %0, mcycle, x0" : "=r"(lo));
//     printf("mcycle = %d\n", lo);
//     for (int i = 0; i < 1000; i++) asm volatile("nop");
// }
  int ret = main(mainargs);
  halt(ret);
}
