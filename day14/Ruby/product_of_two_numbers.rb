=begin
@author: aaditkamat
@date: 08/01/2019
=end

def product_of_two_numbers(first, second, product)
  if first < 0 and second < 0
    return product_of_two_numbers(-first, -second, product)
  end
  if first == 0 or second == 0
    return product
  end
  if first < 0 or second < 0
    new_first = [first, second].min
    new_second = [first, second].max
    return product_of_two_numbers(new_first, new_second - 1, product + new_first)
  end
  product_of_two_numbers(first, second - 1, product + first)
end

def main
  puts "Enter two numbers: "
  first = gets.chomp.to_i
  second = gets.chomp.to_i
  puts "#{first} * #{second} = #{product_of_two_numbers(first, second, 0)}"
end

main