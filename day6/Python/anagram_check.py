'''
@author: aaditkamat
@date: 27/12/2018
'''

def check_anagram(first_str, second_str):
    first_word_dict = {}
    second_word_dict = {}
    first_str = first_str.replace(' ', '').lower()
    second_str = first_str.replace(' ', '').lower()
    for ch in first_str:
        if ch not in first_word_dict:
            first_word_dict[ch] = 1
        else:
            first_word_dict[ch] += 1
    
    for ch in second_str:
        if ch not in second_word_dict:
            second_word_dict[ch] = 1
        else:
            second_word_dict[ch] += 1
    return first_word_dict == second_word_dict

print("Enter two strings: ")
first_str = input()
second_str = input()
print(check_anagram(first_str, second_str))
