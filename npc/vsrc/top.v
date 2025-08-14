module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,
                    ready,nextdata_n,overflow);
    input clk,clrn,ps2_clk,ps2_data;
    input nextdata_n;
    output [7:0] data;
    output reg ready;
    output reg overflow;     // fifo overflow
    // internal signal, for test
    reg [9:0] buffer;        // ps2_data bits
    reg [7:0] fifo[7:0];     // data fifo
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clrn) begin // reset
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin // read to output next data
                if(nextdata_n == 1'b0) //read next data
                begin
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                end
            end
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    fifo[w_ptr] <= buffer[8:1];  // kbd scan code
                    w_ptr <= w_ptr+3'b1;
                    ready <= 1'b1;
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end
    assign data = fifo[r_ptr]; //always set output data


endmodule
function logic [7:0] seg(
    input [3:0] b
);
    logic [7:0] h;
    case(b) 
    4'h0:h = 8'b11111101;
    4'h1:h = 8'b01100000;
    4'h2:h = 8'b11011010;
    4'h3:h = 8'b11110010;
    4'h4:h = 8'b01100110;
    4'h5:h = 8'b10110110;
    4'h6:h = 8'b10111110;
    4'h7:h = 8'b11100000;
    4'h8:h = 8'b11111110;
    4'h9:h = 8'b11110110;
    4'ha:h = 8'b11101110;
    4'hb:h = 8'b00111110;
    4'hc:h = 8'b10011100;
    4'hd:h = 8'b01111010;
    4'he:h = 8'b10011110;
    4'hf:h = 8'b10001110;
    default: h = 8'b0;
    endcase
    return ~h;
endfunction
typedef logic [7:0] ascii_map_t [100];
ascii_map_t ascii_normal = '{
    8'h1C: 8'h61,
    8'h32: 8'h62,
    8'h21: 8'h63,
    8'h23: 8'h64,
    8'h24: 8'h65,
    8'h2B: 8'h66,
    8'h34: 8'h67,
    8'h33: 8'h68,
    8'h43: 8'h69,
    8'h3B: 8'h6A,
    8'h42: 8'h6B,
    8'h4B: 8'h6C,
    8'h3A: 8'h6D,
    8'h31: 8'h6E,
    8'h44: 8'h6F,
    8'h4D: 8'h70,
    8'h15: 8'h71,
    8'h2D: 8'h72,
    8'h1B: 8'h73,
    8'h2C: 8'h74,
    8'h3C: 8'h75,
    8'h2A: 8'h76,
    8'h1D: 8'h77,
    8'h22: 8'h78,
    8'h35: 8'h79,
    8'h1A: 8'h7A,
    8'h45: 8'h30,
    8'h16: 8'h31,
    8'h1E: 8'h32,
    8'h26: 8'h33,
    8'h25: 8'h34,
    8'h2E: 8'h35,
    8'h36: 8'h36,
    8'h3D: 8'h37,
    8'h3E: 8'h38,
    8'h46: 8'h39,
    default:8'h00

};
module top (
    input clk,clrn,ps2_clk,ps2_data,led_off,
    output logic [7:0] segs[0:7],
    output logic [7:0] press_count

);
    logic nextdata_n,ready,overflow;
    logic key_pressed,key_released;
    logic [7:0] data;
    logic [7:0] last_key;
    ps2_keyboard a0(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n),
        .overflow(overflow)
    );
    always @(posedge clk) begin
        if(clrn) begin
            press_count <= 0;
            key_pressed <= 0;
            key_released <= 1;
            last_key <= 8'h00;
            segs <='{8{8'hFF}};
            nextdata_n <=0;
        end 
        else begin 
            if(ready) begin 
                last_key <=data;
                if(data == 8'hF0) begin 
                    key_released <=1;
                end else begin 
                    key_pressed <=1;
                    key_released <=0;
                end
                if(key_pressed && key_released) begin 
                    press_count <= press_count +1;
                    key_pressed <=0;
                    key_released <=1;
                end
            end
        end
    end 
    always_comb begin
        segs[0] = seg(ascii_normal[last_key[6:0]][3:0]);
        segs[1] = seg(ascii_normal[last_key[6:0]][7:4]);
        segs[2] = seg(last_key[3:0]);
        segs[3] = seg(last_key[7:4]);
        segs[4] = seg(press_count[3:0]);
        segs[5] = seg(press_count[7:4]);

        if(key_released&&led_off) begin
            for (int i = 0; i < 4; i++) begin
            segs[i] = 8'hFF;

        end
        end
    end
endmodule
    