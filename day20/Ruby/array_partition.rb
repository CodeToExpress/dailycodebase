=begin
@author: aaditkamat
@date: 16/01/2019
=end
def partition(arr, n)
	result = []
	ctr = 0
	until ctr == arr.size do
	  temp = []
		n.times do |i|
			temp += [arr[ctr]]
			ctr += 1
			if ctr == arr.size
				break
			end
	  end
		result += [temp]
  end
	puts "The partitioned array is: #{result}"
end

def main
  print "Enter an array: "
	arr = gets.chomp!.gsub(/\[|\]/, '').split(',').map!{|x| x.to_i}
	print "Enter number of partitions: "
	n = gets.chomp!.to_i
	partition(arr, n)
end

main
