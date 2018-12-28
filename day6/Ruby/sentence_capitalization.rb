=begin
@author: aaditkamat
@date: 27/12/2018
=end

def capitalize_sentence(string)
    new_string = ''
    string.split(' ').each do |word|
        new_string += word.capitalize + ' '
    end
    new_string
end

print"Enter a string: "
string = gets().chomp
puts "String \" #{string} \" with first letter of each word capitalized: #{capitalize_sentence(string)}"