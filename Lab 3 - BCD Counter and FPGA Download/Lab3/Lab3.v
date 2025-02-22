module Lab3(
		input [6:0] max_count, 
		input clk, 		
		input run, 
		output reg [3:0] digit1, 
		output reg [3:0] digit2		
	);
			
	integer i;
		
	always @(posedge clk) begin		
		if (run == 0) begin
			i = max_count;
			digit1 = 4'd0;
			digit2 = 4'd0;
		end if(digit1 == 9 && digit2 == 9) begin
			i = -1;	
		end 
		
		if(i > 0) begin
			i = i - 1;
			digit1 = digit1 + 1;
			if(digit1 == 10) begin
				digit1 = 0;
				digit2 = digit2 + 1;
				if(digit2 == 10) begin
					digit2 = 0;
				end
			end
		end
	end	
endmodule
