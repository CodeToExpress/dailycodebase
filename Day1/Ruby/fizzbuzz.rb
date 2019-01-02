=begin
 @author: aaditkamat
 @date: 21/12/2018
=end

def get_result(num)
  result = ''
  if num % 3 != 0 and num % 5 != 0
    result += num.to_s
  end
  if num % 3 == 0
    result += 'Fizz'
  end
  if num % 5 == 0
    result += 'Buzz'
  end
  result
end

def solution(n)
  n.times do |num|
  p get_result(num + 1)
  end
end
