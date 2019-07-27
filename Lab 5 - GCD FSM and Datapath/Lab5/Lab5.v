module Lab5(
	input x_sel,
	input y_sel,
	input x_ld,
	input y_ld,
	input [3:0] X_in,
	input [3:0] Y_in,
	input d_ld,
	output x_neq_y,
	output x_lt_y,
	output [3:0] GCD_out,
	input clk,
	input reset,
	output [3:0] x_val,
	output [3:0] y_val,
	output [3:0] x_mux,
	output [3:0] y_mux
	);
	
	wire [3:0] x_sub_y;
	wire [3:0] y_sub_x;

	
	
	
	notequal_4bit Neq(x_val, y_val, x_neq_y);
	lessthan_4bit Less(x_val, y_val, x_lt_y);	
	
	mux_2to1_4bit Mux0(X_in, x_sub_y, x_sel, x_mux);							
	mux_2to1_4bit Mux1(Y_in, y_sub_x, y_sel, y_mux);
							
	register_4bit Reg0(x_mux, x_val, clk, x_ld, reset);		
	register_4bit Reg1(y_mux, y_val, clk, y_ld, reset);	
	
	register_4bit Reg2(x_val, GCD_out, clk, d_ld, reset);	
		
	subtractor_4bit Sub0(x_val, y_val, x_sub_y);	
	subtractor_4bit Sub1(y_val, x_val, y_sub_x);
	
endmodule

