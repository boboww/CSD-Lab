// Verilog test fixture created from schematic /home/b/boyangwu/Downloads/tutorial_1/fulladd.sch - Wed Jan 17 17:58:52 2018

`timescale 1ns / 1ps

module fulladd_fulladd_sch_tb();

// Inputs
	reg C_in;
	reg A_in;
	reg B_in;

// Output
	wire S_out;
	wire C_out;

// Bidirs

// Instantiate the UUT
   fulladd UUT (
		.C_in(C_in),
		.A_in(A_in),
		.B_in(B_in),
		.S_out(S_out),
		.C_out(C_out)
   );
// Initialize Inputs
	initial begin
		 A_in = 0;
		 B_in = 0;
		 C_in = 0;
		 
		 #100;		 
		 C_in=1;		 
		 #100		 
		 A_in=1;		 
		 #100		 
		 B_in=1;		 
		 #100;
		 end
endmodule
