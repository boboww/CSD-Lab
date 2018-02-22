module inv_primitive(inp, op);

//Declare inputs/outputs
input inp;
output op;

//Set op as the inverse of inp
not(op,inp);

endmodule
