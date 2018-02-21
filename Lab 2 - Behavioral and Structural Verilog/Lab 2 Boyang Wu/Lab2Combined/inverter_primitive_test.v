// testbench module definition 
module inv_primitive_test;

// stimulus for inverter input 
reg inv_inp; 
// output of inverter
wire inv_op;

// inverter instantiation
inv_primitive u_inv_primitive (.inp(inv_inp), .op(inv_op)); 

// initial block 
initial 
  begin 
        inv_inp = 0; 
    #10 inv_inp = 1; 
    #10 inv_inp = 0;
    #10 $finish; 
  end 
endmodule 

