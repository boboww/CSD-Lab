module Lab2_Struct(A_in, B_in, C_in, S0_in, S1_in, C_out0, C_out1, Lab2_Struct_out);

	input [3:0] A_in;
   input [3:0] B_in;
   input C_in;
   input S0_in;
   input S1_in;
   output C_out0;
   output C_out1;
   output [3:0] Lab2_Struct_out;
      
   wire [3:0] Inv_out;
	wire [3:0] Add_out;
   wire [3:0] Dbl_out;
	wire [3:0] Sub_out;
	wire [3:0] Sub1_out;
	wire [3:0] Sub2_out;
   
   inverter4bit  Inv(.I_in(A_in[3:0]), 
							.I_out(Inv_out[3:0]));
	fulladd4bit  Add(.A_in(A_in[3:0]), 
							.B_in(B_in[3:0]), 
							.C_in(C_in), 
							.C_out(C_out0), 
							.S_out(Add_out[3:0]));
	
	inverter4bit Inv1(.I_in(B_in[3:0]),
							.I_out(Sub_out[3:0]));
	assign Sub1_out[3:0] = Sub_out[3:0] + 1;	
	fulladd4bit  Sub(.A_in(A_in[3:0]), 
							.B_in(Sub1_out[3:0]), 
							.C_in(C_in), 
							.C_out(), 
							.S_out(Sub2_out[3:0]));				
			
   fulladd4bit  Dbl(.A_in(A_in[3:0]), 
							.B_in(A_in[3:0]), 
							.C_in(C_in), 
							.C_out(C_out1), 
							.S_out(Dbl_out[3:0]));
   mux_41_4bit  Lab_out(.A_in(Inv_out[3:0]), 
								.B_in(Add_out[3:0]), 
								.C_in(Sub2_out[3:0]), 
								.D_in(Dbl_out[3:0]), 
								.S0_in(S0_in), 
								.S1_in(S1_in), 
								.Mux_out(Lab2_Struct_out[3:0]));
endmodule
