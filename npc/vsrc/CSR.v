module CSR(
    input         clk,
    input         rst,
    input         csr_valid,
    input         I_csrrs,
    input         I_csrrw,
    input  [11:0] csr_addr,
    input  [4:0]  csr_rs1,
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
        if (I_csrrs || I_csrrw) begin
            case (csr_addr)
                CSR_MCYCLE:    csr_rdata = mcycle[31:0];
                CSR_MCYCLEH:   csr_rdata = mcycle[63:32];
                CSR_MVENDORID: csr_rdata = MVENDORID;
                CSR_MARCHID:   csr_rdata = MARCHID;
                default:       csr_rdata = 32'b0;
            endcase
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            mcycle <= 64'b0;
        end else if (csr_valid && I_csrrw && csr_addr == CSR_MCYCLE) begin
            mcycle <= {mcycle[63:32], csr_wdata};
        end else if (csr_valid && I_csrrw && csr_addr == CSR_MCYCLEH) begin
            mcycle <= {csr_wdata, mcycle[31:0]};
        end else if (csr_valid && I_csrrs && csr_rs1 != 5'b0 &&
                     csr_addr == CSR_MCYCLE) begin
            mcycle <= {mcycle[63:32], mcycle[31:0] | csr_wdata};
        end else if (csr_valid && I_csrrs && csr_rs1 != 5'b0 &&
                     csr_addr == CSR_MCYCLEH) begin
            mcycle <= {mcycle[63:32] | csr_wdata, mcycle[31:0]};
        end else begin
            mcycle <= mcycle + 64'd1;
        end
    end
endmodule
