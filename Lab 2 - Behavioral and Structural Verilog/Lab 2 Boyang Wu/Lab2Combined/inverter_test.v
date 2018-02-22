// testbench module definition 
module inverter_test;

// stimulus for inverter input 
reg inp; 
// output of inverter
wire op;

// inverter instantiation
inverter u_inverter (
	.inp(inp), 
	.op(op)); 

// initial block 
initial 
  begin 
        inp = 0; 
    #10 inp = 1; 
    #10 inp = 0; 
    #10 $finish;
  end 
endmodule 

