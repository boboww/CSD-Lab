module and_21_all(in1, in2, out);

input in1, in2;
output out;

assign out = in1 & in2;

endmodule

module dff_all(q, d, clk);
	
input d, clk;
output q;
reg q;

always @(posedge clk) 
// positive edge triggered
begin
	q = d;
end
	
endmodule

module inv_primitive_all(inp, op);

//Declare inputs/outputs
input inp;
output op;

//Set op as the inverse of inp
not(op,inp);

endmodule

module inverter_all(inp, op);

// port definitions
input inp; 
output op;

// concurrent assignment statement
assign op = ~inp; 

// indicates the end of a module
endmodule

module mux_21_beh_all(mux_in, sel, mux_out);

//Declare inputs/outputs
input sel;
input [1:0] mux_in;
output mux_out;

reg mux_out;

always @ (sel or mux_in) begin

	if (sel == 1'b0) begin
		mux_out = mux_in[0];
	end
	else if (sel == 1'b1) begin
		mux_out = mux_in[1];
	end
	
end

endmodule

module mux_21_case_all(mux_in, sel, mux_out);

//Declare inputs/outputs
input sel;
input [1:0] mux_in;
output mux_out;

reg mux_out;

always @ (sel or mux_in) begin

	case(sel)
		1'b0: mux_out = mux_in[0];
		1'b1: mux_out = mux_in[1];
		default: mux_out = 1'bz;
	endcase
	
end

endmodule

module mux_21_simple_all(mux_in, sel, mux_out);

//Declare inputs/outputs
input sel;
input [1:0] mux_in;
output mux_out;

assign mux_out = (sel) ? mux_in[1] : mux_in[0];

endmodule
