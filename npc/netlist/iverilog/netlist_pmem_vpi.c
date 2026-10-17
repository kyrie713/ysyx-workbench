#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vpi_user.h>

#define PMEM_BASE 0x80000000u
#define ALIAS_BASE 0x30000000u
#define PMEM_SIZE (128u * 1024u * 1024u)
#define UART16550_BASE 0x10000000u
#define LEGACY_UART_ADDR 0xa0000038u

static uint8_t *pmem;
static uint8_t *pmem_xmask;
static uint8_t uart_regs[8];

static uint32_t memory_offset(uint32_t addr) {
    if (addr >= PMEM_BASE && addr < PMEM_BASE + PMEM_SIZE)
        return addr - PMEM_BASE;
    if (addr >= ALIAS_BASE && addr < ALIAS_BASE + PMEM_SIZE)
        return addr - ALIAS_BASE;
    return UINT32_MAX;
}

static void stop_simulation(const char *message) {
    vpi_printf("[VPI] %s\n", message);
    vpi_control(vpiFinish, 1);
}

static int get_vec32(vpiHandle handle, uint32_t *data, uint32_t *xmask) {
    s_vpi_value value;
    value.format = vpiVectorVal;
    vpi_get_value(handle, &value);
    if (value.value.vector == NULL)
        return 0;
    *data = (uint32_t)value.value.vector[0].aval;
    *xmask = (uint32_t)value.value.vector[0].bval;
    return 1;
}

static void return_vec32(vpiHandle call, uint32_t data, uint32_t xmask) {
    s_vpi_vecval vector;
    s_vpi_value value;
    vector.aval = (PLI_UINT32)data;
    vector.bval = (PLI_UINT32)xmask;
    value.format = vpiVectorVal;
    value.value.vector = &vector;
    vpi_put_value(call, &value, NULL, vpiNoDelay);
}

static void return_x(vpiHandle call) {
    return_vec32(call, 0, UINT32_MAX);
}

static int next_argument(vpiHandle arguments, vpiHandle *argument) {
    *argument = vpi_scan(arguments);
    return *argument != NULL;
}

static PLI_INT32 pmem_init_calltf(PLI_BYTE8 *user_data) {
    s_vpi_vlog_info info;
    const char *image_path = NULL;
    FILE *image;
    size_t image_size;
    int i;

    (void)user_data;
    if (!vpi_get_vlog_info(&info)) {
        stop_simulation("cannot read vvp command-line arguments");
        return 0;
    }
    for (i = 0; i < info.argc; i++) {
        if (strncmp(info.argv[i], "+IMAGE=", 7) == 0) {
            image_path = info.argv[i] + 7;
            break;
        }
    }
    if (image_path == NULL || image_path[0] == '\0') {
        stop_simulation("missing +IMAGE=<minirv-npc.bin>");
        return 0;
    }

    pmem = (uint8_t *)calloc(PMEM_SIZE, 1);
    pmem_xmask = (uint8_t *)malloc(PMEM_SIZE);
    if (pmem == NULL || pmem_xmask == NULL) {
        stop_simulation("cannot allocate four-state physical memory");
        return 0;
    }
    memset(pmem_xmask, 0xff, PMEM_SIZE);

    image = fopen(image_path, "rb");
    if (image == NULL) {
        vpi_printf("[VPI] cannot open image: %s\n", image_path);
        vpi_control(vpiFinish, 1);
        return 0;
    }
    image_size = fread(pmem, 1, PMEM_SIZE, image);
    if (ferror(image) || (image_size == PMEM_SIZE && fgetc(image) != EOF)) {
        fclose(image);
        stop_simulation("image read failed or image is larger than PMEM");
        return 0;
    }
    fclose(image);
    memset(pmem_xmask, 0, image_size);
    memset(uart_regs, 0, sizeof(uart_regs));
    vpi_printf("[VPI] loaded %lu bytes from %s\n",
               (unsigned long)image_size, image_path);
    return 0;
}

static uint32_t read_uart_word(uint32_t aligned_addr) {
    uint32_t result = 0;
    uint32_t lane;

    for (lane = 0; lane < 4; lane++) {
        uint32_t byte_addr = aligned_addr + lane;
        uint8_t byte = 0;
        if (byte_addr >= UART16550_BASE && byte_addr < UART16550_BASE + 8) {
            uint32_t offset = byte_addr - UART16550_BASE;
            byte = (offset == 5) ? 0x60 : uart_regs[offset];
        }
        result |= (uint32_t)byte << (lane * 8);
    }
    return result;
}

static void read_memory_word(uint32_t addr, uint32_t *data,
                             uint32_t *xmask) {
    uint32_t aligned_addr = addr & ~3u;
    uint32_t offset;

    if (aligned_addr >= UART16550_BASE &&
        aligned_addr < UART16550_BASE + 8) {
        *data = read_uart_word(aligned_addr);
        *xmask = 0;
        return;
    }
    offset = memory_offset(aligned_addr);
    if (offset == UINT32_MAX) {
        *data = 0;
        *xmask = 0;
        return;
    }

    *data = (uint32_t)pmem[offset] |
            ((uint32_t)pmem[offset + 1] << 8) |
            ((uint32_t)pmem[offset + 2] << 16) |
            ((uint32_t)pmem[offset + 3] << 24);
    *xmask = (uint32_t)pmem_xmask[offset] |
             ((uint32_t)pmem_xmask[offset + 1] << 8) |
             ((uint32_t)pmem_xmask[offset + 2] << 16) |
             ((uint32_t)pmem_xmask[offset + 3] << 24);
}

