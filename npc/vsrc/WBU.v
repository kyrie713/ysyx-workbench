module WBU(
    input [31:0] MemReadData,
    input ifu_done,
    //input [31:0] R2_data,
    input [31:0] ALU_OUT,
    input [31:0] PC,
    input [31:0] csr_rdata,
    input [31:0] mtvec,
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
    input B_bne,
    input B_bge,
    input B_beq,
    input B_bgeu,
    input B_blt,
    input B_bltu,
    input I_ecall,
    input I_mret,
    input R_TYPE,
    input I_TYPE_ARITH,
    input I_TYPE,
    input U_TYPE,
    input J_TYPE,
    input [31:0] load_result,
    output  reg [31:0] next_pc,
    output  reg [31:0] RegWriteData,
    //output  reg [31:0] MemWriteData,
    //output  reg [31:0] MemReadDataoneword,
    output  reg Reg_WE
    //output  reg [3:0] wmask
);
    // reg [1:0]  wbu_state;
    // localparam IDLE        = 2'b00;
    // localparam lsu_wait    = 2'b01;
    // localparam commom_wait = 2'b10;
    // always @(posedge clk) begin
    //     if(rst) begin
    //         wbu_state <= IDLE;
    //     end
    //     else begin
    //         case (wbu_state)
    //             IDLE:begin
    //                 if(inst_valid) begin
    //                     if(lsu_busy) begin
    //                         wbu_state <= lsu_wait;
    //                     end
    //                     else begin 
    //                         wbu_state <= commom_wait;
    //                         wbu_ready <= 1'b1;
    //                         wbu_valid <= 1'b1;
    //                 end
    //             end
    //             lsu_wait:begin
    //                 wbu_state <= IDLE;
    //                 if(wbu_ready == 1'b1) begin
    //                     wbu_ready <= 1'b0;
    //                 end
    //                 if(wbu_valid == 1'b1) begin
    //                     wbu_valid <= 1'b0;
    //                 end
    //             end
    //             commom_wait:begin
    //                 wbu_state <= IDLE;
    //                 wbu_valid <= 1'b0;
    //                 if(wbu_ready)begin
    //                     wbu_ready <= 1'b0;
    //                 end
    //             end
    //             end
    //         endcase
    //     end
    // end
  always @(*) begin
    Reg_WE = (R_TYPE | I_TYPE | U_TYPE | J_TYPE | I_csrrs | I_csrrw)&&ifu_done;
    
    RegWriteData = 32'b0;
    case (1'b1)
        l_lw,l_lbu,l_lb,l_lh,l_lhu:
            RegWriteData = load_result;

        I_jalr, J_jal: 
            RegWriteData = PC + 4;
        
        R_TYPE, I_TYPE_ARITH, U_TYPE, I_sltiu, I_srai, I_xori, I_andi,I_srli,I_slli,I_ori: 
            RegWriteData = ALU_OUT;

        I_csrrs,I_csrrw:
            RegWriteData = csr_rdata;
        
        default: RegWriteData = 32'b0;
    endcase

    if(I_jalr) begin
        next_pc = {ALU_OUT[31:1],1'b0};
    end else if(J_jal) begin
        next_pc = ALU_OUT;
    end else if(B_bne) begin
        next_pc = ALU_OUT;
    end else if(B_bge) begin
        next_pc = ALU_OUT;
    end else if(B_beq) begin
        next_pc = ALU_OUT;
    end else if(B_bgeu) begin
        next_pc = ALU_OUT;
    end else if(B_bltu) begin
        next_pc = ALU_OUT;
    end else if(B_blt) begin
        next_pc = ALU_OUT;
    end else if(I_ecall) begin
        next_pc = mtvec;
    end else if(I_mret) begin
        next_pc = csr_rdata;
       // $display("I_mret_csr_rdata = 0x%08x\n",csr_rdata);
    end else 
        next_pc = PC + 4;
  end
  
endmodule