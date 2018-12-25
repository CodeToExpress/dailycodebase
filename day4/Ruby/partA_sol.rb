=begin
@author: aaditkamat
@date: 25/12/2018
=end
def count_vowels(str)
	if str === nil or not str.class === String
		-1
	end
	ctr = 0
	str.downcase!
	vowels = ['a', 'e', 'i', 'o', 'u']
	vowels.each do |vowel|
		 ctr += str.count(vowel)
	end
	ctr
end

print "Enter a string: "
str = gets
str.chomp!
puts "The number of vowels in #{str} is : #{count_vowels(str)}"