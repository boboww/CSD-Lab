module dff (q, d, clk);
	
input d, clk;
output q;
reg q;

always @(posedge clk) 
// positive edge triggered
begin
	q = d;
end
	
endmodule
