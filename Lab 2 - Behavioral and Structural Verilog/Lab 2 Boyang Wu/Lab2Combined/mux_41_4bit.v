module mux_41_4bit(A_in, B_in, C_in, D_in, S0_in, S1_in, Mux_out);

	input [3:0] A_in;
	input [3:0] B_in;
   input [3:0] C_in;
   input [3:0] D_in;
	input S0_in;
	input S1_in;
	output [3:0] Mux_out;
   
   wire [3:0] Mux1_out;
	wire [3:0] Mux2_out;
	
	mux_21_4bit  Mux1 (.mux_in0(A_in[3:0]), 
                     .mux_in1(B_in[3:0]), 
                     .sel(S0_in), 
                     .mux_out(Mux1_out[3:0]));
   mux_21_4bit  Mux2 (.mux_in0(C_in[3:0]), 
                     .mux_in1(D_in[3:0]), 
                     .sel(S0_in), 
                     .mux_out(Mux2_out[3:0]));
   mux_21_4bit  Mux3 (.mux_in0(Mux1_out[3:0]), 
                     .mux_in1(Mux2_out[3:0]), 
                     .sel(S1_in), 
                     .mux_out(Mux_out[3:0]));
endmodule
