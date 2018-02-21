// Verilog Test Fixture Template

  `timescale 1 ns / 1 ps

  module fulladd4_fulladd4_sch_tb();
       
//Inputs
	reg [3:0] A_in;
	reg [3:0] B_in;
	reg C_in;
	
//Output
	wire [3:0] S_out;
	wire C_out;
	
//Bidirs
	
//Instantiate the UUT
	
	fulladd4 UUT (
		.A_in(A_in[3:0]),
		.B_in(B_in[3:0]),
		.C_in(C_in),
		.S_out(S_out[3:0]),
		.C_out(C_out)
	);

//Initialize Inputs

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
