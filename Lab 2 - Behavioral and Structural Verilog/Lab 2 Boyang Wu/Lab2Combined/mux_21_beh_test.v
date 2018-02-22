module mux_21_beh_test;

reg sel; 
reg [1:0] mux_in;

wire mux_out;

// inverter instantiation
mux_21_beh u_mux_21_beh (
	.sel(sel), 
	.mux_in(mux_in), 
	.mux_out(mux_out)); 

// initial block 
initial 
	begin 
  
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
