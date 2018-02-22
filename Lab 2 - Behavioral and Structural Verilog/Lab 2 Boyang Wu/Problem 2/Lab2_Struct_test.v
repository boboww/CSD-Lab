module Lab2_Struct_test;

	// Inputs
	reg [3:0] A_in;
	reg [3:0] B_in;
	reg C_in;
	reg S0_in;
	reg S1_in;

	// Outputs
	wire C_out0;
	wire C_out1;
	wire [3:0] Lab2_Struct_out;

	// Instantiate the Unit Under Test (UUT)
	Lab2_Struct uut (
		.A_in(A_in), 
		.B_in(B_in), 
		.C_in(C_in), 
		.S0_in(S0_in), 
		.S1_in(S1_in), 
		.C_out0(C_out0), 
		.C_out1(C_out1), 
		.Lab2_Struct_out(Lab2_Struct_out)
	);

	initial begin
		//Start everything = 0 so S_out = 15
		B_in = 0;
		S0_in = 0;
		S1_in = 0;
		A_in = 0;
		C_in = 0;
		
		//Invert A = 2
		#100		
		S1_in = 0;
		S0_in = 0;		
		A_in = 2;
		B_in = 0;
		
		//Invert A = 15
		#100		
		S1_in = 0;
		S0_in = 0;		
		A_in = 15;
		B_in = 0;
		
		//Add 3 + 5
		#100		
		S1_in = 0;
		S0_in = 1;		
		A_in = 3;
		B_in = 5;
		
		//Add 2 + 10
		#100		
		S1_in = 0;
		S0_in = 1;		
		A_in = 2;
		B_in = 10;
		
		//Subtract 13 - 2 
		#100		
		S1_in = 1;
		S0_in = 0;		
		A_in = 13;
		B_in = 2;
		
		//Subtract 6 - 4
		#100		
		S1_in = 1;
		S0_in = 0;		
		A_in = 6;
		B_in = 4;
		
		//Double A = 3
		#100		
		S1_in = 1;
		S0_in = 1;		
		A_in = 5;
		B_in = 0;
		
		//Double A = 7
		#100		
		S1_in = 1;
		S0_in = 1;		
		A_in = 7;
		B_in = 0;
   end
endmodule


