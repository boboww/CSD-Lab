module mux_21_simple(mux_in, sel, mux_out);

//Declare inputs/outputs
input sel;
input [1:0] mux_in;
output mux_out;

assign mux_out = (sel) ? mux_in[1] : mux_in[0];

endmodule
