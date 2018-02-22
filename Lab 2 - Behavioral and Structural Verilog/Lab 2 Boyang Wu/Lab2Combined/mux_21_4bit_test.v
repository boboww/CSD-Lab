module mux_21_4bit_test;

	// Inputs
	reg [3:0] mux_in0;
	reg [3:0] mux_in1;
	reg sel;

	// Outputs
	wire [3:0] mux_out;

	// Instantiate the Unit Under Test (UUT)
	mux_21_4bit uut (
		.mux_in0(mux_in0), 
		.mux_in1(mux_in1), 
		.sel(sel), 
		.mux_out(mux_out)
	);

	initial begin
		// Initialize Inputs		
		sel = 0;
		mux_in0 = 0;
		mux_in1 = 0;
				
		#100 
		sel = 1;
		mux_in1 = 15;
		mux_in0 = 1;
		
		#100 
		sel = 0;
		mux_in1 = 14;
		mux_in0 = 2; 
		
		#100 
		sel = 1;
		mux_in1 = 13;
		mux_in0 = 3;
		
		#100 
		sel = 0;
		mux_in1 = 12;
		mux_in0 = 4;
		
		#100 
		sel = 1;
		mux_in1 = 11;
		mux_in0 = 5;
		$finish;
	end
endmodule
