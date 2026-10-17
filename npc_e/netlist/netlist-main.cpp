#include "Vnetlist_top.h"
#include "verilated.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>

extern "C" void init_memory(const char *path);

static void cycle(Vnetlist_top *top, VerilatedContext *context) {
    top->clock = 0;
    top->eval();
    context->timeInc(1);
    top->clock = 1;
    top->eval();
    context->timeInc(1);
}

int main(int argc, char **argv) {
    const char *image = argc > 1 ? argv[1] : "load-store-minirv-npc.bin";
    std::uint64_t max_cycles = argc > 2
        ? std::strtoull(argv[2], nullptr, 0)
        : 1000000000ull;
    VerilatedContext *context = new VerilatedContext;
    Vnetlist_top *top = new Vnetlist_top{context};

    init_memory(image);
    top->clock = 0;
    top->reset = 1;
    top->eval();
    for (int i = 0; i < 100; i++)
        cycle(top, context);
    top->reset = 0;

    for (std::uint64_t i = 0; i < max_cycles; i++) {
        cycle(top, context);
        if (top->ifu_respValid && top->ifu_rdata == 0x00100073u) {
            std::printf("\nHIT GOOD TRAP (ebreak fetched)\n");
            delete top;
            delete context;
            return 0;
        }
    }

    std::fprintf(stderr, "NETLIST TIMEOUT after %llu cycles\n",
                 static_cast<unsigned long long>(max_cycles));
    delete top;
    delete context;
    return 1;
}
