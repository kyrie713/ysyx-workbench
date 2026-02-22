module IDU(
  input [31:0] inst,
  output reg R_TYPE,
  output reg I_TYPE_ARITH,
  output reg L_TYPE_LOAD,
  output reg S_TYPE,
  output reg U_TYPE,
  output reg I_TYPE,
  output reg MemWEn,
  output reg B_TYPE,
  output reg J_TYPE,
  output reg B_bne,
  output reg B_bge,
  output reg B_beq,
  output reg B_bgeu,
  output reg B_bltu,
  output reg B_blt,
  output reg I_jalr,
  output reg U_lui,
  output reg U_auipc,
  output reg J_jal,
  output reg R_add,
  output reg R_sub,
  output reg R_sltu,
  output reg R_sll,
  output reg R_and,
  output reg R_or,
  output reg R_xor,
  output reg R_slt,
  output reg R_sra,
  output reg R_srl,
  output reg l_lw,
  output reg l_lbu,
  output reg l_lb,
  output reg l_lh,
  output reg l_lhu,
  output reg I_addi,
  output reg I_sltiu,
  output reg I_srai,
  output reg I_xori,
  output reg I_ori,
  output reg I_andi,
  output reg I_srli,
  output reg I_slli,
  output reg I_csrrs,
  output reg I_csrrw,
  output reg I_mret,
  output reg S_sh,
  output reg S_sw,
  output reg S_sb,
  output reg I_ebreak,
  output reg I_ecall,
  output reg [11:0]csr_addr,
  output reg [4:0] shamt, 
  output reg [31:0] imm,
  output reg [4:0]r1,
  output reg [4:0]r2,
  output reg [4:0]rd
); 
  wire [6:0] opcode = inst[6:0];
  wire [2:0] funct3 = inst[14:12];
  wire [6:0] funct7 = inst[31:25];

  wire [31:0] immI = {{20{inst[31]}},inst[31:20]};
  wire [31:0] immS = {{20{inst[31]}},inst[31:25],inst[11:7]};
  wire [31:0] immB = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
  wire [31:0] immU = {inst[31:12],12'b000000000000};
  wire [31:0] immJ = {{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};

  always @(*) begin
    R_TYPE = 0;
    I_TYPE_ARITH = 0;
    L_TYPE_LOAD = 0;
    S_TYPE = 0;
    MemWEn = 0;
    B_TYPE = 0;
    J_TYPE = 0;
    B_bne = 0;
    B_bge = 0;
    B_beq = 0;
    B_bgeu = 0;
    B_bltu = 0;
    B_blt  = 0;
    I_jalr = 0;
    U_lui = 0;
    U_auipc = 0;
    J_jal = 0;
    I_ecall = 0;
    R_add = 0;
    R_sub = 0;
    R_sltu = 0;
    R_sll = 0;
    R_and = 0;
    R_or = 0;
    R_xor = 0;
    R_slt = 0;
    R_sra = 0;
    R_srl = 0;
    l_lw = 0;
    l_lbu = 0;
    l_lh = 0;
    l_lhu = 0;
    l_lb = 0;
    I_addi = 0;
    I_sltiu = 0;
    I_srai = 0;
    I_andi = 0;
    I_xori = 0;
    I_ori = 0;
    I_srli = 0;
    I_slli = 0;
    I_csrrs = 0;
    I_csrrw = 0;
    I_mret = 0;
    I_ecall = 0;
    S_sh = 0;
    S_sw = 0;
    S_sb = 0;
    imm = 0;
    I_TYPE = 0;  
    U_TYPE = 0;
    csr_addr = inst[31:20];
    r1 = inst[19:15];
    r2 = inst[24:20];
    rd = inst[11:7];
    shamt = r2;
    // $display("inst: %b", inst);
    // $display("opcode: %b", opcode);
    case (opcode)
        //R_type指令 (add)
        7'b0110011:begin 
            R_TYPE = 1;
            if(funct3 == 3'b000 && funct7 == 7'b0000000) begin 
                R_add = 1;
            end 
            if(funct3 == 3'b000 && funct7 == 7'b0100000) begin
                R_sub = 1;
            end
            if(funct3 == 3'b011 && funct7 == 7'b0000000) begin
                R_sltu = 1;
            end
            if(funct3 == 3'b001 && funct7 == 7'b0000000) begin
                R_sll = 1;
            end
            if(funct3 == 3'b111 && funct7 == 7'b0000000) begin
                R_and = 1;
            end
            if(funct3 == 3'b110 && funct7 == 7'b0000000) begin
                R_or = 1;
            end
            if(funct3 == 3'b100 && funct7 == 7'b0000000) begin
                R_xor = 1;
            end
            if(funct3 == 3'b010 && funct7 == 7'b0000000) begin
                R_slt = 1;
            end 
            if(funct3 == 3'b101 && funct7 == 7'b0100000) begin
                R_sra = 1;
            end
            if(funct3 == 3'b101 && funct7 == 7'b0000000) begin
                R_srl = 1;
            end
        end
        // I-type算术指令 (addi)//&& funct7 == 7'b0000000
        7'b0010011:begin
            if(funct3 == 3'b000) begin 
                I_TYPE_ARITH = 1;
                I_addi = 1;
            end
            if(funct3 == 3'b011) begin
                I_sltiu = 1;
            end
            if(funct3 == 3'b101 && funct7 == 7'b0100000) begin
                I_srai = 1;
            end
            if(funct3 == 3'b100) begin
                I_xori = 1;
            end
            if(funct3 == 3'b111) begin
                I_andi = 1;
            end 
            if(funct3 == 3'b101 && funct7 == 7'b0000000) begin
                I_srli = 1;
            end
            if(funct3 == 3'b001 && funct7 == 7'b0000000) begin
                I_slli = 1;
            end
            if(funct3 == 3'b110) begin
                I_ori = 1;
            end
        end

        7'b0000011:begin
            L_TYPE_LOAD = 1;
            if(funct3 == 3'b010) begin
                l_lw = 1;//LW
            end else if(funct3 == 3'b100) begin 
                l_lbu = 1;//LBU
            end else if(funct3 == 3'b001) begin
                l_lh = 1;
            end else if(funct3 == 3'b101) begin
                l_lhu = 1;
            end else if(funct3 == 3'b000) begin
                l_lb = 1;
            end
        end 
        7'b0100011:begin
            S_TYPE = 1;
            MemWEn = 1;
            if(funct3 == 3'b010) begin
                S_sw = 1;//SW
            end
            if(funct3 == 3'b000) begin 
                S_sb = 1;//SB
            end
            if(funct3 == 3'b001) begin
                S_sh = 1;
            end
        end
        7'b1100011:begin
            B_TYPE = 1;
            if(funct3 == 3'b001) begin
                B_bne = 1;
            end
            if(funct3 == 3'b101) begin
                B_bge = 1;
            end
            if(funct3 == 3'b000) begin
                B_beq = 1;
            end
            if(funct3 == 3'b111) begin
                B_bgeu = 1;
            end
            if(funct3 == 3'b110) begin
                B_bltu = 1;
            end
            if(funct3 == 3'b100) begin
                B_blt = 1;
            end
        end 
        7'b1101111:begin
            J_TYPE = 1;
            J_jal = 1;
        end
        7'b1100111:begin
            I_jalr =1;//JALR
        end
        7'b0110111:begin
            U_lui = 1;//LUI
        end
        7'b0010111:begin
            U_auipc = 1;
        end
        7'b1110011:begin
            if(funct3 == 3'b001) begin 
                I_csrrw = 1;
            end else if(funct3 == 3'b010) begin
                I_csrrs = 1;
            end else if(inst[31:7] == 25'b0000000000010000000000000) begin
                I_ebreak = 1;
            end else if(inst == 32'b00000000000000000000000001110011) begin
                I_ecall = 1;
            end else if(inst == 32'b00110000001000000000000001110011) begin
                I_mret = 1;
            end
        end
        default :begin
             //I_ebreak = 1;//$display("Unknown opcode: %d", opcode);
        end 
    endcase
    //$display("addi_TYPE: %b", I_add);//调试
    I_TYPE = I_addi | L_TYPE_LOAD | I_jalr|I_sltiu|I_srai|I_xori|I_andi|I_srli|I_slli|I_ori;
    U_TYPE = U_lui | U_auipc;

    case(1'b1)
      I_TYPE: imm = immI;
      S_TYPE: imm = immS;
      B_TYPE: imm = immB;
      U_TYPE: imm = immU;
      J_TYPE: imm = immJ;
      default: imm = 0;
    endcase

  end

endmodule