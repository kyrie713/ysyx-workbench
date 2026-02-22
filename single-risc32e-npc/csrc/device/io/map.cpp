
#include "../../include/map.h"
#include "../../include/isa_def.h"
#include "../../include/common.h"
#include "../../include/utils.h"
#include "../../include/macro.h"

#define IO_SPACE_MAX (32 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)
/*定义最大 I/O 空间：32MB。
io_space：I/O 模拟内存的起始地址。
p_space：当前可用位置的指针（分配设备内存时往后推）*/


static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}



uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  //assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}


static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    printf("[MMIO ERROR] address 0x%08x is out of bound! pc = 0x%08x\n",
           addr, cpu.pc);
    npc_state.state = NPC_ABORT;  // 或者你想让它继续执行也行
    return;
  }

  if (!(addr >= map->low && addr <= map->high)) {
    printf("[MMIO ERROR] address 0x%08x is out of bound for device '%s' "
           "[0x%08x, 0x%08x], pc = 0x%08x\n",
           addr, map->name, map->low, map->high, cpu.pc);
    npc_state.state = NPC_ABORT;
    return;
  }
}



static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}


void dtrace_read(const char *operation, paddr_t addr, int len, IOMap *map) {
    log_write("[%s] %s access at 0x%x, len = %d\n", 
           map->name, operation, addr, len);
}
void dtrace_write(const char *operation, paddr_t addr, int len, IOMap *map) {
    log_write("[%s] %s access at 0x%x, len = %d\n", 
           map->name, operation, addr, len);
}
void init_map() {
  io_space = (uint8_t*)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  dtrace_read("READ", addr, len, map);
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  uint8_t *end_offset = (uint8_t *)map->space + offset;
  word_t ret = host_read(end_offset, len);
  return ret;
}


void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  dtrace_write("WRITE", addr, len, map);
  uint8_t *end_offset = (uint8_t *)map->space + offset;
  host_write(end_offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}
