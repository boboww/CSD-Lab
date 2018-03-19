module Lab5_seq(Start, X_in, Y_in, reset, GCD_out, Done, clk, curr, xneqy, xlty, ysel, yld, xsel, xld, xval, yval, xmux, ymux);
    input [0:0] Start;
    input [3:0] X_in;
    input [3:0] Y_in;
    input [0:0] reset;
    output [3:0] GCD_out;
    output reg [0:0] Done;
    input [0:0] clk;
	 output reg [3:0] curr;
	 output reg xneqy;
	 output reg xlty;
	 output reg ysel;
	 output reg yld;
	 output reg xsel;
	 output reg xld;
	 output reg [3:0] xval;
	 output reg [3:0] yval;
	 output reg [3:0] xmux;
	 output reg [3:0] ymux;
	 
	 reg [0:0] x_ld;
	 reg [0:0] y_ld;
	 reg [0:0] x_sel;
	 reg [0:0] y_sel;
	 reg [0:0] d_ld;
	 reg [3:0] CurrentState = s0;
	
	 wire [3:0] x_val;
	 wire [3:0] y_val;
	 wire [3:0] x_mux;
	 wire [3:0] y_mux;	 
	 wire x_neq_y;
	 wire x_lt_y;	 

parameter s0 = 4'b0000;
parameter s1 = 4'b0001;
parameter s2 = 4'b0010;
parameter s3 = 4'b0011;
parameter s4 = 4'b0100;
parameter s5 = 4'b0101;
parameter s6 = 4'b0110;
parameter s7 = 4'b0111;
parameter s8 = 4'b1000;
parameter s9 = 4'b1001;
parameter s10 = 4'b1010;
parameter s11 = 4'b1011;
parameter s12 = 4'b1100;

Lab5 GCD(x_sel, y_sel, x_ld, y_ld, X_in, Y_in, d_ld, x_neq_y, x_lt_y, GCD_out, clk, reset, x_val, y_val, x_mux, y_mux);


always @(posedge clk) begin
	curr = CurrentState;
	xneqy = x_neq_y;
	xlty = x_lt_y;
	ysel = y_sel;
	yld = y_ld;
	xsel = x_sel;
	xld = x_ld;
	xval = x_val;
	yval = y_val;
	xmux = x_mux;
	ymux = y_mux;

	if(reset) begin		
		Done <= 0;
		y_sel <= 0;
		x_sel <= 0;
		y_ld <= 0;
		x_ld <= 0;
		d_ld <= 0;
		CurrentState <= s0;
	end
	
	case(CurrentState)  
		s0: begin
			if(Done) begin
				CurrentState <= s0;
			end else begin
				CurrentState <= s1;
			end
		end
		
		s1: begin
			if(Start) begin
				CurrentState <= s3;
			end else begin
				CurrentState <= s2;
			end
		end	
		
		s2: begin			
			CurrentState <= s1;
		end
		
		s3: begin
			x_sel <= 0;
			x_ld <= 1;
			CurrentState <= s4;
		end	
		
		s4: begin
			y_sel <= 0;
			y_ld <= 1;
			CurrentState <= s5;
		end
		
		s5: begin
			x_ld=0;
			y_ld=0;
			x_sel=0;
			y_sel=0;
			if(x_neq_y) begin
				CurrentState <= s6;
			end else begin
				CurrentState <= s11;
			end
		end	
		
		s6: begin
			if(x_lt_y) begin
				CurrentState <= s7;
			end else begin
				CurrentState <= s8;
			end
		end
		
		s7: begin
			y_sel <= 1;
			y_ld <= 1;
			CurrentState <= s9;
		end	
		
		s8: begin
			x_sel <= 1;
			x_ld <= 1;
			CurrentState <= s5;
		end
		
		s9: begin
			CurrentState <= s5;
		end
		
		s10: begin
			CurrentState <= s5;
		end
		
		s11: begin
			d_ld <= 1;
			CurrentState <= s12;
		end
		
		s12: begin
			Done = 1;
			CurrentState <= s0;
		end
	
	endcase
end

endmodule
