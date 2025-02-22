module Lab3(max_count, run, clk, digit_2, digit_1, count_out);

	input [6:0] max_count;	
	input run, clk;
	output reg [3:0] digit_2;
	output reg [3:0] digit_1;
	output reg [6:0] count_out;
		
	integer i;
				
	always @(posedge clk or negedge clk && max_count) begin		//start		
			
		if(max_count == 99) begin	//Max_count == 99 so stop
			//enable = 0;
		end if(run == 0) begin		//run == 0 so reset counter and stop counting
			//reset = 1;					//reset
			//count_out = 0;	
		//end if (reset == 0) begin 	// Run Condition
		//	count_out = count_out + 1;
		end		
		
		digit_2 = 4'd0;
		digit_1 = 4'd0;
		
		for(i = 6; i >= 0; i = i - 1) begin		//binary to BCD
			if (digit_2 >= 5)
				digit_2 = digit_2 + 3;
			if (digit_1 >= 5)
				digit_1 = digit_1 + 3;

		digit_2 = digit_2 << 1;
		digit_2[0] = digit_1[3];
		digit_1 = digit_1 << 1;
		digit_1[0] = max_count[i];	
		count_out = max_count;
		
		end		
  end
	

endmodule


