#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




static int call_depth = 0;
static int func_num = 0;
typedef struct {
  char *name;
  uint32_t start;  
  uint32_t size;         
} Func_struct;
static Func_struct func_table[1024]; 
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
    fseek(fp, ehdr.e_shoff, SEEK_SET);
    if (fread(shdr, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) != ehdr.e_shnum) {
		fprintf(stderr, "[ftrace] : Failed to read section headers\n");
		fclose(fp);
		return;
	}


    // 查找符号表
    int symtab_idx = 0; 
    int strtab_idx = 0;
    for(int i = 0; i < ehdr.e_shnum; i++) {
        if(shdr[i].sh_type == SHT_SYMTAB) symtab_idx = i;
    }

    Elf32_Shdr symtab_hdr = shdr[symtab_idx];
    

    Elf32_Sym *symtab = (Elf32_Sym *)malloc(symtab_hdr.sh_size);
    fseek(fp, symtab_hdr.sh_offset, SEEK_SET);
    if (fread(symtab, symtab_hdr.sh_size, 1, fp) != 1) {
      fprintf(stderr, "[ftrace]: read symtab %d failed\n", symtab_idx);
      free(symtab);
    }
    strtab_idx=symtab_hdr.sh_link;
    Elf32_Shdr strtab_hdr = shdr[strtab_idx];

    
    char *strtab = (char *)malloc(strtab_hdr.sh_size);
    fseek(fp, strtab_hdr.sh_offset, SEEK_SET);
    if (fread(strtab, strtab_hdr.sh_size, 1, fp) != 1) {
      fprintf(stderr, "[ftrace]: read strtab %d failed\n", strtab_idx);
      free(symtab);
      free(strtab);
    }

    int symbol_count = symtab_hdr.sh_size / sizeof(Elf32_Sym);
    for(int i = 0; i < symbol_count; i++) {
        if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC) {
            //char *func_name = &strtab[symtab[i].st_name];
            char *func_name = strtab + symtab[i].st_name;
            uint32_t func_addr = symtab[i].st_value;
            uint32_t func_size = symtab[i].st_size;
            if (func_name == NULL || func_name[0] == '\0' || func_name[0] == '.') {
                printf("[ftrace]: skipping invalid function name '%s'\n", func_name);
            }
            if (func_num < 1024) {
                func_table[func_num++] = (Func_struct){
                    .name = strdup(func_name),
                    .start = func_addr,  
                    .size = func_size
                };
            } else {
                printf("[ftrace]: func_table overflow!\n");
            }
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


void call_ftrace(uint32_t pc, uint32_t target) {
    const char *call_func_name = find_func(target);
    printf("0x%08x:",pc);
    printf_space();
    printf("call [%s @0x%08x]\n", call_func_name, target);
    call_depth++;
}

void ret_ftrace(uint32_t pc) {
    if (call_depth > 0) {
        call_depth--;
        const char *ret_func_name = find_func(pc);
        if (ret_func_name == NULL) {
            ret_func_name = "Unknown";  
        }
        printf("0x%08x:",pc);
        printf_space();
        printf("ret  [%s]\n", ret_func_name);
    } else {
        printf("Error: call depth is already 0, cannot pop from call stack.\n");
    }
}
