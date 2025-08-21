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
  output reg I_jalr,
  output reg U_lui,
  output reg R_add,
  output reg l_lw,
  output reg l_lbu,
  output reg I_add,
  output reg S_sw,
  output reg S_sb,
  output reg I_ebreak,
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
    I_jalr = 0;
    U_lui = 0;
    R_add = 0;
    l_lw = 0;
    l_lbu = 0;
    I_add = 0;
    S_sw = 0;
    S_sb = 0;
    imm = 0;
    I_TYPE = 0;  
    U_TYPE = 0;

    r1 = inst[19:15];
    r2 = inst[24:20];
    rd = inst[11:7];
    $display("inst: %b", inst);
    $display("opcode: %b", opcode);
    case (opcode)
        //R_type指令 (add)
        7'b0110011:begin 
            R_TYPE = 1;
            if(funct3 == 3'b000 && funct7 == 7'b0000000) begin 
                R_add = 1;
            end 
        end
        // I-type算术指令 (addi)//&& funct7 == 7'b0000000
        7'b0010011:begin
            I_TYPE_ARITH = 1;
            if(funct3 == 3'b000) begin 
                I_add = 1;
            end
        end
        7'b0000011:begin
            L_TYPE_LOAD = 1;
            if(funct3 == 3'b010) begin
                l_lw = 1;//LW
            end else if(funct3 == 3'b100) begin 
                l_lbu =1;//LBU
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
        end
        7'b1100011:begin
            B_TYPE = 1;
        end 
        7'b1101111:begin
            J_TYPE = 1;
        end
        7'b1100111:begin
            I_jalr =1;//JALR
        end
        7'b0110111:begin
            U_lui = 1;//LUI
        end
        7'b1110011:begin
            if(inst[31:7] == 25'b0000000000010000000000000) begin
                I_ebreak = 1;
            end
        end
        default :begin
             $display("Unknown opcode: %d", opcode);
        end 
    endcase
    $display("addi_TYPE: %b", I_add);//调试
    I_TYPE = I_TYPE_ARITH | L_TYPE_LOAD | I_jalr;
    U_TYPE = U_lui;

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