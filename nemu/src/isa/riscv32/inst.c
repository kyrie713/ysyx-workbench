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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
//#define CONFIG_ERTACE
// #define CONFIG_FTRACE 1
#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

void etrace_record(uintptr_t mcause, uintptr_t mepc, uintptr_t mtval, uintptr_t mstatus, uintptr_t sp,uintptr_t a0);
word_t csr_read(int csr) {
  switch (csr) {
    case 0x305: return cpu.mtvec;   // mtvec
    case 0x341: return cpu.mepc;    // mepc
    case 0x342: return cpu.mcause;  // mcause
    case 0x300: return cpu.mstatus; // mstatus
    default:
      panic("Unsupported CSR read: %x", csr);
  }
}

void csr_write(int csr, word_t val) {
  switch (csr) {
    case 0x305: cpu.mtvec   = val; break;
    case 0x341: cpu.mepc    = val; break;
    case 0x342: cpu.mcause  = val; break;
    case 0x300: cpu.mstatus = val; break;
    default:
      panic("Unsupported CSR write: %x", csr);
  }
}
void call_ftrace(uint32_t pc, uint32_t target);
void ret_ftrace(uint32_t pc);
enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_J,TYPE_B,TYPE_r,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immB() do { *imm = SEXT((BITS(i, 31, 31)<<12| BITS(i, 7, 7) << 11 | BITS(i,30,25) << 5 | BITS(i, 11, 8) << 1 ),13) ;} while(0)
#define immJ() do { *imm = SEXT((BITS(i,31, 31)<<20| BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i,30,21) << 1),21);} while(0)
/*在decode_exec函数中调用
首先从 s->isa.inst.val 中获取当前指令的值，存储在变量 i 中。
使用 BITS 宏从指令中提取出相应的字段值。例如，BITS(i, 19, 15) 表示从指令的第 19 位到第 15 位提取出一个字段值，存储在变量 rs1 中。
将 BITS(i, 11, 7) 的字段值赋给 *rd，即将目标操作数的寄存器编号存储在 rd 指针指向的位置。
根据指令的类型 type 进行不同的操作数解析：
如果 type 是 TYPE_I，则调用 src1R() 宏将源操作数1的值存储在 *src1 中，调用 immI() 宏将立即数的值存储在 *imm 中。
如果 type 是 TYPE_U，则调用 immU() 宏将立即数的值存储在 *imm 中。
如果 type 是 TYPE_S，则调用 src1R() 宏将源操作数1的值存储在 *src1 中，调用 src2R() 宏将源操作数2的值存储在 *src2 中，调用 immS() 宏将立即数的值存储在 *imm 中。
总体来说，这段代码根据指令的类型解析指令的操作数。根据不同的指令类型，从指令中提取出对应的字段值，并将其存储在相应的变量中，以便后续使用。*/

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                    immJ(); break;
    case TYPE_r: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_N: break;
    default: panic("unsupported type = %d", type);
  }
}

static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);//
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) =  imm);

  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1 !=src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beqz   , B, if(src1 ==src2) s->dnpc = s->pc + imm);//
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if((int32_t)src1 >= (int32_t)src2) s->dnpc = s->pc + imm);//
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, if((uint32_t)src1 >= (uint32_t)src2) s -> dnpc = s->pc+imm);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if((int32_t)src1 < (int32_t)src2) s->dnpc = s->pc +imm);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if((uint32_t)src1 < (uint32_t)src2) s->dnpc = s->pc + imm);

  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , r, R(rd) = src1 - src2);
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , r, R(rd) = src1 + src2);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , r, R(rd) = (uint32_t)src1 < (uint32_t)src2);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , r, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , r, R(rd) = src1 | src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , r, R(rd) = (uint32_t)src1 << src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , r, R(rd) = src1 & src2);
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , r, R(rd) = (int32_t)src1 * (int32_t)src2);//没加(int32_t)就会有错误
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", Div    , r, R(rd) = (int32_t)src1 / (int32_t)src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , r, R(rd) = (int32_t)src1 % (int32_t)src2);
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , r, R(rd) = ((int32_t)src1 < (int32_t)src2));
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , r, R(rd) = (int64_t)(int32_t)src1 * (int64_t)(int32_t)src2>>32);//(int64_t)(int32_t)src1 * (int32_t)src2)>>32写成这样mul-longlong就报错
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , r, R(rd) = (uint32_t)src1 % (uint32_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", Divu   , r, R(rd) = (uint32_t)src1 / (uint32_t)src2);
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , r, R(rd) = (int32_t)src1 >> (int32_t)src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , r, R(rd) = (uint32_t)src1 >> (uint32_t)src2);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , r, R(rd) = ((uint64_t)src1 * (uint64_t)src2) >> 32);
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , r, 
    //int csr = BITS(s->isa.inst, 31, 20);
    s -> dnpc = csr_read(0x341));

  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ imm); 
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (uint32_t)src1 < (uint32_t)imm);
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1+imm);//
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm,4));//
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I,  s -> dnpc = (src1 + imm) & ~1;R(rd) = s -> pc + 4;
  IFDEF (CONFIG_FTRACE,{
    int rs1 = BITS(s->isa.inst,19,15);
    if (rd == 0 && imm == 0&&rs1==1)
        ret_ftrace(s->pc);
    else if (rd == 1) {call_ftrace(s->pc, s->dnpc);} })
    );
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", li     , I, R(rd) = src1 + imm);//
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, if((imm & 0x20)==0)R(rd)=(int32_t)src1>>imm);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1&imm);
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, if((imm & 0x20)==0)R(rd)=(uint32_t)src1 >>(imm & 0x1F));//提取imm的低5位
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, if((imm & 0x20)==0)R(rd)=(uint32_t)src1 << (imm & 0x1F));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm,2),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm,2));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = ((int32_t)src1 < (int32_t)imm) ? 1 : 0);
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , I, 
    etrace_record(csr_read(0x305),csr_read(0x341),csr_read(0x342),csr_read(0x300),R(2),R(10));
    
    s->dnpc = isa_raise_intr(11, s->pc)
  
  );
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , I,  
    int rs1 = BITS(s->isa.inst,19,15);
    int csr = BITS(s->isa.inst, 31, 20);   // csr 编号
    word_t t = csr_read(csr);       // 读 CSR 旧值
    if (rs1 != 0) {                 // rs1 != x0 → 修改 CSR
      csr_write(csr, t | src1);
    }
    if (rd != 0) {                  // rd != x0 → 写回旧值
      R(rd) = t;
    }
    );
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , I,
  int rs1 = BITS(s->isa.inst,19,15);
  int csr = BITS(s->isa.inst, 31, 20);
  word_t  t = csr_read(csr);
    if (rs1 != 0) {
      csr_write(csr, src1);
    }
    if (rd != 0) {
      R(rd) = t;
    }
);


  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));//
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, s->dnpc = s->pc+imm;R(rd) = s->pc + 4;
  //printf("FTRACE ENABLED\n");
  IFDEF (CONFIG_FTRACE,{
  //   if (rd == 1) {
  //       call_trace(s->pc, s->dnpc);
  //   }}));//
      // if (rd == 1) {
      //   call_ftrace(s->pc, s->dnpc);});
      if (rd == 1) {
        call_ftrace(s->pc, s->dnpc);
    }}));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0 NEMUTRAP(cpu.pc, cpu.gpr[10])
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
