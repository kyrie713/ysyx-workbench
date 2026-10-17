# NPC 仿真运行说明

本文档记录当前 NPC 工程中四种常用仿真方式的运行方法：

1. Verilator 网表功能仿真
2. Icarus 网表四值仿真
3. minirv-ysyxsoc SoC 仿真
4. minirv-npc NPC 仿真

除特别说明外，以下命令都可以在任意目录执行，因为命令中使用了绝对路径。

## 1. 环境准备

先加载 OSS CAD Suite 环境：

~~~bash
source /home/huang/oss-cad-suite/environment
~~~

如果 AM_HOME 和 NVBOARD_HOME 还没有设置，再执行：

~~~bash
export AM_HOME=/home/huang/ysyx-workbench/abstract-machine
export NVBOARD_HOME=/home/huang/ysyx-workbench/nvboard
~~~

当前默认综合网表为：

~~~text
/home/huang/ecc/ysyx_25080202/runs/default/Synthesis_yosys/output/ysyx_25080202_Synthesis_sim.v.gz
~~~

如果重新综合生成了新的网表，可以通过 NETLIST_GZ=... 指定新文件。

## 2. Verilator 网表仿真

### 2.1 编译网表仿真程序

进入 NPC 工程目录：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist build
~~~

该命令会自动完成以下工作：

- 解压 Synthesis_sim.v.gz
- 加入三份 ICsprout55 标准单元行为模型
- 使用 --no-timing 和 -Dfunctional 进行功能仿真
- 生成 netlist/build/netlist_sim

### 2.2 运行 load-store

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  MAX_CYCLES=1000000
~~~

### 2.3 运行 microbench

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-minirv-npc.bin \
  MAX_CYCLES=100000000
~~~

### 2.4 运行 hello

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-minirv-npc.bin
~~~

正常结果应包括程序输出、HIT GOOD TRAP (ebreak fetched)，并且命令返回 0。

当前综合网表是按照 SoC 复位地址 0x30000000 生成的，而 minirv-npc 镜像入口为 0x80000000。网表仿真内存模型将这两个地址映射到同一份内存，专门用于兼容当前综合网表；这不会修改 CPU RTL。

### 2.5 更换综合网表或 PDK 路径

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist clean
make -C netlist run \
  NETLIST_GZ=/path/to/xxx_Synthesis_sim.v.gz \
  PDK_ROOT=/path/to/icsprout55-pdk \
  IMAGE=/path/to/program.bin
~~~

## 3. Icarus 网表四值仿真

Icarus 网表仿真目录为：

~~~text
/home/huang/ysyx-workbench/npc/netlist/iverilog
~~~

### 3.1 编译

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog build
~~~

编译时使用：

- Synthesis_sim.v 网表
- 三份 ICsprout55 标准单元模型
- -g2012
- -Dfunctional
- VPI 访存模块 netlist_pmem_vpi.vpi

标准单元模型中的大量 implicit definition of wire 警告来自 PDK 文件，通常不需要修改 PDK。

### 3.2 运行 load-store

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  MAX_CYCLES=1000000
~~~

### 3.3 运行 microbench

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/benchmarks/microbench/build/microbench-minirv-npc.bin \
  MAX_CYCLES=100000000
~~~

Icarus 对标准单元网表进行逐事件仿真，速度会比 Verilator 慢很多。测试过程中长时间没有输出是正常现象，只要进程仍在运行即可继续等待。

如果 VPI 检测到 X/Z 地址、写数据或写掩码，会输出 [VPI] 错误并结束仿真。正常结束时应看到：

~~~text
MicroBench PASS
HIT GOOD TRAP (ebreak fetched)
~~~

### 3.4 运行 hello

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog run \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-minirv-npc.bin
~~~

## 4. 在 SoC 上运行 minirv-ysyxsoc

### 4.1 编译 SoC 仿真程序

进入 NPC 目录：

~~~bash
cd /home/huang/ysyx-workbench/npc
make
~~~

当前默认会生成：

~~~text
/home/huang/ysyx-workbench/npc/build-soc/SimTop
~~~

### 4.2 运行 SoC 自带 hello

~~~bash
cd /home/huang/ysyx-workbench/npc
make run
~~~

默认镜像为：

~~~text
/home/huang/ysyx-workbench/ysyxSoC/ready-to-run/minirv/hello-minirv-ysyxsoc.bin
~~~

### 4.3 运行自己编译的 minirv-ysyxsoc 程序

例如运行 CPU 测试中的 dummy：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
make ARCH=minirv-ysyxsoc ALL=dummy run
~~~

运行 CPU 测试中的 load-store：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
make ARCH=minirv-ysyxsoc ALL=load-store run
~~~

运行 microbench：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/benchmarks/microbench
make ARCH=minirv-ysyxsoc run
~~~

