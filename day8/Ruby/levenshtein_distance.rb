=begin
@author: aaditkamat
@date: 31/12/2018
=end
def ind (m, n)
    m == n ? 0 : 1
end

def dist(first, second)
    first_length = first.length
    second_length = second.length

    m = Array.new(first_length + 1) { Array.new(second_length + 1) }
    (first.length + 1).times do |i|
        m[i][0] = i;
    end
    (second_length + 1).times do |i|
        m[0][i] = i;
    end
    (1..first_length).each do |i|
        (1..second_length).each do |j|
            values = [m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first[i - 1], second[j - 1])];
            values.sort!
            m[i][j] = values[0]
        end
    end
    m[first_length][second_length]
end

def main
    puts "Enter two strings: "
    first = gets.chomp!
    second = gets.chomp!
    puts "The Levenshtein distance between \"#{first}\" and \"#{second}\" is: #{dist(first, second)}"
end

main
