module lessthan_4bit(
	input [3:0] L_in0, 
	input [3:0] L_in1, 
	output reg L_out
	);

always @(*) begin	
	if(L_in0 < L_in1) begin
		L_out = 1;
	end else begin
		L_out = 0;
	end
end
	    
endmodule
