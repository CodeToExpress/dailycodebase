"""
  * @author : ashwek
  * @date : 27/12/2018
"""

Str1 = input("Enter string 1 = ")
Str2 = input("Enter string 2 = ")

print(Str1, "&", Str2, "are", end=" ")
if( sorted(Str1) != sorted(Str2) ): print("not", end=" ")
print("anagrams")
