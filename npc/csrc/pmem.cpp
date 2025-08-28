#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MEM_SIZE (1024 * 1024) // 1MB存储器
static uint32_t memory[MEM_SIZE / 4]; // 32位存储器
#define MEM_BASE 0x80000000
// 从文件加载程序到存储器

// 初始化存储器
// extern "C" void init_memory() {

//     for (int i = 0; i < MEM_SIZE / 4; i++) {
//         memory[i] = 0;
//     }
//     // memory[1] = 0x00C10093; //addi  ra sp 12
//     // memory[0] = 0x00051137; //lui	sp,0x51;
//     // //memory[2] = 0x00918133; //add   gp, ra, sp  
//     // memory[2] = 0x002081B3; //add   gp, sp, ra      	
//     // // memory[1] = 0x010000e7;
//     // memory[3] = 0x02302823; //sw x3, 48(x0)   # 将 gp (x3) 的值存储到内存地址 24
//     // //memory[4] = 0x01E02203; // lw x4, 30(x0)
//     // memory[4] = 0x03002203; //# 将内存地址 48 的值加载到 tp (x4)
//     // memory[5] = 0x03004403;
//     memory[0] = 0x000010b7;// li ra, 1000
//     memory[1] = 0x22408093;//# addi ra, ra, 548
//     memory[2] = 0x00100073; //# ebreak
//     printf("Memory initialized with single instruction: 0x%08x\n", memory[0]);
//     printf("Memory initialized with single instruction: 0x%08x\n", memory[1]);
// }

// extern "C" void init_memory(const char* path){
//     for (int i = 0; i < MEM_SIZE / 4; i++) {
//         memory[i] = 0;
//     }   
//     FILE* fp = fopen(path,"rb");
//     if(!fp) {
//         perror("Failed to open hex file");
//         exit(1);
//     }
//     uint32_t addr =0;
//     char line[9];
//     while(fscanf(fp,"%8s",line) == 1) {
//         if(line[0] == '\0') continue;
//         //转换十六进制字符串为uint32_t
//         memory[addr ++ ] = (uint32_t)strtoul(line,NULL,16);
//         // 检查地址边界
//         if (addr >= MEM_SIZE/4) {
//             fprintf(stderr, "Warning: Memory capacity exceeded at line %d\n", addr);
//             break;
//         }
    
//     }
//     fclose(fp);
//     printf("Memory initialized with single instruction: 0x%08x\n", memory[0]);//调试
//     printf("Memory initialized with single instruction: 0x%08x\n", memory[1]);  //调试  
//     printf("Loaded %d instructions from %s\n", addr, path); 
    
// }
extern "C" void init_memory(const char* path) {
    for (int i = 0; i < MEM_SIZE / 4; i++) {
        memory[i] = 0;
    } 
    FILE* fp = fopen(path, "rb");  // 二进制模式
    if (!fp) {
        perror("Failed to open file");
        exit(1);
    }
    size_t bytes_read = fread(memory, 1, MEM_SIZE, fp);  // 读取字节流
    fclose(fp);
    //printf("Loaded %zu bytes from %s\n", bytes_read, path);
    //printf("First instruction: 0x%08x\n", memory[0]);  // 调试
}
// 存储器读取函数
extern "C" int pmem_read(int raddr) {
    if (raddr == 0x80000000) {
        printf("First instruction: 0x%08x\n", memory[0]);
    }
    //打印的信息仅用于调试
    // printf("[pmem_read] 传入的原始地址: 0x%08x\n", raddr);
    raddr = raddr - MEM_BASE;
    // printf("[pmem_read] 减去 MEM_BASE(0x%08x) 后的偏移量: 0x%08x\n", MEM_BASE, raddr);
    // 添加边界检查
    if (raddr < 0 || raddr >= MEM_SIZE) {
        //printf("ERROR: pmem_read out of bounds (0x%08x)\n", raddr);
        return 0;
    }
    // if(raddr == 48)
    // {
    //     printf("hello\n");
    // }
    
    // 对齐地址到字边界
    uint32_t aligned_addr = raddr & ~0x3; 
    return memory[aligned_addr >> 2];
}

// 增强的存储器写入函数
extern "C" void pmem_write(int waddr, int wdata, int wmask_int) {
    uint8_t wmask = wmask_int & 0xF;
    waddr = waddr - MEM_BASE;
    uint32_t aligned_addr = waddr & ~0x3;//将地址的最低2位强制设为0，实现向下取整到最近的4字节边界。
    uint32_t index = aligned_addr >> 2;
    // printf("C++ pmem_write called: waddr=0x%08x, wdata=0x%08x, wmask_int=0x%08x, wmask=0x%x\n", 
    //    waddr, wdata, wmask_int, wmask);
    // 检查地址是否在有效范围内
    if (index >= MEM_SIZE / 4) {
        printf("Error: Memory write out of bounds at address 0x%08x\n", waddr);
        return;
    }

    uint8_t* mem_byte = (uint8_t*)&memory[index];
    //uint8_t wmask = wmask_byte & 0xF;  // 只取低4位有效

    // 应用字节掩码
    if (wmask & 0x1) mem_byte[0] = wdata & 0xFF;
    if (wmask & 0x2) mem_byte[1] = (wdata >> 8) & 0xFF;
    if (wmask & 0x4) mem_byte[2] = (wdata >> 16) & 0xFF;
    if (wmask & 0x8) mem_byte[3] = (wdata >> 24) & 0xFF;

    // 调试输出
    printf("MEM WRITE: addr=0x%08x data=0x%08x mask=0x%x\n", 
           waddr, wdata, wmask);
}