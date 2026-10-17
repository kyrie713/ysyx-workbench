// Minimal machine-mode CSR bank required by the RV32E AbstractMachine port.
module ysyx_25080202_CSR(
    input         clk,
    input         rst,
    input         csr_valid,
    input         I_csrrs,
    input         I_csrrw,
    input         I_csrrc,
    input         I_csrrsi,
    input         I_csrrwi,
    input         I_csrrci,
    input  [11:0] csr_addr,
    input  [4:0]  csr_rs1,
    input  [4:0]  csr_zimm,
    input  [31:0] csr_wdata,
    output reg [31:0] csr_rdata
);
    localparam [11:0] CSR_MCYCLE    = 12'hB00;
    localparam [11:0] CSR_MCYCLEH   = 12'hB80;
    localparam [11:0] CSR_MVENDORID = 12'hF11;
    localparam [11:0] CSR_MARCHID   = 12'hF12;

    localparam [31:0] MVENDORID = 32'h79737978;
    localparam [31:0] MARCHID   = 32'h017EB18A;

    reg [63:0] mcycle;
    always @(*) begin
        csr_rdata = 32'b0;
        if (I_csrrs || I_csrrw || I_csrrc || I_csrrsi || I_csrrwi || I_csrrci) begin
            case (csr_addr)
                CSR_MCYCLE:    csr_rdata = mcycle[31:0];
                CSR_MCYCLEH:   csr_rdata = mcycle[63:32];
                CSR_MVENDORID: csr_rdata = MVENDORID;
                CSR_MARCHID:   csr_rdata = MARCHID;
                default:       csr_rdata = 32'b0;
            endcase
        end
    end

    // CSR writes and the cycle counter are deliberately in one clocked block;
    // a write overrides the normal counter increment for the selected half.
    always @(posedge clk) begin
        if (rst) begin
            mcycle <= 64'b0;
        end else begin
            mcycle <= mcycle + 64'd1;
            if (csr_valid && (I_csrrw || I_csrrs || I_csrrc ||
                              I_csrrwi || I_csrrsi || I_csrrci)) begin
                case (csr_addr)
                    CSR_MCYCLE: begin
                        if (I_csrrw || I_csrrwi)
                            mcycle[31:0] <= (I_csrrwi ? {27'b0, csr_zimm} : csr_wdata);
                        else if ((I_csrrs || I_csrrsi) && (I_csrrsi ? (csr_zimm != 0) : (csr_rs1 != 0)))
                            mcycle[31:0] <= mcycle[31:0] | (I_csrrsi ? {27'b0, csr_zimm} : csr_wdata);
                        else if (I_csrrc || I_csrrci) begin
                            if (I_csrrci ? (csr_zimm != 0) : (csr_rs1 != 0))
                                mcycle[31:0] <= mcycle[31:0] & ~(I_csrrci ? {27'b0, csr_zimm} : csr_wdata);
                        end
                    end
                    CSR_MCYCLEH: begin
                        if (I_csrrw || I_csrrwi)
                            mcycle[63:32] <= (I_csrrwi ? {27'b0, csr_zimm} : csr_wdata);
                        else if ((I_csrrs || I_csrrsi) && (I_csrrsi ? (csr_zimm != 0) : (csr_rs1 != 0)))
                            mcycle[63:32] <= mcycle[63:32] | (I_csrrsi ? {27'b0, csr_zimm} : csr_wdata);
                        else if (I_csrrc || I_csrrci) begin
                            if (I_csrrci ? (csr_zimm != 0) : (csr_rs1 != 0))
                                mcycle[63:32] <= mcycle[63:32] & ~(I_csrrci ? {27'b0, csr_zimm} : csr_wdata);
                        end
                    end
                    default: begin end // read-only or unsupported CSR
                endcase
            end
        end
    end
endmodule
