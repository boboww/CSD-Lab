module dff_test;

	// Inputs	
	reg clk;
	reg d;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	dff uut (
		.clk(clk),		
		.d(d),
		.q(q)		
	);
	
	always begin
		clk = 1'b0;
		#50;
		clk = 1'b1;
		#50;
	end
	
	initial begin
		// Initialize Inputs
		d = 0;
		// Wait 100 ns for global reset to finish
		#100	d = 1;
		#130	d = 0;
		#50 	$finish;
	end
      
endmodule

