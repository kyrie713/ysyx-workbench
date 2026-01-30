#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../Config/auto.conf.h"
static int call_depth = 0;
static int func_num = 0;
typedef struct {
  char *name;
  uint32_t start;  
  uint32_t size;         
} Func_struct;
static Func_struct func_table[4096]; 
//satic const char *call_stack[1024];
const char* find_func(uint32_t addr) {
    for(int i = 0; i < func_num; i++) {
        uint32_t start = func_table[i].start;
        uint32_t size = func_table[i].size;
    
        if (size > 0 && addr >= start && addr < start + size) {
            return func_table[i].name;
        }
        else if (size == 0 && addr == start) {
            return func_table[i].name;
        }
    }
    printf("Function not found for address: 0x%08x\n", addr);
    return "Unknown";  
}

void parse_elf(const char *elf_file) {
    FILE *fp = fopen(elf_file, "rb");
    if (!fp) {
        fprintf(stderr, "[ftrace]: failed to open ELF file\n");
        return;
    }

    // 定义 ELF 文件头
    Elf32_Ehdr ehdr;
    
    // 读取 ELF 文件头
    if (fread(&ehdr, sizeof(Elf32_Ehdr), 1, fp) != 1) {
        fprintf(stderr, "[ftrace] : Failed to read ELF header\n");
        fclose(fp);
        exit(1);
    }

    //检查ELF魔数
    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {//e_ident魔数
        fprintf(stderr, "[ftrace] : %s not a ELF file\n", elf_file);
        fclose(fp);
        return;
    }

    //节区头部表的构建
    Elf32_Shdr shdr[ehdr.e_shnum];
    //把文件指针挪到节头表位置 
    fseek(fp, ehdr.e_shoff, SEEK_SET);
    if (fread(shdr, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) != ehdr.e_shnum) {
		fprintf(stderr, "[ftrace] : Failed to read section headers\n");
		fclose(fp);
		return;
	}


    // //获取节区名称表
    // Elf32_Shdr shstrtab = shdr[ehdr.e_shstrndx];
    // char shstrtable[shstrtab.sh_size];
    // fseek(fp, shstrtab.sh_offset, SEEK_SET);
	// if (fread(shstrtable, shstrtab.sh_size, 1, fp) != 1) {
	// 	fprintf(stderr, "Failed to restore section string table\n");
	// 	fclose(fp);
	// 	return;
	// }

    // 查找符号表
    int symtab_idx; 
    int strtab_idx;
    for(int i = 0; i < ehdr.e_shnum; i++) {
        if(shdr[i].sh_type == SHT_SYMTAB) symtab_idx = i;
    }

    Elf32_Shdr symtab_hdr = shdr[symtab_idx];
    

    //读取符号表
    Elf32_Sym *symtab = (Elf32_Sym *)malloc(symtab_hdr.sh_size);
    fseek(fp, symtab_hdr.sh_offset, SEEK_SET);
    if (fread(symtab, symtab_hdr.sh_size, 1, fp) != 1) {
      fprintf(stderr, "[ftrace]: read symtab %d failed\n", symtab_idx);
      free(symtab);
    }
    strtab_idx=symtab_hdr.sh_link;
    Elf32_Shdr strtab_hdr = shdr[strtab_idx];
    //debug
    #ifdef CONFIG_FTRACE
    // 打印 strtab_hdr 结构体内容
    printf("strtab_hdr:\n");
    printf("  sh_name: 0x%08x\n", strtab_hdr.sh_name);
    printf("  sh_type: 0x%08x\n", strtab_hdr.sh_type);
    printf("  sh_flags: 0x%08x\n", strtab_hdr.sh_flags);
    printf("  sh_addr: 0x%08x\n", strtab_hdr.sh_addr);
    printf("  sh_offset: 0x%08x\n", strtab_hdr.sh_offset);  // 字符串表的起始位置
    printf("  sh_size: 0x%08x\n", strtab_hdr.sh_size);      // 字符串表的大小
    printf("  sh_link: 0x%08x\n", strtab_hdr.sh_link);
    printf("  sh_info: 0x%08x\n", strtab_hdr.sh_info);
    printf("  sh_addralign: 0x%08x\n", strtab_hdr.sh_addralign);
    printf("  sh_entsize: 0x%08x\n", strtab_hdr.sh_entsize);
    //读取字符串表
    #endif
    char *strtab = (char *)malloc(strtab_hdr.sh_size);
    fseek(fp, strtab_hdr.sh_offset, SEEK_SET);
    if (fread(strtab, strtab_hdr.sh_size, 1, fp) != 1) {
      fprintf(stderr, "[ftrace]: read strtab %d failed\n", strtab_idx);
      free(symtab);
      free(strtab);
    }

    //统计符号数量，提取函数名 地址以及大小
    int symbol_count = symtab_hdr.sh_size / sizeof(Elf32_Sym);
    for(int i = 0; i < symbol_count; i++) {
        if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC) {
            //char *func_name = &strtab[symtab[i].st_name];
            char *func_name = strtab + symtab[i].st_name;
            uint32_t func_addr = symtab[i].st_value;
            uint32_t func_size = symtab[i].st_size;
            #ifdef CONFIG_FTRACE
            printf("[ftrace]: loaded func: %-20s [0x%08x, 0x%08x)%s\n", 
           func_name, func_addr, func_addr + func_size,
           func_size ? "" : " (size unknown)");
           #endif
             // 检查符号名称是否合法
            if (func_name == NULL || func_name[0] == '\0' || func_name[0] == '.') {
                printf("[ftrace]: skipping invalid function name '%s'\n", func_name);
                //continue;  // 跳过无效的符号
            }
            if (func_num < 4096) {
                func_table[func_num++] = (Func_struct){
                    .name = strdup(func_name),
                    .start = func_addr,  
                    .size = func_size
                };
            } else {
                printf("[ftrace]: func_table overflow!\n");
            }
            // func_table[func_num++] = (Func_struct){
            //     .name = strdup(func_name),
            //     .start = func_addr,  
            //     .size = func_size
            // };
        }
    }
    free(symtab);
    free(strtab);
    fclose(fp);

}
static void printf_space(){
    for(int i = 0;i < call_depth; i++)
    {
        printf(" ");
    }
}
// void push_func(const char *func_name) {
//     if (call_depth < 1024){
//         call_stack[call_depth++] = func_name;
//     } else {
//         printf("Error: call stack overflow!\n");
//     }
// }

