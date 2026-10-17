#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <riscv/riscv.h>
extern char _heap_start;
int main(const char *args);
// Abstract Machine defines __PLATFORM_YSYXSOC for both the legacy minirv
// target and the RV32E ysyxSoC target. Stand-alone NPC uses __PLATFORM_NPC.
extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#ifdef __PLATFORM_YSYXSOC
#define UART_BASE 0x10000000u
#define UART_THR  (UART_BASE + 0x0)
#define UART_IER  (UART_BASE + 0x1)
#define UART_FCR  (UART_BASE + 0x2)
#define UART_LCR  (UART_BASE + 0x3)
#define UART_MCR  (UART_BASE + 0x4)
#define UART_LSR  (UART_BASE + 0x5)
#define UART_DLL  (UART_BASE + 0x0)
#define UART_DLM  (UART_BASE + 0x1)
#define UART_LSR_THRE 0x20
#else
#define UART_BASE 0xa0000038u
#endif
Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
#ifdef __PLATFORM_YSYXSOC
  while ((inb(UART_LSR) & UART_LSR_THRE) == 0) {
  }
  outb(UART_THR, ch);
#else
  outb(UART_BASE, ch);
#endif
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
#ifdef __PLATFORM_YSYXSOC
  // 25 MHz / 115200 / 16 = 13.56; use divisor 13 for 115200 8N1.
  outb(UART_LCR, 0x80);
  outb(UART_DLM, 0x00);
  outb(UART_DLL, 0x0d);
  outb(UART_LCR, 0x03);
  outb(UART_FCR, 0x07);
  outb(UART_MCR, 0x03);
  outb(UART_IER, 0x00);
#endif
  int ret = main(mainargs);
  halt(ret);
}
