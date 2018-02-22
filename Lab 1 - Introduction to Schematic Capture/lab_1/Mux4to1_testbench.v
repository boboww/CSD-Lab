// Verilog test fixture created from schematic C:\Users\Bo\Dropbox\School\Spring 2018\CDA 4203L Computer System Design Lab\Lab 1 - Introduction to Schematic Capture\lab_1\Mux4to1.sch - Mon Jan 22 17:55:18 2018

`timescale 1ns / 1ps

module Mux4to1_Mux4to1_sch_tb();

// Inputs
   reg A_in;
   reg B_in;
   reg C_in;
   reg D_in;
   reg S0;
   reg S1;

// Output
   wire Mux_out;

// Bidirs

// Instantiate the UUT
   Mux4to1 UUT (
		.A_in(A_in), 
		.B_in(B_in), 
		.C_in(C_in), 
		.D_in(D_in), 
		.S0(S0), 
		.S1(S1), 
		.Mux_out(Mux_out)
   );
// Initialize Inputs
   initial begin
		A_in = 0;
		B_in = 0;
		C_in = 0;
		D_in = 0;
		S0 = 0;
		S1 = 0;
		
		#100;		
		A_in=1;
		S0 = 0;
		S1 = 0;
		
		#100;
		A_in = 0;
		B_in = 0;
		C_in = 0;
		D_in = 0;
		
		#100;
		B_in=1;
		S1 = 0;		
		S0 = 1;
		
		#100;
		A_in = 0;
		B_in = 0;
		C_in = 0;
		D_in = 0;
				
		#100;
		C_in=1;
		S1 = 1;		
		S0 = 0;		
		
		#100;
		A_in = 0;
		B_in = 0;
		C_in = 0;
		D_in = 0;
		
		#100;
		D_in=1;
		S0 = 1;
		S1 = 1;
   end
endmodule
