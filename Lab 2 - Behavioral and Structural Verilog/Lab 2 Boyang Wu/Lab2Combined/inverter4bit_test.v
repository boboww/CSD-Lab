module inverter4bit_test;

	// Inputs
	reg [3:0] I_in;

	// Outputs
	wire [3:0] I_out;

	// Instantiate the Unit Under Test (UUT)
	inverter4bit uut (
		.I_in(I_in), 
		.I_out(I_out)
	);

	initial begin
	I_in = 0;
	
	#100
	I_in = 1;
		
	#100
	I_in = 2;
		
	#100
	I_in = 15;
	
	#100
	I_in = 14;
		
   end
endmodule


