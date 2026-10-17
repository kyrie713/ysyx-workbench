#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

static constexpr std::uint32_t PMEM_BASE = 0x80000000u;
static constexpr std::uint32_t ALIAS_BASE = 0x30000000u;
static constexpr std::uint32_t PMEM_SIZE = 128u * 1024u * 1024u;
static constexpr std::uint32_t UART_BASE = 0x10000000u;
static constexpr std::uint32_t LEGACY_UART = 0xa0000038u;

static std::uint8_t *memory;
static std::uint8_t uart_regs[8];

static std::uint32_t memory_offset(std::uint32_t addr) {
    if (addr >= PMEM_BASE && addr < PMEM_BASE + PMEM_SIZE)
        return addr - PMEM_BASE;
    if (addr >= ALIAS_BASE && addr < ALIAS_BASE + PMEM_SIZE)
        return addr - ALIAS_BASE;
    return UINT32_MAX;
}

extern "C" void init_memory(const char *path) {
    memory = static_cast<std::uint8_t *>(std::calloc(PMEM_SIZE, 1));
    if (memory == nullptr) {
        std::perror("calloc");
        std::exit(EXIT_FAILURE);
    }

    FILE *fp = std::fopen(path, "rb");
    if (fp == nullptr) {
        std::perror(path);
        std::exit(EXIT_FAILURE);
    }
    std::size_t size = std::fread(memory, 1, PMEM_SIZE, fp);
    if (std::ferror(fp) || (size == PMEM_SIZE && std::fgetc(fp) != EOF)) {
        std::fprintf(stderr, "image read failed or image is too large: %s\n",
                     path);
        std::fclose(fp);
        std::exit(EXIT_FAILURE);
    }
    std::fclose(fp);
    std::memset(uart_regs, 0, sizeof(uart_regs));
    std::printf("[NETLIST] loaded %zu bytes from %s\n", size, path);
}

extern "C" int pmem_read(int raddr) {
    const std::uint32_t addr = static_cast<std::uint32_t>(raddr);
    const std::uint32_t aligned = addr & ~3u;
    const std::uint32_t offset = memory_offset(aligned);
    std::uint32_t value = 0;

    if (aligned >= UART_BASE && aligned < UART_BASE + sizeof(uart_regs)) {
        for (std::uint32_t lane = 0; lane < 4; lane++) {
            const std::uint32_t byte_addr = aligned + lane;
            std::uint8_t byte = 0;
            if (byte_addr >= UART_BASE &&
                byte_addr < UART_BASE + sizeof(uart_regs)) {
                const std::uint32_t uart_offset = byte_addr - UART_BASE;
                byte = uart_offset == 5 ? 0x60 : uart_regs[uart_offset];
            }
            value |= static_cast<std::uint32_t>(byte) << (lane * 8);
        }
        return static_cast<int>(value);
    }
    if (offset == UINT32_MAX)
        return 0;

    value = static_cast<std::uint32_t>(memory[offset]) |
            (static_cast<std::uint32_t>(memory[offset + 1]) << 8) |
            (static_cast<std::uint32_t>(memory[offset + 2]) << 16) |
            (static_cast<std::uint32_t>(memory[offset + 3]) << 24);
    return static_cast<int>(value);
}

extern "C" void pmem_write(int waddr, int wdata, int wmask_int) {
    const std::uint32_t addr = static_cast<std::uint32_t>(waddr);
    const std::uint32_t data = static_cast<std::uint32_t>(wdata);
    const std::uint32_t mask = static_cast<std::uint32_t>(wmask_int) & 0xfu;
    const std::uint32_t aligned = addr & ~3u;
    const std::uint32_t offset = memory_offset(aligned);

    for (std::uint32_t lane = 0; lane < 4; lane++) {
        if ((mask & (1u << lane)) == 0)
            continue;

        const std::uint32_t byte_addr = aligned + lane;
        const std::uint8_t byte = static_cast<std::uint8_t>(data >> (lane * 8));
        if (byte_addr == LEGACY_UART) {
            std::putchar(byte);
            std::fflush(stdout);
        } else if (byte_addr >= UART_BASE &&
                   byte_addr < UART_BASE + sizeof(uart_regs)) {
            const std::uint32_t uart_offset = byte_addr - UART_BASE;
            if (uart_offset == 0 && (uart_regs[3] & 0x80) == 0) {
                std::putchar(byte);
                std::fflush(stdout);
            } else {
                uart_regs[uart_offset] = byte;
            }
        } else if (offset != UINT32_MAX) {
            memory[offset + lane] = byte;
        }
    }
}
