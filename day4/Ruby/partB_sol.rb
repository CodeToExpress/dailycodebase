=begin
@author: aaditkamat
@date: 25/12/2018
=end
def most_frequent_character(str)
	if str === nil or not str.class === String
		nil
	end
	counts = {}
	str.each_char do |ch|
		if not counts.key?(ch)
			counts[ch] = 1
		else
			counts[ch] = counts[ch] + 1
		end
	end
	counts.key(counts.values.max)
end

print "Enter a string: "
str = gets
str.chomp!
puts "The most frequent character in #{str} is : #{most_frequent_character(str)}"