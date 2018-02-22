module Lab_test;
	reg [6:0] max_count;		//inputs
	reg clk;
	reg run;
	wire [3:0] digit1;		//outputs
	wire [3:0] digit2;
	
	Lab3 uut (
		.max_count(max_count), 
		.clk(clk),
		.run(run),  
		.digit1(digit1), 
		.digit2(digit2)
	);
	
	always begin
		clk = ~clk;
		#2;
	end

	initial begin
		clk = 0;
		run = 0;
		max_count = 0;
		
		#100;		// Set MAX to 73 while run=0
		max_count = 73;		
		
		#10;		// Wait, then set run to 1
		run = 1;					
		
		#150;		// Change MAX while run is 1 - should NOT affect the output;		
		max_count = 15;
		
		#850;		// At this time, the output should be 73. 
		run = 0;	// Reset it to zero and give it the new max by setting run to 0
		
		#20		// Count up to 15 by setting run to 1		
		run = 1;
		
		#50;		// Change max count to > 99		
		max_count = 118;
				
		#500		// Set run to 0
		run=0;
		
		#20		// Set run to 1
		run=1;
		// Should count to 99 and stop
		// *** NOTE*** You will need to simulate 3us to see the entire waveform
	end
endmodule
