// Verilog test fixture created from schematic C:\Users\Bo\Dropbox\School\Spring 2018\CDA 4203L Computer System Design Lab\Lab 1 - Introduction to Schematic Capture\lab_1\Lab1.sch - Wed Jan 24 17:02:25 2018

`timescale 1ns / 1ps

module Lab1_Lab1_sch_tb();

// Inputs
   reg [3:0] B_in;
   reg S0_in;
   reg S1_in;
   reg [3:0] A_in;
   reg C_in;

// Output
   wire [3:0] Lab1_out;
   wire C_out_Add;
   wire C_out_Subtract;
   wire C_out_Double;

// Bidirs

// Instantiate the UUT
   Lab1 UUT (
		.B_in(B_in), 
		.S0_in(S0_in), 
		.S1_in(S1_in), 
		.A_in(A_in), 
		.Lab1_out(Lab1_out), 
		.C_out_Add(C_out_Add), 
		.C_out_Subtract(C_out_Subtract), 
		.C_out_Double(C_out_Double), 
		.C_in(C_in)
   );
	
// Initialize Inputs
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
