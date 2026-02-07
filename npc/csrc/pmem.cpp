#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <cstring>
#include <elf.h>
#include "../Config/auto.conf.h"
typedef uint32_t paddr_t;
typedef uint32_t word_t;


#define MEM_SIZE (512 * 1024 * 1024) // 1MB存储器
static uint32_t memory[MEM_SIZE / 4]; // 32位存储器
#define MEM_BASE 0x80000000
#define RTC_ADDR 0xa0000048
#define SERIAL_PORT 0xa0000038
#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_FB_ADDR 0xa1000000
uint32_t screen_size();

static uint64_t nowtime = 0;
long img_size = 0;
#define KEYBOARD_ADDR 0xa0000060

//#define CONFIG_MTRACE 1

word_t mmio_read(paddr_t addr, int len);
void mmio_write(paddr_t addr, int len, word_t data);


int skip_ref_inst = 0;
uint8_t* guest_to_host(uint32_t paddr) {
    return (uint8_t*)memory + (paddr - MEM_BASE);
}

static uint64_t boot_time = 0;
uint64_t get_system_time_us() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    uint64_t now = (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;

    if (boot_time == 0) boot_time = now;
    return now - boot_time; // 返回相对时间
}


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
    img_size = bytes_read;
    fclose(fp);
    //printf("Loaded %zu bytes from %s\n", bytes_read, path);
    //printf("First instruction: 0x%08x\n", memory[0]);  // 调试
}
// 存储器读取函数
extern "C" int pmem_read(int raddr) {
    // ----------MMIO-----------
    if(raddr == KEYBOARD_ADDR)
    {
        return mmio_read(raddr, 4);
    }
    if (raddr >= CONFIG_VGA_CTL_MMIO && raddr < CONFIG_VGA_CTL_MMIO + 8) {
        return mmio_read(raddr, 4);
    }
    if (raddr >= CONFIG_FB_ADDR && raddr < CONFIG_FB_ADDR + screen_size()) {
        return mmio_read(raddr, 4);
    }

    if(raddr == RTC_ADDR){
        nowtime = get_system_time_us();
        return (uint32_t) nowtime;
    }else if(raddr == RTC_ADDR + 4){
        return (uint32_t) (nowtime >> 32);
    }
    // if (raddr == 0x80000000) {
    //     printf("First instruction: 0x%08x\n", memory[0]);
    // }
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
    #ifdef CONFIG_MTACE 
    printf("[MTRACE] 0x%08x: READ -> 0x08x\n",raddr+MEM_BASE,memory[aligned_addr>>2]);
    #endif

    return memory[aligned_addr >> 2];
}


extern "C" void pmem_write(int waddr, int wdata, int wmask_int) {
        // ---------- MMIO 处理 ----------
    // VGA 控制寄存器
    if (waddr >= CONFIG_VGA_CTL_MMIO && waddr < CONFIG_VGA_CTL_MMIO + 8) {
            mmio_write(waddr, 4, wdata);
            return;
        }
        // VGA 显存
    if (waddr >= CONFIG_FB_ADDR && waddr < CONFIG_FB_ADDR + screen_size()) {
            mmio_write(waddr, 4, wdata);
            return;
        }
    if (waddr == SERIAL_PORT) {
        skip_ref_inst = skip_ref_inst +1;
        char ch = (char)(wdata & 0xFF);
        putchar(ch);   // 或者 printf("%c", ch);
        fflush(stdout);
        //printf("[DEBUG] SERIAL WRITE: 0x%02x -> '%c'\n", wdata & 0xFF, ch);
        return;
    }
    uint8_t wmask = wmask_int & 0xF;
    waddr = waddr - MEM_BASE;
    uint32_t aligned_addr = waddr & ~0x3;//将地址的最低2位强制设为0，实现向下取整到最近的4字节边界。
    uint32_t index = aligned_addr >> 2;
    // printf("C++ pmem_write called: waddr=0x%08x, wdata=0x%08x, wmask_int=0x%08x, wmask=0x%x\n", 
    //    waddr, wdata, wmask_int, wmask);
    // 检查地址是否在有效范围内
    if (index >= MEM_SIZE / 4) {

        return;
    }

    uint8_t* mem_byte = (uint8_t*)&memory[index];
    //uint8_t wmask = wmask_byte & 0xF;  // 只取低4位有效

    // 应用字节掩码
    if (wmask & 0x1) mem_byte[0] = wdata & 0xFF;
    if (wmask & 0x2) mem_byte[1] = (wdata >> 8) & 0xFF;
    if (wmask & 0x4) mem_byte[2] = (wdata >> 16) & 0xFF;
    if (wmask & 0x8) mem_byte[3] = (wdata >> 24) & 0xFF;
    #ifdef CONFIG_MTACE
        printf("[MTRACE] 0x%08x: WRITE <- 0x%08x mask=0x%x\n", aligned_addr + MEM_BASE, wdata, wmask);
    #endif
}