=begin
@author: aaditkamat
@date: 27/12/2018
=end

def check_anagram(first_str, second_str)
    first_word_dict = {}
    second_word_dict = {}
    first_str.gsub!(" ", "").downcase!
    second_str.gsub!(" ", "").downcase!
    first_str.each_char do |ch|
        if first_word_dict.has_key?(ch)
            first_word_dict[ch] += 1
        else
            first_word_dict[ch] = 1
        end
    end
    second_str.each_char do |ch|
        if second_word_dict.has_key?(ch)
            second_word_dict[ch] += 1
        else
            second_word_dict[ch] = 1
        end
    end
    first_word_dict == second_word_dict
end

puts "Enter two strings: "
first_str = gets().chomp
second_str = gets().chomp
puts "\nAre #{first_str} and #{second_str} anagrams? #{check_anagram(String.new(first_str), String.new(second_str))}"