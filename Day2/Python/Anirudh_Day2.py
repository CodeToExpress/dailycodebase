'''
 * @author: anirudh-jwala
 * @date: 12/01/2019
'''
def reverse(string):
    return "".join(reversed(string))

print("Enter a string to be reversed: ")
string = input()
print(reverse(string))

print()

print("Palindrome Check")
palindrome = input()
checking_string = reverse(palindrome)
if palindrome == checking_string:
    print("Given string is a palindrome")
else:
    print("Not a palindrome")