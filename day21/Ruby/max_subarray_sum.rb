=begin
@author: aaditkamat
@date: 17/01/2019
=end
require_relative 'pair_sum_n'

def max_subarray_sum(arr, num)
  #sort array in descending order
  arr.sort!{|x, y| y <=> x}
  print arr.take(num).sum
end
def main
  puts "** Max Subarray problem **"
  arr, num = handle_input
 max_subarray_sum(arr, num)
end

main