module mux_21_case_test;

reg sel; 
reg [1:0] mux_in;

wire mux_out;

// inverter instantiation
mux_21_case u_mux_21_case (
	.sel(sel), 
	.mux_in(mux_in), 
	.mux_out(mux_out)); 

// initial block 
initial begin   
	sel = 0;
	mux_in[1] = 0;
	mux_in[0] = 0;
	
	#10 
	sel = 0;
	mux_in[1] = 1;
	mux_in[0] = 0;
	
   #10 
	sel = 1;
	mux_in[1] = 1;
	mux_in[0] = 0;
	
   #10 
	$finish;
  end 
endmodule 