// const char *pop_func() {
//     if (call_depth > 0) {
//         return call_stack[--call_depth];
//     }
//     return "???";  // Return a default value if stack is empty
// }

void call_ftrace(uint32_t pc, uint32_t target) {
    const char *call_func_name = find_func(target);
//printf("call_depth = %d\n", call_depth);  // 调试输出栈深度
    printf("0x%08x:",pc);
    printf_space();
    printf("call [%s @0x%08x]\n", call_func_name, target);
    call_depth++;
    // const char *call_func_name = find_func(target);
    // printf("call_depth = %d\n", call_depth);  // Debugging stack depth
    // printf_space();
    // printf("0x%08x: call [%s @0x%08x]\n", pc, call_func_name, target);
    // push_func(call_func_name);  // Push function onto the stack
}
 
void ret_ftrace(uint32_t pc) {
    if (call_depth > 0) {
        call_depth--;
        const char *ret_func_name = find_func(pc);
        if (ret_func_name == NULL) {
            ret_func_name = "Unknown";  // 如果没有找到函数名，使用 "Unknown"
        }
        printf("0x%08x:",pc);
        printf_space();
        printf("ret  [%s]\n", ret_func_name);
    } else {
        printf("Error_NPC: call depth is already 0, cannot pop from call stack.\n");
    }
    // const char *ret_func_name = pop_func();
    // printf_space();
    // printf("0x%08x: ret  [%s]\n", pc, ret_func_name);
}
