AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/gpu.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
CFLAGS += -g
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here 
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER) -DMAINARGS=$(mainargs)

# Platform-specific targets can override these hooks before including this
# file. Stand-alone NPC keeps the defaults below; ysyxSoC supplies its own
# image packager and simulator arguments.
NPC_IMAGE_PACKAGER ?=
NPC_RUN_DEPS ?=
NPC_RUN_ENV ?=
NPC_RUN_EXTRA_ARGS ?=

insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
ifneq ($(strip $(NPC_IMAGE_PACKAGER)),)
	$(NPC_IMAGE_PACKAGER)
else
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin mainargs=$(mainargs)
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
endif
#NPC_BIN ?= /home/huang/ysyx-workbench/before_rebuild_npc/build/top
#NPC_BIN ?= /home/huang/ysyx-workbench/single-risc32e-npc/build/top
NPC_BIN ?= /home/huang/ysyx-workbench/npc/build/top
run: insert-arg $(NPC_RUN_DEPS)
	$(NPC_RUN_ENV) $(NPC_BIN) $(IMAGE).bin $(NPC_RUN_EXTRA_ARGS)
.PHONY: insert-arg

gdb: insert-arg $(NPC_RUN_DEPS)
	gdb --args $(NPC_BIN) $(IMAGE).bin $(NPC_RUN_EXTRA_ARGS)

