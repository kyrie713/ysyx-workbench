module WBU(
    input [31:0] MemReadData,
    //input [31:0] R2_data,
    input [31:0] ALU_OUT,
    input [31:0] PC_plus_4,
    input [31:0] csr_rdata,
    input l_lbu,
    input l_lw,
    input l_lh,
    input l_lhu,
    input l_lb,
    input I_jalr,
    input I_sltiu,
    input I_srai,
    input I_xori,
    input I_ori,
    input I_andi,
    input I_srli,
    input I_slli,
    input I_csrrs,
    input I_csrrw,
    input U_auipc,
    input U_lui,
    input J_jal,
    input R_TYPE,
    input I_TYPE_ARITH,
    input I_TYPE,
    input U_TYPE,
    input J_TYPE,
    input [31:0] load_result,
    output  reg [31:0] RegWriteData,
    //output  reg [31:0] MemWriteData,
    //output  reg [31:0] MemReadDataoneword,
    output  reg Reg_WE
    //output  reg [3:0] wmask
);
  always @(*) begin
    Reg_WE = R_TYPE | I_TYPE | U_TYPE | J_TYPE | I_csrrs | I_csrrw;
    
    RegWriteData = 32'b0;
    case (1'b1)
        l_lw,l_lbu,l_lb,l_lh,l_lhu:
            RegWriteData = load_result;

        I_jalr, J_jal: 
            RegWriteData = PC_plus_4;
        
        R_TYPE, I_TYPE_ARITH, U_TYPE, I_sltiu, I_srai, I_xori, I_andi,I_srli,I_slli,I_ori: 
            RegWriteData = ALU_OUT;
        
        I_csrrs,I_csrrw:
            RegWriteData = csr_rdata;
        
        default: RegWriteData = 32'b0;
    endcase
  end
  
endmodule