"""
* @author: Shashank Jain
* @date: 25/12/2018
"""
a=input("Enter the string to count frequent occuring characters?")
b=list(a.replace(" ","").lower())
c=[]
for i in b:
    d=(i,b.count(i))
    c.append(d)

e=dict(list(set(c)))
f=max(e)
g=max(e.values())
print("maximum occurence is of {0}:{1}".format(f,g))

