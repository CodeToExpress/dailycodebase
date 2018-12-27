"""
  @author : vishalshirke7
  @date : 25/12/2018
"""

input_str = input()
dictnry = {}
maxCount, maxChar = 0, ''
for char in input_str:
    if char in dictnry.keys():
        dictnry[char] += 1
    else:
        dictnry[char] = 1
    if dictnry[char] > maxCount:
        maxCount = dictnry[char]
        maxChar = char

print(maxChar)

