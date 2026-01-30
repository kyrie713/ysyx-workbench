#include <stdio.h>
#include <stdint.h>

void etrace_record(uintptr_t mcause, uintptr_t mepc, uintptr_t mtval, uintptr_t mstatus, uintptr_t sp,uintptr_t a0) {
    FILE *fp = fopen("/home/huang/ysyx-workbench/nemu/etrace.txt", "a"); // 相对路径../../etrace.txt
    //FILE *fp = fopen("../../etrace.txt", "w");
    if (!fp) {
        perror("fopen failed"); // 打印错误信息
        return;
    }
    //printf("111?\n");
    fprintf(fp, "mcause=0x%lx mepc=0x%lx mtval=0x%lx mstatus=0x%lx sp=0x%lx a0=0x%lx\n",
            mcause, mepc, mtval, mstatus, sp, a0);

    fclose(fp);
}