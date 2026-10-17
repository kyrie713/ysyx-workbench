# RV32E core running inside the existing ysyxSoC minirv shell.
NPC_HOME ?= $(AM_HOME)/../npc
NPC_BIN ?= $(NPC_HOME)/build-soc/SimTop
YSYXSOC_READY ?= $(AM_HOME)/../ysyxSoC/ready-to-run/minirv

# Reuse the standard NPC runtime sources and linker rules. Only the SoC
# image packaging and simulator invocation differ from stand-alone NPC.
NPC_IMAGE_PACKAGER = cd $(YSYXSOC_READY) && bash gen.sh $(IMAGE).elf $(IMAGE).bin
NPC_RUN_DEPS = npc-build
NPC_RUN_ENV = $(if $(NPC_HEADLESS),NPC_HEADLESS=$(NPC_HEADLESS))

include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/npc.mk

COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e
LDFLAGS       += -melf32lriscv

AM_SRCS += riscv/npc/libgcc/div.S \
           riscv/npc/libgcc/muldi3.S \
           riscv/npc/libgcc/multi3.c \
           riscv/npc/libgcc/ashldi3.c \
           riscv/npc/libgcc/unused.c

.PHONY: npc-build
npc-build:
	$(MAKE) -C $(NPC_HOME) SOC=1
