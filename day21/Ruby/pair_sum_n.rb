=begin
@author: aaditkamat
@date: 17/01/2019
=end
def pair_sum(arr, num)
  map = {}
  arr.size.times do |i|
    map[arr[i]] = num - arr[i]
  end
  map.size.times do |i|
    if map.has_key?(map[arr[i]])
      puts [arr[i], map[arr[i]]]
      return
    end
  end
  puts []
end

def handle_input
  print "Enter an array: "
  arr = gets.chomp!.gsub(/\]|\[/, '').split(',').map!{|ele| ele.to_i}
  print "Enter a number: "
  num = gets.chomp!.to_i
  [arr, num]
end

def main
  puts "** Pair Sum N problem **"
  arr, num = handle_input
  pair_sum(arr, num)
end

main
