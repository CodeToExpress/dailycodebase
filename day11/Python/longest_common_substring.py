'''
@author: aaditkamat
@date: 03/01/2019
'''
def print_output(str1, str2):
    print(f'The longest common substring in {str1} and {str2} is: {longest_common_substring(str1, str2)}')

def substrings(string):
    lst = []
    n = len(string)
    for i in range(1, n + 1):
        for j in range(n + 1 - i):
            lst.append(string[j : j + i])
    print(set(lst))
    return set(lst)

def longest_common_substring(str1, str2):
    str1_substrings = substrings(str1)
    str2_substrings = substrings(str2)
    common_substrings = str1_substrings & str2_substrings
    if len(common_substrings) == 0:
        common_substrings.add("")
    return max(common_substrings, key = lambda x: len(x))

print_output("abcdefg", "xyabcz")
print_output("XYXYXYZ", "XYZYX")
print_output("abcd", "efgh")   
