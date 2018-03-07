module Lab5_test;

	reg [3:0] X_in;
	reg [3:0] Y_in;
	reg clk;
	reg reset;
	reg enable;
	reg sel_x;
	reg sel_y;
	reg GCD_in;

	wire [3:0] GCD_out;

	Lab5 uut (
		.X_in(X_in), 
		.Y_in(Y_in), 
		.clk(clk), 
		.reset(reset), 
		.enable(enable), 
		.sel_x(sel_x), 
		.sel_y(sel_y), 
		.GCD_in(GCD_in), 
		.GCD_out(GCD_out)
	);

	initial begin
		// Initialize Inputs
		X_in = 0;
		Y_in = 0;
		clk = 0;
		reset = 0;
		enable = 0;
		sel_x = 0;
		sel_y = 0;
		GCD_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

