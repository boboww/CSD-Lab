// Verilog test fixture created from schematic /home/b/boyangwu/Downloads/tutorial_1/fulladd.sch - Wed Jan 17 18:10:09 2018

`timescale 1ns / 1ps

module fulladd_fulladd_sch_tb();

// Inputs
   reg B_in;
   reg A_in;
   reg C_in;

// Output
   wire S_out;
   wire C_out;

// Bidirs

// Instantiate the UUT
   fulladd UUT (
		.B_in(B_in), 
		.A_in(A_in), 
		.C_in(C_in), 
		.S_out(S_out), 
		.C_out(C_out)
   );
// Initialize Inputs
   `ifdef auto_init
       initial begin
		B_in = 0;
		A_in = 0;
		C_in = 0;
   `endif
endmodule
