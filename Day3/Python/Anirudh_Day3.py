"""
  @author : anirudh-jwala
  @date : 12/01/2019
"""
print("Enter two strings: ")
string1 = input()
string2 = input()

counter = 0

# First we shall be check whether or not they are of same length

if len(string1) == len(string2):
    for i in range(len(string2)):
        if string1[i] != string2[i]:
            counter += 1
    print("The Hamming Distance between two strings is", counter)
else:
    print("We require strings of equal length")