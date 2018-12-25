""" 
 * @author: Shashank Jain
 * @date: 25/12/2018
"""
a=input("Enter the string to count no. of vowels?")
b=list(a.replace(" ","").lower())
c=['a','e','i','o','u']
count=0
for i in b:
    for j in c:
        if (j==i):
            count=count+1
print(count)

