#include <am.h>
#include "../riscv.h"
//#include <stdio.h>
#define KEYDOWN_MASK 0x8000
#define KBD_ADDR    0xa0000060
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = inl(KBD_ADDR);
  //printf("AM read raw = %d\n", data);
  kbd->keydown = (data & KEYDOWN_MASK ? 1 : 0);
  kbd->keycode = data & ~KEYDOWN_MASK;
}
