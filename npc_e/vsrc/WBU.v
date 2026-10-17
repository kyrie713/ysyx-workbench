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
    input U_TYPE,
    input J_TYPE,
    input I_jalr,
    input l_lw,
    input l_lbu,
    input I_csrrw,
    input I_csrrs,
    input [31:0] csr_rdata,
    input [4:0] r1,
    input [4:0] r2,
    input [4:0] rd,
    output [31:0] R1_data,
    output [31:0] R2_data,
    output [31:0] a0,
    output reg [31:0] PC
);
    wire [31:0] PC_plus_4;
    reg [31:0] next_pc;
    reg [31:0] RegWriteData;
    reg Reg_WE;
    // initial begin
    //     PC = 32'h80000000;
    // end

    assign PC_plus_4 = PC + 32'd4;

    always @(*) begin
        Reg_WE = inst_valid &&
                 (R_TYPE | I_TYPE | U_TYPE | J_TYPE | I_csrrw | I_csrrs);

        RegWriteData = 32'b0;
        if (l_lw | l_lbu) begin
            RegWriteData = load_data;
        end else if (I_jalr | J_TYPE) begin
            RegWriteData = PC_plus_4;
        end else if (I_csrrw | I_csrrs) begin
            RegWriteData = csr_rdata;
        end else if (R_TYPE | I_TYPE_ARITH | U_TYPE) begin
            RegWriteData = ALU_OUT;
        end
    end

    always @(*) begin
        if (I_jalr) begin
            next_pc = {ALU_OUT[31:1], 1'b0};
        end else if (J_TYPE) begin
            next_pc = ALU_OUT;
        end else begin
            next_pc = PC_plus_4;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            PC <= RESET_PC;
        end else if (inst_valid) begin
            PC <= next_pc;
        end
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
