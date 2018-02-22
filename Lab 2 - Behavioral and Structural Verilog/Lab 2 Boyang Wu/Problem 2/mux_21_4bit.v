module mux_21_4bit(mux_in0, mux_in1, sel, mux_out);

//Declare inputs/outputs
input sel;
input [3:0] mux_in0;
input [3:0] mux_in1;
output [3:0] mux_out;

reg [3:0] mux_out;

always @ (*) begin

	if (sel == 0) begin
		mux_out = mux_in0;
	end
	else begin
		mux_out = mux_in1;
	end
	
end

endmodule
