module Lab4_test;

	// Inputs
	reg quarter;
	reg nickel;
	reg dime;
	reg soda;
	reg diet;
	reg clk;
	reg reset;
	// Outputs
	wire GiveSoda;
	wire GiveDiet;
	wire Change;
	wire [3:0] curr;
	wire [3:0] next;
	wire divided_clk;

	// Instantiate the Unit Under Test (UUT)
	Lab4 uut (
		.quarter_in(quarter), 
		.nickel_in(nickel), 
		.dime_in(dime), 
		.soda_in(soda), 
		.diet_in(diet), 
		.clk(clk), 
		.GiveSoda(GiveSoda), 
		.GiveDiet(GiveDiet), 
		.Change(Change),
		.curr(curr),
		.next(next),
		.divided_clk(divided_clk)
	);
	
	always begin
		clk = ~clk;
		#1;
	end

	initial begin
		// Initialize Inputs
		quarter = 0;
		nickel = 0;
		dime = 0;
		soda = 0;
		diet = 0;
		clk = 0;
		reset = 0;
		#50;
		reset = 1;
		#50
		reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
		nickel = 1;
		
		#200;
		nickel = 0;
		#40;
				
		#10;
		quarter = 1;
		
		#10;
		quarter = 0;
		#40;
		
		#10;
		dime = 1;
		
		#10;
		dime = 0;
		#40;
		
		#10;
		quarter = 1;
		
		#10;
		quarter = 0;
		#40;
		
		#50;
		soda = 1;
		#100
		quarter = 1;
		#30;
		quarter = 0;
		#30
		quarter = 1;
		#30;
		quarter = 0;
		#30
		
		#200;
		soda = 0;
		#40;
		
//		parameter s0 = 4'b0000;		//0
//		parameter s5 = 4'b0001;		//1
//		parameter s10 = 4'b0010;	//2
//		parameter s15 = 4'b0011;	//3
//		parameter s20 = 4'b0100;	//4
//		parameter s25 = 4'b0101;	//5
//		parameter s30 = 4'b0110;	//6
//		parameter s35 = 4'b0111;	//7
//		parameter s40 = 4'b1000;	//8
//		parameter s45 = 4'b1001;	//9
//		parameter s50 = 4'b1010;	//10
//		parameter s55 = 4'b1011;	//11
//		parameter s60 = 4'b1100;	//12
//		parameter s65 = 4'b1101;	//13

	end
      
endmodule

