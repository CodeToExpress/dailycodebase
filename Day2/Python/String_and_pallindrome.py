"""
 * @author Shashank
 * @date 21/12/2018
"""

a=input("Enter the input string:")
d=a.replace(" ","")
c=list(d)
c.reverse()
e="".join(c)
if d==e:
    print("String is pallindrome")
else:
    print("Not a pallindrome")

