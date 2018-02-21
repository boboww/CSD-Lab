module inverter4bit(I_in, I_out);

	input [3:0] I_in;
   output [3:0] I_out;

	inverter  Inv1 (.inp(I_in[3]), .op(I_out[3]));
	inverter  Inv2 (.inp(I_in[2]), .op(I_out[2]));
	inverter  Inv3 (.inp(I_in[1]), .op(I_out[1]));
	inverter  Inv4 (.inp(I_in[0]), .op(I_out[0]));
endmodule
	