module fulladd4bit_test;

	// Inputs
	reg [3:0] A_in;
	reg [3:0] B_in;
	reg C_in;

	// Outputs
	wire C_out;
	wire [3:0] S_out;

	// Instantiate the Unit Under Test (UUT)
	fulladd4bit uut (
		.A_in(A_in), 
		.B_in(B_in), 
		.C_in(C_in), 
		.C_out(C_out), 
		.S_out(S_out)
	);

	initial begin
	A_in = 0;
	B_in = 0;
	C_in = 0;
	
	#100;	
	A_in = 4;
	B_in = 3;
	
	#100;	
	A_in = 2;
	B_in = 3;
	C_in = 1;
	
	#100;	
	A_in = 7;
	
	end
      
endmodule

