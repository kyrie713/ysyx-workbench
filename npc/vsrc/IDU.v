// RV32E instruction decoder. Register fields stay five bits wide; the register
// file treats x16-x31 encodings as zero/ignored because no exception unit exists.
module ysyx_25080202_IDU(
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
  output reg I_slti,
  output reg I_sltiu,
  output reg I_srai,
  output reg I_xori,
  output reg I_ori,
  output reg I_andi,
  output reg I_srli,
  output reg I_slli,
  output reg I_csrrs,
  output reg I_csrrw,
  output reg I_csrrc,
  output reg I_csrrsi,
  output reg I_csrrwi,
  output reg I_csrrci,
  output reg S_sh,
  output reg S_sw,
  output reg S_sb,
  output reg I_ebreak,
  output reg [11:0] csr_addr,
  output reg [4:0] shamt,
  output reg [4:0] csr_zimm,
  output reg [31:0] imm,
  output reg [4:0] r1,
  output reg [4:0] r2,
  output reg [4:0] rd
);
  wire [6:0] opcode = inst[6:0];
  wire [2:0] funct3 = inst[14:12];
  wire [6:0] funct7 = inst[31:25];

  wire [31:0] immI = {{20{inst[31]}}, inst[31:20]};
  wire [31:0] immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
  wire [31:0] immB = {{19{inst[31]}}, inst[31], inst[7],
                       inst[30:25], inst[11:8], 1'b0};
  wire [31:0] immU = {inst[31:12], 12'b0};
  wire [31:0] immJ = {{11{inst[31]}}, inst[31], inst[19:12],
                       inst[20], inst[30:21], 1'b0};

  always @(*) begin
    R_TYPE = 1'b0;
    I_TYPE_ARITH = 1'b0;
    L_TYPE_LOAD = 1'b0;
    S_TYPE = 1'b0;
    U_TYPE = 1'b0;
    I_TYPE = 1'b0;
    MemWEn = 1'b0;
    B_TYPE = 1'b0;
    J_TYPE = 1'b0;
    B_bne = 1'b0;
    B_bge = 1'b0;
    B_beq = 1'b0;
    B_bgeu = 1'b0;
    B_bltu = 1'b0;
    B_blt = 1'b0;
    I_jalr = 1'b0;
    U_lui = 1'b0;
    U_auipc = 1'b0;
    J_jal = 1'b0;
    R_add = 1'b0;
    R_sub = 1'b0;
    R_sltu = 1'b0;
    R_sll = 1'b0;
    R_and = 1'b0;
    R_or = 1'b0;
    R_xor = 1'b0;
    R_slt = 1'b0;
    R_sra = 1'b0;
    R_srl = 1'b0;
    l_lw = 1'b0;
    l_lbu = 1'b0;
    l_lb = 1'b0;
    l_lh = 1'b0;
    l_lhu = 1'b0;
    I_addi = 1'b0;
    I_slti = 1'b0;
    I_sltiu = 1'b0;
    I_srai = 1'b0;
    I_xori = 1'b0;
    I_ori = 1'b0;
    I_andi = 1'b0;
    I_srli = 1'b0;
    I_slli = 1'b0;
    I_csrrs = 1'b0;
    I_csrrw = 1'b0;
    I_csrrc = 1'b0;
    I_csrrsi = 1'b0;
    I_csrrwi = 1'b0;
    I_csrrci = 1'b0;
    S_sh = 1'b0;
    S_sw = 1'b0;
    S_sb = 1'b0;
    I_ebreak = 1'b0;
    imm = 32'b0;

    csr_addr = inst[31:20];
    r1 = inst[19:15];
    r2 = inst[24:20];
    rd = inst[11:7];
    shamt = inst[24:20];
    csr_zimm = inst[19:15];

    case (opcode)
      7'b0110011: begin
        R_TYPE = 1'b1;
        case ({funct7, funct3})
          10'b0000000_000: R_add = 1'b1;
          10'b0100000_000: R_sub = 1'b1;
          10'b0000000_011: R_sltu = 1'b1;
          10'b0000000_001: R_sll = 1'b1;
          10'b0000000_111: R_and = 1'b1;
          10'b0000000_110: R_or = 1'b1;
          10'b0000000_100: R_xor = 1'b1;
          10'b0000000_010: R_slt = 1'b1;
          10'b0100000_101: R_sra = 1'b1;
          10'b0000000_101: R_srl = 1'b1;
          default: R_TYPE = 1'b0;
        endcase
      end
      7'b0010011: begin
        case (funct3)
          3'b000: begin I_TYPE_ARITH = 1'b1; I_addi = 1'b1; end
          3'b010: begin I_TYPE_ARITH = 1'b1; I_slti = 1'b1; end
          3'b011: begin I_TYPE_ARITH = 1'b1; I_sltiu = 1'b1; end
          3'b100: begin I_TYPE_ARITH = 1'b1; I_xori = 1'b1; end
          3'b110: begin I_TYPE_ARITH = 1'b1; I_ori = 1'b1; end
          3'b111: begin I_TYPE_ARITH = 1'b1; I_andi = 1'b1; end
          3'b001: begin
            if (funct7 == 7'b0000000) begin I_TYPE_ARITH = 1'b1; I_slli = 1'b1; end
          end
          3'b101: begin
            if (funct7 == 7'b0000000) begin I_TYPE_ARITH = 1'b1; I_srli = 1'b1; end
            else if (funct7 == 7'b0100000) begin I_TYPE_ARITH = 1'b1; I_srai = 1'b1; end
          end
          default: begin end
        endcase
      end
      7'b0000011: begin
        case (funct3)
          3'b000: begin L_TYPE_LOAD = 1'b1; l_lb = 1'b1; end
          3'b001: begin L_TYPE_LOAD = 1'b1; l_lh = 1'b1; end
          3'b010: begin L_TYPE_LOAD = 1'b1; l_lw = 1'b1; end
          3'b100: begin L_TYPE_LOAD = 1'b1; l_lbu = 1'b1; end
          3'b101: begin L_TYPE_LOAD = 1'b1; l_lhu = 1'b1; end
          default: begin end
        endcase
      end
      7'b0100011: begin
        case (funct3)
          3'b000: begin S_TYPE = 1'b1; MemWEn = 1'b1; S_sb = 1'b1; end
          3'b001: begin S_TYPE = 1'b1; MemWEn = 1'b1; S_sh = 1'b1; end
          3'b010: begin S_TYPE = 1'b1; MemWEn = 1'b1; S_sw = 1'b1; end
          default: begin end
        endcase
      end
      7'b1100011: begin
        case (funct3)
          3'b000: begin B_TYPE = 1'b1; B_beq = 1'b1; end
          3'b001: begin B_TYPE = 1'b1; B_bne = 1'b1; end
          3'b100: begin B_TYPE = 1'b1; B_blt = 1'b1; end
          3'b101: begin B_TYPE = 1'b1; B_bge = 1'b1; end
          3'b110: begin B_TYPE = 1'b1; B_bltu = 1'b1; end
          3'b111: begin B_TYPE = 1'b1; B_bgeu = 1'b1; end
          default: begin end
        endcase
      end
      7'b1101111: begin J_TYPE = 1'b1; J_jal = 1'b1; end
      7'b1100111: begin
        if (funct3 == 3'b000) I_jalr = 1'b1;
      end
      7'b0110111: begin U_TYPE = 1'b1; U_lui = 1'b1; end
      7'b0010111: begin U_TYPE = 1'b1; U_auipc = 1'b1; end
      7'b1110011: begin
        case (funct3)
          3'b001: I_csrrw = 1'b1;
          3'b010: I_csrrs = 1'b1;
          3'b011: I_csrrc = 1'b1;
          3'b101: I_csrrwi = 1'b1;
          3'b110: I_csrrsi = 1'b1;
          3'b111: I_csrrci = 1'b1;
          default: begin
            if (inst == 32'h00100073) I_ebreak = 1'b1;
          end
        endcase
      end
      default: begin end
    endcase

    I_TYPE = I_TYPE_ARITH | L_TYPE_LOAD | I_jalr;
    case (1'b1)
      I_TYPE: imm = immI;
      S_TYPE: imm = immS;
      B_TYPE: imm = immB;
      U_TYPE: imm = immU;
      J_TYPE: imm = immJ;
      default: imm = 32'b0;
    endcase
  end
endmodule
