=begin
@author: aaditkamat
@date: 07/01/2019
=end

def factorial_recursive(num, result)
  if num < 0
    return "Factorial of #{num} is undefined"
  end
  if num === 0
    return result
  end
  factorial_recursive(num - 1, result * num)
end

def factorial_iterative(num)
  if num < 0
    return "Factorial of #{num} is undefined"
  end
  result = 1
  i = 1
  until i > num do
    result *= i
    i += 1
  end
  result
end

def main
  print "Enter an integer: "
  num = gets.chomp!.to_i
  puts "Factorial of #{num} is: #{factorial_recursive(num, 1)}"
  puts "Factorial of #{num} is: #{factorial_iterative(num)}"
end

main