'''
 * @author: ashwek
 * @date: 21/12/2018
'''

Str = input("Enter a string : ")

print(Str, "is", end=" ")

if( Str != Str[::-1] ):
    print("Not", end=" ")

print("Palindrome")
