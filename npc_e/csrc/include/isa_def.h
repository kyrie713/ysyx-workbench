#ifndef ISA_DEF_H
#define ISA_DEF_H

#include <stdint.h>


typedef uint32_t word_t;  
typedef uint32_t vaddr_t; 


typedef struct {
  // uint32_t inst;
  word_t gpr[32];
  vaddr_t pc;
    // 和 NEMU 对齐
  vaddr_t mepc;
  word_t  mcause;
  word_t  mstatus;
  vaddr_t mtvec;
} riscv32_NPC_state; 

extern riscv32_NPC_state cpu;  // 声明全局变量
typedef enum {
  NPC_RUNNING,
  NPC_STOP,
  NPC_END,
  NPC_ABORT,
  NPC_QUIT
} NPCStateEnum;

typedef struct {
  uint32_t inst;
} riscv32_ISADecodeInfo;  

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;

#endif // ISA_DEF_H