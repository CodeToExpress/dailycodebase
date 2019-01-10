=begin
@author:aaditkamat
@date: 9/1/2019
=end

def fill_table(num)
  table = []

  (num).times do
    table.push([].fill(0, 0, num))
  end

  num.times do |i|
    table[i][0] = 1
  end

  i = 1
  until i >= num do
    j = 1
    until j >= num do
      table[i][j] = table[i - 1][j] + table[i - 1][j - 1]
      j += 1
    end
    i += 1
  end
  table
end

def print_table(table)
  i = 0

  until i >= table.length do
    j = 0
    until j >= table.length do
      if table[i][j] != 0
        print "#{table[i][j]} "
      end
      j += 1
    end
    print "\n"
    i += 1
  end
end

def main
  print "Enter a number:"
  num = gets.chomp!.to_i
  if num >= 1
    table = fill_table(num)
    print_table(table)
  else
    puts "Pascal triangle cannot have #{num} rows"
  end
end

main