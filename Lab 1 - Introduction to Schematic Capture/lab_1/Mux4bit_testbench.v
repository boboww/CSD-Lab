// Verilog test fixture created from schematic C:\Users\Bo\Dropbox\School\Spring 2018\CDA 4203L Computer System Design Lab\Lab 1 - Introduction to Schematic Capture\lab_1\Mux4bit.sch - Tue Jan 23 14:52:46 2018

`timescale 1ns / 1ps

module Mux4bit_Mux4bit_sch_tb();

// Inputs
   reg [3:0] C_in;
   reg [3:0] D_in;
   reg S0_in;
   reg S1_in;
   reg [3:0] B_in;
   reg [3:0] A_in;

// Output
   wire [3:0] Mux_out;

// Bidirs

// Instantiate the UUT
   Mux4bit UUT (
		.C_in(C_in), 
		.D_in(D_in), 
		.S0_in(S0_in), 
		.S1_in(S1_in), 
		.B_in(B_in), 
		.A_in(A_in), 
		.Mux_out(Mux_out)
   );
// Initialize Inputs
   initial begin
		C_in = 0;
		D_in = 0;
		S0_in = 0;
		S1_in = 0;
		B_in = 0;
		A_in = 0;
   end
endmodule
