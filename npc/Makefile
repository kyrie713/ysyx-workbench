all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --trace --exe --build -j 0 -Wall \vsrc/top.v csrc/main.cpp --top-module top
	./obj_dir/Vtop
clean:
	rm -rf obj_dir *.o *.d *.a *.elf *.vcd *.fst
.PHONY: all sim clean
include ../Makefile
