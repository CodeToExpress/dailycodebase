=begin
 @author: aaditkamat
 @date: 22/12/2018
=end

def short_solution(str)
  str.reverse!
end

def long_solution(str)
  result = ''
  i = 0
  until i >= str.length do
    result.insert(0, str[i])
    i += 1
  end
  result
end
