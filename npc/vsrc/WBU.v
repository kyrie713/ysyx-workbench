module ysyx_25080202_WBU #(
    parameter [31:0] RESET_PC = 32'h80000000
)(
    input clk,
    input rst,
    input inst_valid,
    input [31:0] ALU_OUT,
    input [31:0] load_data,
    input R_TYPE,
    input I_TYPE_ARITH,
    input I_TYPE,
    input L_TYPE_LOAD,
    input U_TYPE,
    input J_TYPE,
    input B_TYPE,
    input branch_taken,
    input I_jalr,
    input l_lw,
    input l_lbu,
    input l_lb,
    input l_lh,
    input l_lhu,
    input I_csrrw,
    input I_csrrs,
    input I_csrrc,
    input I_csrrsi,
    input I_csrrwi,
    input I_csrrci,
    input [31:0] csr_rdata,
    input [4:0] r1,
    input [4:0] r2,
    input [4:0] rd,
    output [31:0] R1_data,
    output [31:0] R2_data,
    output [31:0] a0,
    output reg [31:0] PC
);
    wire [31:0] PC_plus_4 = PC + 32'd4;
    reg [31:0] next_pc;
    reg [31:0] RegWriteData;
    reg Reg_WE;

    wire csr_inst = I_csrrw | I_csrrs | I_csrrc |
                    I_csrrsi | I_csrrwi | I_csrrci;

    always @(*) begin
        Reg_WE = inst_valid &&
                 (R_TYPE | I_TYPE | U_TYPE | J_TYPE | csr_inst);
        RegWriteData = 32'b0;
        if (L_TYPE_LOAD) begin
            RegWriteData = load_data;
        end else if (I_jalr | J_TYPE) begin
            RegWriteData = PC_plus_4;
        end else if (csr_inst) begin
            RegWriteData = csr_rdata;
        end else if (R_TYPE | I_TYPE_ARITH | U_TYPE) begin
            RegWriteData = ALU_OUT;
        end
    end

    always @(*) begin
        if (I_jalr)
            next_pc = {ALU_OUT[31:1], 1'b0};
        else if (J_TYPE || (B_TYPE && branch_taken))
            next_pc = ALU_OUT;
        else
            next_pc = PC_plus_4;
    end

    always @(posedge clk) begin
        if (rst)
            PC <= RESET_PC;
        else if (inst_valid)
            PC <= next_pc;
    end

    ysyx_25080202_RegisterFile regfile (
        .clk(clk),
        .rst(rst),
        .wdata(RegWriteData),
        .waddr(rd),
        .wen(Reg_WE),
        .raddr_1(r1),
        .raddr_2(r2),
        .rdata_1(R1_data),
        .rdata_2(R2_data),
        .debug_a0(a0)
    );
endmodule
