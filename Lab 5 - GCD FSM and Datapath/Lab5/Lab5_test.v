module Lab5_test;

	// Inputs
	reg [0:0] Start;
	reg [3:0] X_in;
	reg [3:0] Y_in;
	reg [0:0] reset;
	reg [0:0] clk;

	// Outputs
	wire [3:0] GCD_out;
	wire [0:0] Done;
	wire [3:0] curr;
	wire [3:0] xval;
	wire [3:0] yval;
	wire [3:0] xmux;
	wire [3:0] ymux;

	// Instantiate the Unit Under Test (UUT)
	Lab5_seq uut (
		.Start(Start), 
		.X_in(X_in), 
		.Y_in(Y_in), 
		.reset(reset), 
		.GCD_out(GCD_out), 
		.Done(Done), 
		.clk(clk),
		.curr(curr),
		.xneqy(xneqy),
		.xlty(xlty),
		.ysel(ysel),
		.yld(yld),
		.xsel(xsel),
		.xld(xld),
		.xval(xval),
		.yval(yval),
		.xmux(xmux),
		.ymux(ymux)
	);
	
always begin
		clk = ~clk;
		#5;
	end

	initial begin
		// Initialize Inputs
		Start = 0;
		X_in = 0;
		Y_in = 0;
		reset = 1;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;		
		reset = 0;		
		X_in = 12;
		Y_in = 9;
		
		#10;
		Start = 1;		
	end
      
endmodule

