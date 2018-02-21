module Lab4(
	input quarter,
	input nickel,
	input dime,
	input soda,
	input diet,
	input clk,
	output reg GiveSoda,
	output reg GiveDiet,
	output reg Change
	);
	
reg [2:0] CurrentState;
reg [2:0] NextState;

integer i;

localparam s0 = 0;
localparam s5 = 0;
localparam s10 = 0;
localparam s15 = 0;
localparam s20 = 0;
localparam s25 = 0;
localparam s30 = 0;
localparam s35 = 0;
localparam s40 = 0;
localparam s45 = 0;
localparam s50 = 0;
localparam s55 = 0;
localparam s60 = 0;
localparam s65 = 0;

always @(posedge clk) begin
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
		
		end
			
		s50 : begin
		
		end
			
		s55 : begin
		
		end

		s60 : begin
		
		end 
		
		s65 : begin
		
		end 

	endcase
end

endmodule
