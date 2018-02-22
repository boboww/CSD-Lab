module Lab2_beh(
	input wire [3:0] A_in,
	input wire [3:0] B_in, 
	input wire S0_in,
	input wire S1_in,
	output reg [3:0] Lab2_beh_out);

	always @(*) begin
		if(!S1_in & !S0_in)
			Lab2_beh_out = ~A_in;
		if(!S1_in & S0_in) 
			Lab2_beh_out = A_in + B_in;
		if(S1_in & !S0_in) 
			Lab2_beh_out = A_in - B_in;
		if(S1_in & S0_in) 
			Lab2_beh_out = A_in + A_in;
	end
endmodule
