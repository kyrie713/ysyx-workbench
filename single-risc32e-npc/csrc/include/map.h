#ifndef __DEVICE_MAP_H__
#define __DEVICE_MAP_H__

#include <stdint.h>
#include <stdbool.h>
typedef void(*io_callback_t)(uint32_t, int, bool);
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE (512 * 1024 * 1024)

uint8_t* new_space(int size);

typedef struct {
  const char *name;
  // we treat ioaddr_t as paddr_t here
  uint32_t low;
  uint32_t high;
  void *space;
  io_callback_t callback;
} IOMap;

static inline bool in_pmem(uint32_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}
static inline bool map_inside(IOMap *map, uint32_t addr) {
  return (addr >= map->low && addr <= map->high);
} 

static inline int find_mapid_by_addr(IOMap *maps, int size, uint32_t addr) {
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {
      return i;
    }
  }
  return -1;
}



void add_mmio_map(const char *name, uint32_t addr,
        void *space, uint32_t len, io_callback_t callback);
uint32_t map_read(uint32_t addr, int len, IOMap *map);
void map_write(uint32_t addr, int len, uint32_t data, IOMap *map);
//map_read：从设备映射中读取数据。map_write：向设备写数据.它们会调用map->callback来处理设备的特殊逻辑（比如UART输出，VGA刷新等）
#endif