static void write_uart_byte(uint32_t addr, uint8_t data) {
    uint32_t offset = addr - UART16550_BASE;

    if (offset == 0 && (uart_regs[3] & 0x80) == 0) {
        putchar(data);
        fflush(stdout);
    } else if (offset < sizeof(uart_regs)) {
        uart_regs[offset] = data;
    }
}

static void write_memory_word(uint32_t addr, uint32_t data,
                              uint32_t data_xmask, uint32_t mask) {
    uint32_t aligned_addr = addr & ~3u;
    uint32_t lane;

    for (lane = 0; lane < 4; lane++) {
        uint32_t byte_addr;
        uint8_t byte;
        uint8_t byte_xmask;
        uint32_t offset;

        if ((mask & (1u << lane)) == 0)
            continue;
        byte_addr = aligned_addr + lane;
        byte = (uint8_t)(data >> (lane * 8));
        byte_xmask = (uint8_t)(data_xmask >> (lane * 8));

        if (byte_addr == LEGACY_UART_ADDR) {
            if (byte_xmask != 0) {
                stop_simulation("attempted to write X/Z data to legacy UART");
                return;
            }
            putchar(byte);
            fflush(stdout);
        } else if (byte_addr >= UART16550_BASE &&
                   byte_addr < UART16550_BASE + 8) {
            if (byte_xmask != 0) {
                stop_simulation("attempted to write X/Z data to UART16550");
                return;
            }
            write_uart_byte(byte_addr, byte);
        } else {
            offset = memory_offset(byte_addr);
            if (offset != UINT32_MAX) {
                pmem[offset] = byte;
                pmem_xmask[offset] = byte_xmask;
            }
        }
    }
}

static PLI_INT32 pmem_read_calltf(PLI_BYTE8 *user_data) {
    vpiHandle call = vpi_handle(vpiSysTfCall, NULL);
    vpiHandle arguments = vpi_iterate(vpiArgument, call);
    vpiHandle address_handle;
    uint32_t address;
    uint32_t address_xmask;
    uint32_t data;
    uint32_t data_xmask;

    (void)user_data;
    if (pmem == NULL) {
        stop_simulation("$pmem_read called before $pmem_init");
        return_x(call);
        return 0;
    }
    if (arguments == NULL ||
        !next_argument(arguments, &address_handle) ||
        !get_vec32(address_handle, &address, &address_xmask) ||
        address_xmask != 0) {
        vpi_printf("[VPI] $pmem_read received an X/Z address\n");
        return_x(call);
        return 0;
    }
    read_memory_word(address, &data, &data_xmask);
    return_vec32(call, data, data_xmask);
    return 0;
}

static PLI_INT32 pmem_write_calltf(PLI_BYTE8 *user_data) {
    vpiHandle call = vpi_handle(vpiSysTfCall, NULL);
    vpiHandle arguments = vpi_iterate(vpiArgument, call);
    vpiHandle address_handle;
    vpiHandle data_handle;
    vpiHandle mask_handle;
    uint32_t address;
    uint32_t address_xmask;
    uint32_t data;
    uint32_t data_xmask;
    uint32_t mask;
    uint32_t mask_xmask;

    (void)user_data;
    if (pmem == NULL) {
        stop_simulation("$pmem_write called before $pmem_init");
        return 0;
    }
    if (arguments == NULL ||
        !next_argument(arguments, &address_handle) ||
        !next_argument(arguments, &data_handle) ||
        !next_argument(arguments, &mask_handle) ||
        !get_vec32(address_handle, &address, &address_xmask) ||
        !get_vec32(data_handle, &data, &data_xmask) ||
        !get_vec32(mask_handle, &mask, &mask_xmask) ||
        address_xmask != 0 || mask_xmask != 0) {
        stop_simulation("$pmem_write received an X/Z address or mask");
        return 0;
    }
    write_memory_word(address, data, data_xmask, mask & 0xf);
    return 0;
}

static void register_pmem_vpi(void) {
    s_vpi_systf_data task;

    memset(&task, 0, sizeof(task));
    task.type = vpiSysTask;
    task.tfname = (PLI_BYTE8 *)"$pmem_init";
    task.calltf = pmem_init_calltf;
    vpi_register_systf(&task);

    memset(&task, 0, sizeof(task));
    task.type = vpiSysFunc;
    task.sysfunctype = vpiIntFunc;
    task.tfname = (PLI_BYTE8 *)"$pmem_read";
    task.calltf = pmem_read_calltf;
    vpi_register_systf(&task);

    memset(&task, 0, sizeof(task));
    task.type = vpiSysTask;
    task.tfname = (PLI_BYTE8 *)"$pmem_write";
    task.calltf = pmem_write_calltf;
    vpi_register_systf(&task);
}

void (*vlog_startup_routines[])(void) = {
    register_pmem_vpi,
    0
};
