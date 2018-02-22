// Verilog test fixture created from schematic C:\Users\Bo\Dropbox\School\Spring 2018\CDA 4203L Computer System Design Lab\Lab 1 - Introduction to Schematic Capture\lab_1\Double.sch - Tue Jan 23 14:26:48 2018

`timescale 1ns / 1ps

module Double_Double_sch_tb();

// Inputs
   reg [3:0] A_in;
   reg C_in;

// Output
   wire C_out;
   wire [3:0] S_out;

// Bidirs

// Instantiate the UUT
   Double UUT (
		.A_in(A_in), 
		.C_in(C_in), 
		.C_out(C_out), 
		.S_out(S_out)
   );
// Initialize Inputs
   initial begin
		A_in = 0;
		C_in = 0;		
		
		#100
		A_in[3:0] = 0;
		
		#100
		A_in[3:0] = 1;
		
		#100
		A_in[3:0] = 2;
   end
endmodule
