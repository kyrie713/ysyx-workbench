#include <cstdint>
#include <cstdio>
#include <cstdlib>

static constexpr std::uint32_t MEM_BASE = 0x80000000u;
static constexpr std::size_t MEM_SIZE = 128u * 1024u * 1024u;
static constexpr std::uint32_t SERIAL_PORT = 0xa0000038u;
static std::uint8_t memory[MEM_SIZE];

extern "C" {
long img_size = 0;
}

extern "C" void init_memory(const char *path) {
    FILE *fp = std::fopen(path, "rb");
    if (fp == nullptr) {
        std::perror(path);
        std::exit(EXIT_FAILURE);
    }
    std::size_t n = std::fread(memory, 1, sizeof(memory), fp);
    if (std::ferror(fp) || (n == sizeof(memory) && std::fgetc(fp) != EOF)) {
        std::fprintf(stderr, "image is too large or could not be read: %s\n", path);
        std::fclose(fp);
        std::exit(EXIT_FAILURE);
    }
    std::fclose(fp);
    img_size = static_cast<long>(n);
}

extern "C" int pmem_read(int address) {
    const std::uint32_t addr = static_cast<std::uint32_t>(address);
    if (addr < MEM_BASE || addr > MEM_BASE + MEM_SIZE - 4)
        return 0;
    const std::size_t offset = static_cast<std::size_t>(addr - MEM_BASE) & ~std::size_t(3);
    return static_cast<int>(memory[offset] |
        (std::uint32_t(memory[offset + 1]) << 8) |
        (std::uint32_t(memory[offset + 2]) << 16) |
        (std::uint32_t(memory[offset + 3]) << 24));
}

extern "C" void pmem_write(int address, int data, int mask) {
    const std::uint32_t addr = static_cast<std::uint32_t>(address);
    const std::uint32_t value = static_cast<std::uint32_t>(data);
    const std::uint32_t byte_mask = static_cast<std::uint32_t>(mask) & 0xfu;
    if (addr == SERIAL_PORT) {
        std::putchar(static_cast<int>(value & 0xffu));
        std::fflush(stdout);
        return;
    }
    if (addr < MEM_BASE || addr >= MEM_BASE + MEM_SIZE)
        return;
    const std::size_t offset = static_cast<std::size_t>(addr - MEM_BASE) & ~std::size_t(3);
    for (unsigned lane = 0; lane < 4; lane++) {
        if (byte_mask & (1u << lane))
            memory[offset + lane] = static_cast<std::uint8_t>(value >> (lane * 8));
    }
}
