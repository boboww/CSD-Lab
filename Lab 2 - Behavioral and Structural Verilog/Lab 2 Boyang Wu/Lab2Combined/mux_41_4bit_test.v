module mux_41_4bit_test();

	// Inputs
	reg [3:0] A_in;
	reg [3:0] B_in;
	reg [3:0] C_in;
	reg [3:0] D_in;
	reg S0_in;
	reg S1_in;

	// Outputs
	wire [3:0] Mux_out;

	// Instantiate the Unit Under Test (UUT)
	mux_41_4bit uut (
		.A_in(A_in), 
		.B_in(B_in), 
		.C_in(C_in), 
		.D_in(D_in), 
		.S0_in(S0_in), 
		.S1_in(S1_in), 
		.Mux_out(Mux_out)
	);

	initial begin
	A_in = 0;
	B_in = 0;
	C_in = 0;
	D_in = 0;
	S0_in = 0;
	S1_in = 0;

	#100;		
	A_in=1;
	S0_in = 0;
	S1_in = 0;

	#100;
	A_in = 0;
	B_in = 0;
	C_in = 0;
	D_in = 0;

	#100;
	B_in=1;
	S1_in = 0;		
	S0_in = 1;

	#100;
	A_in = 0;
	B_in = 0;
	C_in = 0;
	D_in = 0;
			
	#100;
	C_in=1;
	S1_in = 1;		
	S0_in = 0;		

	#100;
	A_in = 0;
	B_in = 0;
	C_in = 0;
	D_in = 0;

	#100;
	D_in=1;
	S0_in = 1;
	S1_in = 1;
	end      
endmodule

