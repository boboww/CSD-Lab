module register_4bit(
	 input [3:0] R_in,
	 output reg [3:0] R_out,
	 input clk,
    input enable,
	 input reset
	 );

always @(negedge clk) begin
	if(reset) begin
		R_out <= 0;
	end else if(enable) begin
		R_out <= R_in;
	end
end

endmodule
