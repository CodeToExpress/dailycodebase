"""
 * @author: Shashank Jain
 * @date: 24/12/2018
"""

a=input("Enter the first string?")
b=input("Enter the second string?")
c=list(a.replace(" ",""))
d=list(b.replace(" ",""))
k=[i for i,j in zip(c,d) if i!=j]
print("list of unmatched characters are:",k)
print("number of characters not matching are:",len(k))

