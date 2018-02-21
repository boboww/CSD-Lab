module nand_21(inp_a, inp_b, nand_out);

//Inputs to th edesign
input inp_a, inp_b;
//output
output nand_out;

//This wire will connect the and output with the inverter input
wire and1_inv1;

//Declare the 'and' instance, name it andl
and_21 and1(
	.in1(inp_a),
	.in2(inp_b),
	.out(and1_inv1) );
	
//Declare the 'inverter' instance, name it inv1
inverter inv1(
	.inp(and1_inv1),
	.op(nand_out) );

endmodule
