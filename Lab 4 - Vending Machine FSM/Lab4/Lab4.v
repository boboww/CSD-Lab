module Lab4(
	input quarter,	
	input dime,
	input nickel,
	input soda,
	input diet,
	input clk,
	output reg GiveSoda,
	output reg GiveDiet,
	output reg Change,
	output reg [3:0] next,
	output reg [3:0] curr
	);
	
reg [3:0] CurrentState;
reg [3:0] NextState;

integer i = 1;

parameter s0 = 4'b0000;		//0
parameter s5 = 4'b0001;		//1
parameter s10 = 4'b0010;	//2
parameter s15 = 4'b0011;	//3
parameter s20 = 4'b0100;	//4
parameter s25 = 4'b0101;	//5
parameter s30 = 4'b0110;	//6
parameter s35 = 4'b0111;	//7
parameter s40 = 4'b1000;	//8
parameter s45 = 4'b1001;	//9
parameter s50 = 4'b1010;	//10
parameter s55 = 4'b1011;	//11
parameter s60 = 4'b1100;	//12
parameter s65 = 4'b1101;	//13

always @(posedge clk) begin
	curr = CurrentState;
	CurrentState <= NextState;
	next = NextState;
	if(CurrentState == s45 || i == 1) begin
		NextState = s0;
		i = 0;
	end
end

always @(negedge clk) begin
	Change = 0;
end

always @(*) begin
	NextState = CurrentState;
	GiveSoda = 0;
	GiveDiet = 0;
	Change = 0;	
	
	case (CurrentState)
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
