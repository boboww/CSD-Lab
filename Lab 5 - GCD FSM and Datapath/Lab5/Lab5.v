module Lab5(
	input [3:0] X_in,
	input [3:0] Y_in,
	input clk,
	input reset,
	input enable,
	input sel_x,
	input sel_y,
	input GCD_in,
	output reg [3:0] GCD_out
	);
	
	wire lessthan_out;
	wire notequal_out;	
	wire [3:0] register_out0;
	wire [3:0] register_out1;
	wire [3:0] subtractor_out0;
	wire [3:0] subtractor_out1;
	wire [3:0] mux_out0;
	wire [3:0] mux_out1;
	 
	lessthan_4bit Less(X_in, Y_in, lessthan_out);	
	
	notequal_4bit Neq(X_in, Y_in, notequal_out);
	
	subtractor_4bit Sub0(X_in, Y_in, subtractor_out0);	
	subtractor_4bit Sub1(Y_in, X_in, subtractor_out1);
	
	mux_2to1_4bit Mux0(X_in, subtractor_out0, sel_x, mux_out0);							
	mux_2to1_4bit Mux1(Y_in, subtractor_out1, sel_y, mux_out1);
							
	register_4bit Reg0(enable, reset, clk, X_in, register_out0);		
	register_4bit Reg1(enable, reset, clk, Y_in, register_out1);								
	register_4bit Reg2(enable, reset, clk, GCD_in, GCD_out);	
	
	reg [3:0] CurrentState;
	reg [3:0] NextState;
	reg [3:0] TempState;
	
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

always @(posedge clk) begin
	if(reset) begin
		CurrentState <= s0;
	end
		
	case(CurrentState) 
		s0: begin
		
		end
		
		s1: begin
		
		end	
		
		s2: begin
		
		end
		
		s3: begin
		
		end	
		
		s4: begin
		
		end
		
		s5: begin
		
		end	
		
		s6: begin
		
		end
		
		s7: begin
		
		end	
		
		s8: begin
		
		end
		
		s9: begin
		
		end
		
		s10: begin
		
		end
		
	endcase
	
end

endmodule
