// Verilog test fixture created from schematic C:\Users\Bo\Dropbox\School\Spring 2018\CDA 4203L Computer System Design Lab\Lab 1 - Introduction to Schematic Capture\lab_1\inverter4bit.sch - Wed Jan 24 15:37:54 2018

`timescale 1ns / 1ps

module inverter4bit_inverter4bit_sch_tb();

// Inputs
   reg [3:0] A_in;

// Output
   wire [3:0] A_out;

// Bidirs

// Instantiate the UUT
   inverter4bit UUT (
		.A_out(A_out), 
		.A_in(A_in)
   );
// Initialize Inputs
   initial begin
		A_in = 0;
		
		#100
		A_in = 1;
		
		#100
		A_in = 2;
		
		#100
		A_in = 15;
		
		#100
		A_in = 14;
		
   end
endmodule
