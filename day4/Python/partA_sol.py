'''
    * @author: prateek3255
    * @date: 25/12/2018
'''

string=input("Enter the String : ")
vowels=['a','e','i','o','u']

count=0

for char in string:
    if char.lower() in vowels:
        count+=1

print("Number of vowels in the string are : ",count)
