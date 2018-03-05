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

always @(posedge clk) begin
	
end

endmodule
