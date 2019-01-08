'''
        * @author: prateek3255
        * @date: 25/12/18
'''

string=input("Enter the string : ")
characters={}

for char in string:
    if char.lower() in characters:
        characters[char.lower()]+=1
    else:
        characters[char.lower()]=1
        
print("The most occouring character in the string is : ", max(characters,key=characters.get))
