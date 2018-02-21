module fulladd4bit(A_in, B_in, C_in, C_out, S_out);
    
    input   C_in;
    input   [3:0] A_in;
    input   [3:0] B_in;
    output  [3:0] S_out;
    output  C_out;
    
    assign   {C_out, S_out} = A_in + B_in + C_in;
    
endmodule
