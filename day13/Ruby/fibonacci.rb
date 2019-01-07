def fibonacci_recursive_value(num, array, ctr)
  if num < 1
    return "Incorrect num #{num} for fibonacci sequence"
  end
  if num == 1 or num == 2
    array[num - 1] = 1
    return array[num - 1]
  end
  if array[num - 2] != 0 and array[num - 1] != 0
    return array[num - 2] + array[num - 3]
  elsif array[num - 2] != 0
    array[num - 3] = fibonacci_recursive_value(num - 2, array, ctr + 1)
  elsif array[num - 3] != 0
    array[num - 2] = fibonacci_recursive_value(num - 1, array, ctr + 1)
  else
    array[num - 2] = fibonacci_recursive_value(num - 1, array, ctr + 1)
    array[num - 3] = fibonacci_recursive_value(num - 2, array, ctr + 1)
  end
  value = array[num - 2] + array[num - 3]
  value
end

def fibonacci_recursive_sequence(num, arr)
  if num < 1
    return fibonacci_recursive_value(num, arr, 0)
  end
  start = 1
  print "The sequence is: "
  until start > num do
    if start < num
      print"#{fibonacci_recursive_value(start, Array.new(arr), 0)}, "
    else
      puts "#{fibonacci_recursive_value(start, Array.new(arr), 0)}"
    end
    start += 1
  end
end

def fibonacci_iterative_sequence(num)
  if num < 1
    return "Incorrect num #{num} for fibonacci sequence"
  end
  start = 1
  print "The sequence is: "
  until start > num do
    if start < num
      print"#{fibonacci_iterative_value(start)}, "
    else
      puts "#{fibonacci_iterative_value(start)}"
    end
    start += 1
  end
end

def fibonacci_iterative_value(num)
  if num < 1
    return "Incorrect num #{num} for fibonacci sequence"
  end
  if num == 1 || num == 2
    return 1
  end
  first = 1
  second = 1
  ctr = 2
  until ctr >= num do
    first += second
    ctr += 1
    if ctr == num
      return first
    end
    second += first
    ctr += 1
  end
  second
end

def main
  print("Enter an integer: ")
  num = gets.chomp!.to_i
  a = []
  a.fill(0, 0, num)
  puts "The number at position #{num} of fibonacci sequence: #{fibonacci_recursive_value(num, a, 0)}"
  fibonacci_recursive_sequence(num, a)
  puts "The number at position #{num} of fibonacci sequence: #{fibonacci_iterative_value(num)}"
  fibonacci_iterative_sequence(num)
end

main