"""
@author : Abhishek Reddy
@date : 30/01/2019
"""

# "[a,e,i,o,u]" are the set of vowels in English language

inp = input("String to calculate vowels:")
vcount = 0
for i in inp:
    if i=='a' or i == 'e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U':
        vcount += 1
print(vcount)
