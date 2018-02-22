module Lab_test;

	// Inputs
	reg [6:0] max_count;
	reg run;
	reg clk;

	// Outputs
	wire [3:0] digit_1;
	wire [3:0] digit_2;

	// Instantiate the Unit Under Test (UUT)
	Lab3 uut (
		.max_count(max_count), 
		.run(run), 
		.clk(clk), 
		.digit_1(digit_1), 
		.digit_2(digit_2)
	);
	
	always begin
		clk = ~clk;
		#5;
	end

	initial begin
		clk = 0;
		run = 0;
		max_count = 0;
		#100;
		// Set MAX to 73 while run=0
		max_count = 73;
		#10;
		// Wait, then set run to 1
		run = 1;
		#150;
		// Change MAX while run is 1 - should NOT affect the output;
		max_count = 15;
		#850;
		// At this time, the output should be 73. Reset it to zero and give it the new max by setting run to 0
		run = 0;
		#20
		// Count up to 15 by setting run to 1
		run = 1;
		#50;
		// Change max count to > 99
		max_count = 118;
		#500
		run=0;
		#20
		run=1;
		// Should count to 99 and stop
		// *** NOTE*** You will need to simulate 3us to see the entire waveform
	end
endmodule
