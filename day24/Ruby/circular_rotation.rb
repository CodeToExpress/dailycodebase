=begin
@author: aaditkamat
@date: 22/01/2019
=end

def check_rotation(first, second)
  if first.length != second.length
    return false
  end
  i = 0
  curr = second.index(first[0])
  if curr == nil
    return false
  end
  i += 1
  curr = (curr + 1) % (first.length)
  until i >= second.length
      if first[i] != second[curr]
        return false
      end
      i += 1
      curr = (curr + 1) % (first.length)
  end
  true
end

def parse_input_array()
  gets.chomp!.gsub(/\]|\[/, '').split(',').map{|s| s.to_i}
end

def main
  print "Enter the first array: "
  first = parse_input_array()
  print "Enter the second array: "
  second = parse_input_array()
  puts check_rotation(first, second)
end

main