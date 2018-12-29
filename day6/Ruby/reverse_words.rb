=begin
@author: aaditkamat
@date: 27/12/2018
=end

def reverse_words(string)
    new_string = ''
    string.split(' ').each do |word|
        new_string += word.reverse + ' '
    end
    new_string
end

print"Enter a string: "
string = gets().chomp
print"Reverse of string #{string}:  #{reverse_words(string)}"
