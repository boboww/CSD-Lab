module mux_2to1_4bit(
	input [3:0] M_in0,
	input [3:0] M_in1, 
	input sel,
	output [3:0] M_out
	);

assign M_out = sel ? M_in1 : M_in0;

endmodule

