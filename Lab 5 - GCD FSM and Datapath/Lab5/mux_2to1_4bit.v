module mux_2to1_4bit(
	input [3:0] M_in0,
	input [3:0] M_in1, 
	input sel,
	output reg [3:0] M_out
	);

always @ (*) begin
	if (sel == 0) begin
		M_out = M_in0;
	end else begin
		M_out = M_in1;
	end
end

endmodule

