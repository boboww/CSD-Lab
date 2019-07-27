module notequal_4bit(
	input [3:0] N_in0, 
	input [3:0] N_in1, 
	output N_out
	);

assign N_out = (N_in0 != N_in1);
	    
endmodule
