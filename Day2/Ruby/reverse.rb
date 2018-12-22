=begin
 @author: aaditkamat
 @date: 22/12/2018
=end

def short_solution(str)
  if str.class != String or str === nil
    return nil
  end
  str.reverse
end

def long_solution_iterative(str)
  if str.class != String or str === nil
    return nil
  end
  reverse = ''
  i = 0
  until i >= str.length do
    reverse.insert(0, str[i])
    i += 1
  end
  reverse
end

def long_solution_recursive(str)
  if str.class != String or str === nil
    return nil
  end
  if str === ''
    return ''
  end
  return long_solution_recursive(str[1..-1]) + str[0]
end


