module binary_bcd_2(bin_in, digit_1, digit_2);
  
  input [6:0] bin_in;
  output [3:0] digit_1;
  output [3:0] digit_2;
  
  // Binary-to-BCD logic goes here
  for(i = 6, i >=0, i--)
  begin
	if (digit_1 >=5)
		digit_1 += 3;
	if (digit_2 >=5)
		digit_2 +=3;
	
	digit_1 = digit_1 << 1;
	digit_1[0] = digit_2[3];
	digit_2 = digit_2 << 1;
	digit_2[0] = binary[i]
   end
  
endmodule