/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <dlfcn.h>

// #include <isa.h>
// #include <cpu/cpu.h>
// #include <memory/paddr.h>
#include "../../include/isa_def.h"
#include "../../include/utils.h"
// #include <difftest-def.h>
#include "../../../Config/auto.conf.h"
#include "../../include/isa_def.h"
#include "../../include/difftest.h"
#include "../../include/utils.h"
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
extern bool simulation_finished;
#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

uint8_t* guest_to_host(uint32_t paddr);


//difftest
bool isa_difftest_checkregs(riscv32_NPC_state *ref_r, vaddr_t pc) {
  for(int i = 0;i<32;i++)
  {
    if(cpu.gpr[i] !=ref_r->gpr[i]){
      printf("Mismatch at PC = 0x%08x: reg[%d] DUT=0x%08x, REF=0x%08x\n",
            pc, i, cpu.gpr[i], ref_r->gpr[i]);
      return false;
    }
  }
  // if(cpu.mepc !=ref_r->mepc){
  //     printf("Mismatch at PC = 0x%08x: cpu_mepc DUT=0x%08x, REF=0x%08x\n",
  //           pc, cpu.mepc, ref_r->mepc);
  //     return false;
  // }
  // if(cpu.mtvec != ref_r->mtvec)
  // {
  //     printf("Mismatch at PC = 0x%08x: cpu_mtvec DUT=0x%08x, REF=0x%08x\n",
  //           pc, cpu.mtvec, ref_r->mtvec);
  //     return false;
  // }
  if(cpu.pc != ref_r->pc){
    printf("Mismatch: PC DUT=0x%08x REF=0x%08x\n",cpu.pc,ref_r->pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
void scan_registers();
void isa_reg_display(){
  scan_registers();
}


// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}
/*ref_difftest_exec(1) 让“参考设计（REF，通常是 Spike 或 QEMU）”向前执行 1 条指令，
并保持原地不动，不会把结果直接写回 NEMU 的寄存器——只是把 REF 内部的 PC 和寄存器更新到“下一条”状态*/
void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  /*ref_difftest_memcpy 是 运行时绑定到 REF 的函数指针；
  difftest_memcpy 是 REF 里的真实实现，但 DUT 编译时并不知道它在哪里；
  所以 DUT 必须通过函数指针间接调用，才能实现 和不同参考模型解耦。
  dlsym 在运行时查找共享库中名为 "difftest_memcpy" 的符号，返回其地址（类型 void *）。
  这里把返回值赋给全局函数指针 ref_difftest_memcpy
  (这个指针之前在文件顶部声明为 void (*ref_difftest_memcpy)(paddr_t, void*, size_t, bool)）
  后续通过 ref_difftest_memcpy(...) 的调用，会调用 REF 内部的 difftest_memcpy ,
  实现来在 REF 内存与宿主缓冲区之间搬运数据*/
  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
  //初始化参考模型
  ref_difftest_init(port);
  //// 把 DUT 的初始寄存器状态（包括 PC）传给 REF
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  // printf("REF registers after init:\n");
  // for (int i = 0; i < 32; i++) {
  //   printf("x%-2d = 0x%08x\n", i, cpu.gpr[i]);
// }
}

static void checkregs(riscv32_NPC_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    simulation_finished = true;
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  riscv32_NPC_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);//调用完,ref_r.gpr[i]里存的就是REF的通用寄存器值,ref_r.pc里存的就是REF的PC值
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }
//在执行某些“特殊指令”时，别的地方会把它设成 true,就代表：这条指令不要求 REF 来执行
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);//把 DUT（NEMU）的寄存器状态，复制到 REF 里去
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);//调用REF difftest_exec函数,执行1次,NEMU已经在外面执行1次,这里让 REF 跟上步伐.
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);//把REF的寄存器状态 拷贝出来，放到ref_r里保存一下

  checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
// void difftest_skip_ref() {

// }
#endif