运行 hello kernel：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/kernels/hello
make ARCH=minirv-ysyxsoc run
~~~

minirv-ysyxsoc.mk 会调用 ysyxSoC/ready-to-run/minirv/gen.sh，将 ELF 转换成 SoC 使用的镜像，然后由 build-soc/SimTop 启动。

## 5. 运行 minirv-npc

### 5.1 用当前 NPC 的 Icarus RTL 流程运行

这是检查 minirv-npc 镜像和当前 NPC RTL 的推荐方式。进入 NPC 目录：

~~~bash
cd /home/huang/ysyx-workbench/npc
make iverilog-run \
  IVERILOG_IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  IVERILOG_MAX_CYCLES=1000000
~~~

运行 hello：

~~~bash
cd /home/huang/ysyx-workbench/npc
make iverilog-run \
  IVERILOG_IMAGE=/home/huang/ysyx-workbench/am-kernels/kernels/hello/build/hello-minirv-npc.bin
~~~

运行全部 CPU 测试镜像：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
for image in build/*-minirv-npc.bin; do
  echo "===== Running $image ====="
  make -C ../../../npc iverilog-run \
    IVERILOG_IMAGE="$PWD/$image" || exit 1
done
~~~

### 5.2 通过 AM 的 run 目标运行

也可以在 CPU 测试目录执行：

~~~bash
cd /home/huang/ysyx-workbench/am-kernels/tests/cpu-tests
make ARCH=minirv-npc ALL=load-store run
~~~

该命令依赖 abstract-machine/scripts/platform/npc.mk 中的：

~~~make
NPC_BIN ?= /home/huang/ysyx-workbench/npc/build/top
~~~

因此只有在 /home/huang/ysyx-workbench/npc/build/top 这个旧版 NPC 仿真程序存在时才能使用。当前 SoC 版本生成的是 build-soc/SimTop，它不能当作 build/top 使用；如果没有 build/top，请使用上一节的 make iverilog-run，或者使用 SoC 版本的 ARCH=minirv-ysyxsoc。

## 6. 查看波形

### 6.1 Icarus RTL 波形

运行指定测试的前 5000 个周期并生成波形：

~~~bash
cd /home/huang/ysyx-workbench/npc
make iverilog-wave \
  IVERILOG_IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  IVERILOG_WAVE_CYCLES=5000
~~~

波形文件：

~~~text
/home/huang/ysyx-workbench/npc/build-iverilog/wave.vcd
~~~

### 6.2 Icarus 网表波形

建议使用较小的 load-store，否则综合网表波形文件可能很大：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog wave \
  IMAGE=/home/huang/ysyx-workbench/am-kernels/tests/cpu-tests/build/load-store-minirv-npc.bin \
  MAX_CYCLES=1000000
~~~

波形文件：

~~~text
/home/huang/ysyx-workbench/npc/netlist/iverilog/netlist-wave.vcd
~~~

### 6.3 minirv-ysyxsoc SoC 波形

当前 npc-main.cpp 支持通过环境变量开启 SoC 波形：

~~~bash
cd /home/huang/ysyx-workbench/npc
NPC_WAVEFORM=1 make run
~~~

波形文件：

~~~text
/home/huang/ysyx-workbench/npc/wave.vcd
~~~

该流程从程序进入 0x80000000 后开始记录，默认记录 2500 个 SoC 周期。

### 6.4 用 GTKWave 打开

~~~bash
gtkwave /home/huang/ysyx-workbench/npc/netlist/iverilog/netlist-wave.vcd
~~~

Icarus 网表波形中优先查看以下信号：

~~~text
clock
reset
ifu_reqValid
ifu_addr
ifu_respValid
ifu_rdata
lsu_reqValid
lsu_addr
lsu_wen
lsu_wdata
lsu_wmask
lsu_respValid
lsu_rdata
~~~

取指时应观察到 ifu_reqValid 有效后，下一次响应中 ifu_respValid 有效且 ifu_rdata 为指令。数据访问时应观察 lsu_reqValid、lsu_addr、lsu_wen、lsu_wdata 和 lsu_wmask，读操作或写操作完成后对应的 lsu_respValid 应有效。

当前 Verilator 网表程序只开启了 trace 编译支持，没有在 netlist-main.cpp 中默认创建 VCD；查看综合网表波形请使用上面的 Icarus 网表 wave 目标。

## 7. 清理生成物

清理 Verilator 网表仿真：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist clean
~~~

清理 Icarus 网表仿真：

~~~bash
cd /home/huang/ysyx-workbench/npc
make -C netlist/iverilog clean
~~~

清理 NPC SoC 和 RTL Icarus 生成物：

~~~bash
cd /home/huang/ysyx-workbench/npc
make clean
~~~
