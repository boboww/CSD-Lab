module debounce(
    input wire clk,
    input wire noisy,
    output reg clean
);

 parameter M = 2;			//was 8   works at 1
 reg [M-1:0]shift;

 //shift: wait for stable
 always @ (posedge clk) 
 begin
   shift[M-1:0] <= {shift[M-2:0],noisy}; // N shift register
// if(shift[M-1:0] == (2**M)*0)
   if(~|shift)
     clean <= 1'b0;
// else if(shift[M-1:0] == (2**M)-1)
   else if(&shift)
     clean <= 1'b1;
   else clean <= clean;
 end
 endmodule