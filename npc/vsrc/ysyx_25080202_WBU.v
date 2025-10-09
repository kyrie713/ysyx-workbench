module ysyx_25080202_WBU(
    input clk,
    input rst,
    input [31:0] ALU_OUT,
    input [31:0] CSR_RDATA,
    input [31:0] i_csr_wdata,
    input l_lw,
    input l_lbu,
    input I_jalr,
    input S_sb,
    input S_sw,
    input I_add,
    input R_add,
    input U_lui,
    input I_csrrw,
    input I_csrrs,
    input [31:0] load_wdata,
    input lsu_busy,
    input lsu_valid,
    input ifu_valid,
    input [31:0] PC,
    output reg wbu_ready,
    output reg wbu_valid,
    output [31:0] next_pc,
    output [31:0] reg_wdata,
    output [31:0] csr_wdata
);

    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;
    localparam LSUWAIT = 2'b10; 
    reg [1:0] state;
    assign next_pc = (I_jalr) ? {ALU_OUT[31:1],1'b0} : PC+4; 
    assign reg_wdata = (I_jalr) ? PC + 4 : 
                        (I_csrrw | I_csrrs) ? CSR_RDATA:
                        (lsu_valid) ? load_wdata : ALU_OUT;
    assign csr_wdata = i_csr_wdata;          

    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            //next_pc <= 32'h30000004;            
            wbu_ready <= 1'b0;
            wbu_valid <= 1'b0;
            //reg_wdata <= 32'b0;
            //csr_wdata <= 32'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (ifu_valid) begin
                        if (lsu_busy) begin
                            state <= LSUWAIT;
                            wbu_valid <= 1'b0;
                        end
                        else begin
                            state <= WAIT;
                            wbu_ready <= 1'b1;
                            
                                wbu_valid <=1'b1;
                            
                        end
                    end
                    else begin
                        state <= IDLE;
                        if (wbu_ready) begin
                            wbu_ready <= 1'b0;
                        end
                        if (wbu_valid) begin
                            wbu_valid <= 1'b0;
                        end
                    end
                end                           
                WAIT: begin
                    if (wbu_ready) begin
                        wbu_ready <= 1'b0;
                    end
                    if(I_jalr) begin
                        //next_pc <= {ALU_OUT[31:1],1'b0};
                        //reg_wdata <= PC + 4;
                    end else if(I_csrrw) begin
                        //csr_wdata <= ALU_OUT;
                        //reg_wdata <=CSR_RDATA;
                        //next_pc <=PC + 4;
                    end
                    else begin
                        //next_pc <=PC + 4;
                        //reg_wdata <= ALU_OUT;
                    end
                    state <= IDLE;
                    wbu_valid <= 1'b0;

                end
                LSUWAIT: begin
                    if (lsu_valid) begin
                        wbu_ready <= 1'b1;
                        //reg_wdata <= load_wdata;
                        state <= IDLE;
                        //next_pc <= PC + 4;  
                              
                        wbu_valid <= 1'b1;                
                    end
                end
                default:begin
                    state<=IDLE;
                    end
            endcase
        end
    end

endmodule