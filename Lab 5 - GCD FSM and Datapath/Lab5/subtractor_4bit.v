module subtractor_4bit(
	input [3:0] S_in0, 
	input [3:0] S_in1, 
	output reg [3:0] S_out
	);
	
assign S_out = S_in0 - S_in1;
    
endmodule
