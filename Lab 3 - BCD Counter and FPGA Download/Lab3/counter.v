// Source template for a simple 7-bit binary counter with
// enable and synchronous reset.

module count_7(enable, reset, clk, count_out);

  output reg [6:0] count_out;
  input enable, reset, clk;

  always @(enable) begin
    if(reset == 1) begin // Reset Condition
      count_out = 0;
    end else if (reset == 0) begin // Run Condition
      count_out = count_out + 1;
    end
  end
  
endmodule
