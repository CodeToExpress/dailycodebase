'''
@author: aaditkamat
@date: 27/12/2018
'''

#short version
from string import capwords
def capitalize_sentence_short(string):
    return capwords(string)

#slightly long version
def capitalize_sentence_long(string):
    new_string = ''
    for word in string.split(' '):
        new_string += word.capitalize() + ' '
    return new_string

print("Enter a string: ", end= ' ')
string = input()
print("String \'", string, "\' with first letter of each word capitalized (short version): ", capitalize_sentence_short(string), sep='')
print("String \'", string, "\' with first letter of each word capitalized (slightly long version): ", capitalize_sentence_long(string), sep='')