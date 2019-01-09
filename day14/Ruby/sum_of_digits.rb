=begin
@author: aaditkamat
@date: 08/01/2019
=end

def sum_of_digits(num, sum)
  if num < 0
    return -1 * sum_of_digits(num.abs, sum)
  end
  if num === 0
    return sum
  end
  sum_of_digits(num / 10, sum + num % 10)
end

def main
  print "Enter a number: "
  num = gets.chomp.to_i
  puts "Sum of digits of #{num} is: #{sum_of_digits(num, 0)}"
end

main