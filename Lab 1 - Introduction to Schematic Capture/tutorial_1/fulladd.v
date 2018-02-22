
`timescale 1ns / 1ps

  module fulladd_fulladd_sch_tb();
  
//inputs
	reg C_in;
	reg A_in;
	reg B_in;
	
//Output
	wire S_out;
	wire C_out;
	
//Bidirs

//Instantiate the UUT
	fulladd UUT (
		.A_in(A_in),
		.B_in(B_in),
		.C_in(C_in),
		.S_out(C_out),
		.C_out(C_out)
	);
	
//Initialize Inputs
	initial begin
		A_in=0;
		B_in=0;
		C_in=0;
		
		#100;
		C_in=1;
		#100;
		A_in=1;
		#100;
		B_in=1;
		#100;
		
	end  
endmodule
