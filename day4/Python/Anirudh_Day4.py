"""
  @author : anirudh-jwala
  @date : 12/01/2019
"""
# Finding no of vowels in given string

# a e i o u A E I O U are the vowels in English language

print("String to calculate vowels:")
string = input()
vowels=['a','e','i','o','u', 'A', 'E', 'I', 'O', 'U']
counter = 0

for i in range(len(string)):
    if string[i] in vowels:
        counter += 1

print("No of vowels are ", counter)

print()

print("Most frequently frequently character: ")
