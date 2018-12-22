=begin
 @author: aaditkamat
 @date: 22/12/2018
=end

def short_solution(str)
  str === str.reverse
end

def long_solution(str)
  reverse = ''
  i = 0
  until i >= str.length do
    reverse.insert(0, str[i])
    i += 1
  end
  reverse === str
end
