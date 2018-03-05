module register_4bit(
    input enable,
	 input reset,
	 input clk,
	 input [3:0] R_in,
	 output reg [3:0] R_out
	 );

always @(negedge clk or negedge reset) begin
	if(reset) begin
		R_out = 0;
	end else begin
		R_out = R_in;
	end
end

endmodule
