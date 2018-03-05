module Lab4(
	input quarter_in,	
	input dime_in,
	input nickel_in,
	input soda_in,
	input diet_in,
	input clk,
	output reg GiveSoda,
	output reg GiveDiet,
	output reg Change,
	output reg [3:0] next,
	output reg [3:0] curr,
	output reg divided_clk = 1'b0
	);
	
reg [3:0] CurrentState;
reg [3:0] NextState;
reg [3:0] TempState;



	reg[24:0] count = 0;	//clock divider counter
	
	always @(negedge clk)
		begin
		
			count <= count + 1;
			if(count ==10000000)
				begin
					count <=0;
					divided_clk <= !divided_clk;
				end	
		end
		
		

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

parameter sWait = 4'b1111;	//This and its respective state prevent coins from being counted twice over multiple clock cycles

wire quarter,nickel,dime,soda,diet;

debounce debounce_quarter(.clk(divided_clk), .noisy(quarter_in), .clean(quarter));
debounce debounce_nickel(.clk(divided_clk), .noisy(nickel_in), .clean(nickel));
debounce debounce_dime(.clk(divided_clk), .noisy(dime_in), .clean(dime));
debounce debounce_soda(.clk(divided_clk), .noisy(soda_in), .clean(soda));
debounce debounce_diet(.clk(divided_clk), .noisy(diet_in), .clean(diet));




always @(posedge divided_clk)
	begin
		curr = CurrentState;
		//next = NextState;
		
	end

always @(negedge divided_clk) begin
	
//	GiveSoda <= 0;
//	GiveDiet <= 0;
end

always @(posedge divided_clk) begin
	//curr = CurrentState;
	CurrentState <= NextState;
	
//	GiveSoda <= 0;
//	GiveDiet <= 0;
	Change <= 0;


	if(i == 1) 						//change this to reset when you get a bit further
		begin
			GiveSoda <= 0;
			GiveDiet <= 0;
			Change <= 0;
			NextState <= s0;
			CurrentState <= s0;
			i = 0;
		end	
	
	case (CurrentState)
		sWait : 
			begin
				if(nickel || dime || quarter)
					begin
						NextState <= NextState;
					end
				else
					begin
						NextState <= TempState;
					end
			end
			
		s0 : begin
				GiveSoda <= 0;
				GiveDiet <= 0;			//these are probably wrong.
			if (quarter) begin
				NextState <= sWait;
				TempState <= s25;
			end else if(dime) begin
				NextState <= sWait;
				TempState <= s10;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <= s5;
			end 
			else
				NextState <= s0;
			
		end
			
		s5 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s30;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s15;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s10;
			end 
			else
				NextState <= s5;
			
		end

		s10 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s35;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s20;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s15;
			end
			else
				NextState <= s10;
		end
			
		s15 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s40;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s25;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s20;
			end
			else
				NextState <= s15;
		end
			
		s20 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s45;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s30;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s25;
			end
			else
				NextState <= s20;
		end
			
		s25 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s50;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s35;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s30;
			end
			else
				NextState <= s25;
		end
			
		s30 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s55;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s40;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s35;
			end
			else
				NextState <= s30;
		end
			
		s35 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s60;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s45;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s40;
			end
			else
				NextState <= s35;
		end
			
		s40 : begin
			if (quarter) begin
				NextState <= sWait;
				TempState <=  s65;
			end else if(dime) begin
				NextState <= sWait;
				TempState <=  s50;
			end else if(nickel) begin
				NextState <= sWait;
				TempState <=  s45;
			end
			else
				NextState <= s40;
		end
			
		s45 : begin
			if (soda) begin
				GiveSoda <= 1;
				NextState <= s0;
				
			end else if (diet) begin
				GiveDiet <= 1;
				NextState <= s0;
			end
			else
				NextState <= s45;
		end
			
		s50 : begin
			Change <= 1;
			NextState <= s45;
		end
			
		s55 : begin
			Change <= 1;
			NextState <= s50;
		end

		s60 : begin
			Change <= 1;
			NextState <= s55;
		end 
		
		s65 : begin
			Change <= 1;
			NextState <= s60;
		end 

	endcase
end

endmodule
