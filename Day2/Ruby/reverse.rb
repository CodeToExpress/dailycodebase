=begin
 @author: aaditkamat
 @date: 22/12/2018
=end

def short_solution(str)
  if str.class != String or str === nil
    return false
  end
  str === str.reverse
end

def long_solution_iterative(str)
  if str.class != String or str === nil
    return false
  end
  reverse = ''
  i = 0
  until i >= str.length do
    reverse.insert(0, str[i])
    i += 1
  end
  reverse === str
end

def long_solution_recursive(str)
  if str.class != String or str === nil
    return false
  end
  if str === ''
    return true
  end
  return (str[0] === str[-1] and long_solution(str[1..-2]))
end

