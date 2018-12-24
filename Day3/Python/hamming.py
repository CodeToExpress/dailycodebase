"""
  @author : udisinghania
  @date : 24/12/2018
"""
string1 = input()
string2 = input()
a = 0
if len(string1)!=len(string2):
    print("Strings are of different length")
else:    
    for i in range (len(string1)):
        if string1[i]!=string2[i]:
            a+=1
    print(a)
