module lessthan_4bit(
	input [3:0] L_in0, 
	input [3:0] L_in1, 
	output L_out
	);

assign L_out = (L_in0 < L_in1);
	    
endmodule
