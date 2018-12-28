=begin
@author: aaditkamat
@date: 28/12/2018
=end

def can_replace_a_character(str1, str2) 
	if (str1.size() != str2.size()) 
		return false
	end
	change = 0
	(str1.size()).times do |i|
		if (not str1[i] === str2[i]) 
			change += 1
		end
	end	
	return change === 1
end

def is_a_substring(str1, str2) 
	if (str1.empty?)
		return true
	end

	if (not str1[0] === str2[1] and not str1[0] === str2[0]) 
		return false
	end

	found = str2.index(str1[0])
		
	if (found == 1) 
		return str2[1..str2.length][str1] === str1
	end

	i = 0
	j = 0
	ctr = 0
	until i >= str1.length do 
		if j >= str2.length
			return false
		end
		if (not str1[i] === str2[j] and ctr === 0) 
			ctr += 1
			j += 1
			next
		end
		if (not str1[i] === str2[j]) 
			return false
		end
		i += 1
		j += 1
	end
	true
end

def can_add_a_character(str1, str2) 
	str2.size() - str1.size() === 1 and is_a_substring(str1, str2)  
end

def can_delete_a_character(str1, str2) 
	str1.size() - str2.size() === 1 and is_a_substring(str2, str1)
end

def are_one_edit_away(str1, str2) 
	if (str1 === str2) 
		return true
	end
	can_replace_a_character(str1, str2) or can_add_a_character(str1, str2) or can_delete_a_character(str1, str2)
end 

def main
	puts "Enter two strings: "
	str1 = gets().chomp!
	str2 = gets().chomp!
	puts "Are \"#{str1}\" and \"#{str2}\" one edit away? #{are_one_edit_away(str1, str2)}"
end

main