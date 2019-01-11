=begin
@author: aaditkamat
@date: 12/01/2019
=end

def hanoi(start_rod, aux_rod, end_rod, num)
  if num < 0
    puts "The number of disks must be a non-negative integer"
    return
  end
  if num == 0
    return
  end
  if num == 1
    puts "Move top most disk from rod #{start_rod} to rod #{end_rod}"
    return
  end
  hanoi(start_rod, end_rod, aux_rod, num - 1)
  hanoi(start_rod, aux_rod, end_rod, 1)
  hanoi(aux_rod, start_rod, end_rod, num - 1)
end

def main
  print "Enter number of disks: "
  num = gets.chomp!.to_i
  print "The sequence of instructions to move #{num} disks where disk 1 is the start rod"
  puts "disk 2 is the auxiliary rod and disk 3 is the end rod are as follows: "
  hanoi(1, 2, 3, num)
end

main