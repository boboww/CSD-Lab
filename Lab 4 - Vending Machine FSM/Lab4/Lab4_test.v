module Lab4_test;

	// Inputs
	reg quarter;
	reg nickel;
	reg dime;
	reg soda;
	reg diet;
	reg clk;

	// Outputs
	wire GiveSoda;
	wire GiveDiet;
	wire Change;

	// Instantiate the Unit Under Test (UUT)
	Lab4 uut (
		.quarter(quarter), 
		.nickel(nickel), 
		.dime(dime), 
		.soda(soda), 
		.diet(diet), 
		.clk(clk), 
		.GiveSoda(GiveSoda), 
		.GiveDiet(GiveDiet), 
		.Change(Change)
	);
	
	always begin
		clk = ~clk;
		#5;
	end

	initial begin
		// Initialize Inputs
		quarter = 0;
		nickel = 0;
		dime = 0;
		soda = 0;
		diet = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		nickel = 1;
		
		#50;
		nickel = 0;
		
		#50;
		quarter = 1;
		
		#50;
		quarter = 0;
		
		#50;
		dime = 1;
		
		#50;
		dime = 0;
		
		#50;
		quarter = 1;
		
		#50;
		quarter = 0;
		
		#50;
		soda = 1;
		
		#50;
		soda = 0;
		
		#50;
		
		#50;
		
		#50;
		
		#50;

	end
      
endmodule

