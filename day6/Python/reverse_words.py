'''
@author: aaditkamat
@date: 27/12/2018
'''

def reverse_words(string):
    new_string = ''
    for word in string.split(' '):
        new_string += word[::-1] + ' '
    return new_string

print("Enter a string: ", end= '')
string = input()
print(reverse_words(string))
