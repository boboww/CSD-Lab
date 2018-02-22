// Verilog test fixture created from schematic C:\Users\Bo\Dropbox\School\Spring 2018\CDA 4203L Computer System Design Lab\Lab 1 - Introduction to Schematic Capture\lab_1\Subtract.sch - Tue Jan 23 14:16:11 2018

`timescale 1ns / 1ps

module Subtract_Subtract_sch_tb();

// Inputs
   reg [3:0] A_in;
   reg [3:0] B_in;
   reg C_in;

// Output
   wire C_out;
   wire [3:0] S_out;

// Bidirs

// Instantiate the UUT
   Subtract UUT (
		.A_in(A_in), 
		.C_out(C_out), 
		.S_out(S_out), 
		.B_in(B_in), 
		.C_in(C_in)
   );
// Initialize Inputs
      initial begin
		A_in = 0;
		B_in = 0;
		C_in = 0;
		
		//Subtract 14 - 2 
		#100				
		A_in = 14;
		B_in = 2;
		
		//Subtract 6 - 3
		#100				
		A_in = 6;
		B_in = 3;	
		end
endmodule
