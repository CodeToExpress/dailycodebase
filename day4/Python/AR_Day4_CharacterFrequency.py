"""
@author: Abhishek Reddy
@date: 30/01/2019
"""
# Identifying the character which has the highest frequency in given string

inp = input("String to identify frequently appearing character: ")
countChars = [inp.count(i) for i in inp]
print(inp[countChars.index(max(countChars))])
