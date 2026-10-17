module ysyx_25080202_LSU(
    input         clk,
    input         rst,
    input         inst_valid,
    input  [31:0] R2_data,
    input  [31:0] ALU_OUT,
    input         l_lw,
    input         l_lbu,
    input         l_lb,
    input         l_lh,
    input         l_lhu,
    input         S_sb,
    input         S_sh,
    input         S_sw,
    output        lsu_reqValid,
    output [31:0] lsu_addr,
    output [1:0]  lsu_size,
    output        lsu_wen,
    output reg [31:0] lsu_wdata,
    output reg [3:0]  lsu_wmask,
    input         lsu_respValid,
    input  [31:0] lsu_rdata,
    output reg [31:0] load_data,
    output        lsu_done
);
    localparam IDLE = 1'b0;
    localparam WAIT = 1'b1;

    reg state;
    wire is_load = l_lw | l_lbu | l_lb | l_lh | l_lhu;
    wire is_store = S_sb | S_sh | S_sw;
    wire is_mem = is_load | is_store;

    assign lsu_addr = ALU_OUT;
    assign lsu_size = (l_lbu || l_lb || S_sb) ? 2'b00 :
                      (l_lh || l_lhu || S_sh) ? 2'b01 : 2'b10;
    assign lsu_reqValid = inst_valid && is_mem && (state == IDLE);
    assign lsu_wen = lsu_reqValid && is_store;
    assign lsu_done = inst_valid && is_mem && (state == WAIT) && lsu_respValid;

    always @(*) begin
        lsu_wdata = 32'b0;
        lsu_wmask = 4'b0000;
        if (S_sb) begin
            case (ALU_OUT[1:0])
                2'b00: begin lsu_wdata = {24'b0, R2_data[7:0]}; lsu_wmask = 4'b0001; end
                2'b01: begin lsu_wdata = {16'b0, R2_data[7:0], 8'b0}; lsu_wmask = 4'b0010; end
                2'b10: begin lsu_wdata = {8'b0, R2_data[7:0], 16'b0}; lsu_wmask = 4'b0100; end
                2'b11: begin lsu_wdata = {R2_data[7:0], 24'b0}; lsu_wmask = 4'b1000; end
            endcase
        end else if (S_sh) begin
            case (ALU_OUT[1:0])
                2'b00: begin lsu_wdata = {16'b0, R2_data[15:0]}; lsu_wmask = 4'b0011; end
                2'b10: begin lsu_wdata = {R2_data[15:0], 16'b0}; lsu_wmask = 4'b1100; end
                default: begin end
            endcase
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
            end else if (l_lbu || l_lb) begin
                case (ALU_OUT[1:0])
                    2'b00: load_data = l_lbu ? {24'b0, lsu_rdata[7:0]} : {{24{lsu_rdata[7]}}, lsu_rdata[7:0]};
                    2'b01: load_data = l_lbu ? {24'b0, lsu_rdata[15:8]} : {{24{lsu_rdata[15]}}, lsu_rdata[15:8]};
                    2'b10: load_data = l_lbu ? {24'b0, lsu_rdata[23:16]} : {{24{lsu_rdata[23]}}, lsu_rdata[23:16]};
                    2'b11: load_data = l_lbu ? {24'b0, lsu_rdata[31:24]} : {{24{lsu_rdata[31]}}, lsu_rdata[31:24]};
                endcase
            end else if (l_lhu || l_lh) begin
                case (ALU_OUT[1:0])
                    2'b00: load_data = l_lhu ? {16'b0, lsu_rdata[15:0]} : {{16{lsu_rdata[15]}}, lsu_rdata[15:0]};
                    2'b10: load_data = l_lhu ? {16'b0, lsu_rdata[31:16]} : {{16{lsu_rdata[31]}}, lsu_rdata[31:16]};
                    default: load_data = 32'b0;
                endcase
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: if (lsu_reqValid) state <= WAIT;
                WAIT: if (lsu_respValid) state <= IDLE;
                default: state <= IDLE;
            endcase
        end
    end
endmodule
