module Lab4(
	input quarter,	
	input dime,
	input nickel,
	input soda,
	input diet,
	input clk,
	output reg GiveSoda,
	output reg GiveDiet,
	output reg Change
	);
	
reg [2:0] CurrentState;
reg [2:0] NextState;

integer i = 1;

parameter s0 = 0;
parameter s5 = 0;
parameter s10 = 0;
parameter s15 = 0;
parameter s20 = 0;
parameter s25 = 0;
parameter s30 = 0;
parameter s35 = 0;
parameter s40 = 0;
parameter s45 = 0;
parameter s50 = 0;
parameter s55 = 0;
parameter s60 = 0;
parameter s65 = 0;

always @(posedge clk) begin
	GiveSoda = 0;
	GiveDiet = 0;
	Change = 0;
	
	if(i == 1) begin
		NextState = s0;
		i = 0;
	end	
	
	case (NextState)
		s0 : begin
			if (quarter) begin
				NextState = s25;
			end if(dime) begin
				NextState = s10;
			end if(nickel) begin
				NextState = s5;
			end 
		end
			
		s5 : begin
			if (quarter) begin
				NextState = s30;
			end if(dime) begin
				NextState = s15;
			end if(nickel) begin
				NextState = s10;
			end 
		end

		s10 : begin
			if (quarter) begin
				NextState = s35;
			end if(dime) begin
				NextState = s20;
			end if(nickel) begin
				NextState = s15;
			end 
		end
			
		s15 : begin
			if (quarter) begin
				NextState = s40;
			end if(dime) begin
				NextState = s25;
			end if(nickel) begin
				NextState = s20;
			end 
		end
			
		s20 : begin
			if (quarter) begin
				NextState = s45;
			end if(dime) begin
				NextState = s30;
			end if(nickel) begin
				NextState = s25;
			end 
		end
			
		s25 : begin
			if (quarter) begin
				NextState = s50;
			end if(dime) begin
				NextState = s35;
			end if(nickel) begin
				NextState = s30;
			end 
		end
			
		s30 : begin
			if (quarter) begin
				NextState = s55;
			end if(dime) begin
				NextState = s40;
			end if(nickel) begin
				NextState = s35;
			end 
		end
			
		s35 : begin
			if (quarter) begin
				NextState = s60;
			end if(dime) begin
				NextState = s45;
			end if(nickel) begin
				NextState = s40;
			end 
		end
			
		s40 : begin
			if (quarter) begin
				NextState = s65;
			end if(dime) begin
				NextState = s50;
			end if(nickel) begin
				NextState = s45;
			end 
		end
			
		s45 : begin
			if (soda) begin
				GiveSoda = 1;
			end if (diet) begin
				GiveDiet = 1;
			end
		end
			
		s50 : begin
			Change = 1;
			NextState = s45;
		end
			
		s55 : begin
			Change = 1;
			NextState = s50;
		end

		s60 : begin
			Change = 1;
			NextState = s55;
		end 
		
		s65 : begin
			Change = 1;
			NextState = s60;
		end 

	endcase
end

endmodule
