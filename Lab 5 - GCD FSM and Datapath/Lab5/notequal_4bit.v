module notequal_4bit(
	input [3:0] N_in0, 
	input [3:0] N_in1, 
	output reg N_out
	);

always @(*) begin	
	if(N_in0 != N_in1) begin
		N_out = 1;
	end else begin
		N_out = 0;
	end
end
	    
endmodule
