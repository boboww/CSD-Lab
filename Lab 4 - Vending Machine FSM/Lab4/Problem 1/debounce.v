module debounce(		
    input wire clk,
    input wire noisy,
    output reg clean
);

 parameter temp = 1;			//was 8   works at 1
 reg [temp-1:0]shift;

//this is the part where it waits 
 always @ (posedge clk) 
 begin
   shift[temp-1:0] <= {shift[temp-2:0],noisy}; // N shift register
   if(~|shift)
     clean <= 1'b0;
   else if(&shift)
     clean <= 1'b1;
   else clean <= clean;
 end
 endmodule