module LSU(
    input         clk,
    input         rst,
    input         inst_valid,
    input  [31:0] R2_data,
    input  [31:0] ALU_OUT,
    input         l_lw,
    input         l_lbu,
    input         S_sb,
    input         S_sw,
    input  [31:0] lsu_rdata,
    output [31:0] lsu_addr,
    output        lsu_req,
    output        lsu_wen,
    output reg [31:0] lsu_wdata,
    output reg [3:0]  lsu_wmask,
    output reg [31:0] load_data,
    output        lsu_done
);
    localparam IDLE = 1'b0;
    localparam WAIT = 1'b1;

    reg state;
    wire is_load = l_lw | l_lbu;
    wire is_store = S_sb | S_sw;

    assign lsu_addr = ALU_OUT;
    assign lsu_req = inst_valid && (is_load ? (state == IDLE) : is_store);
    assign lsu_wen = inst_valid && is_store && (state == IDLE);
    assign lsu_done = inst_valid && is_load && (state == WAIT);

    always @(*) begin
        lsu_wdata = 32'b0;
        lsu_wmask = 4'b0000;

        if (S_sb) begin
            case (ALU_OUT[1:0])
                2'b00: lsu_wdata = {24'b0, R2_data[7:0]};
                2'b01: lsu_wdata = {16'b0, R2_data[7:0], 8'b0};
                2'b10: lsu_wdata = {8'b0, R2_data[7:0], 16'b0};
                2'b11: lsu_wdata = {R2_data[7:0], 24'b0};
            endcase
            lsu_wmask = 4'b0001 << ALU_OUT[1:0];
        end else if (S_sw) begin
            lsu_wdata = R2_data;
            lsu_wmask = 4'b1111;
        end
    end

    always @(*) begin
        load_data = 32'b0;
        if (lsu_done) begin
            if (l_lw) begin
                load_data = lsu_rdata;
            end else if (l_lbu) begin
                case (ALU_OUT[1:0])
                    2'b00: load_data = {24'b0, lsu_rdata[7:0]};
                    2'b01: load_data = {24'b0, lsu_rdata[15:8]};
                    2'b10: load_data = {24'b0, lsu_rdata[23:16]};
                    2'b11: load_data = {24'b0, lsu_rdata[31:24]};
                endcase
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    if (inst_valid && is_load) begin
                        state <= WAIT;
                    end
                end
                WAIT: begin
                    state <= IDLE;
                end
            endcase
        end
    end
endmodule
