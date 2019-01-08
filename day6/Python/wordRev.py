"""
  * @author : ashwek
  * @date : 27/12/2018
"""

def rev(Str, start, end):

    for i in range(0, (end-start)//2):
        Str[i+start], Str[end-i-1] = Str[end-i-1], Str[i+start]

def wordRev(Str):

    Str = list(Str)
    start = 0

    while( True ):

        try: end = Str.index(' ', start)
        except ValueError: break

        rev(Str, start, end)
        start = end+1

    rev(Str, start, len(Str))

    return ''.join(Str)


Str = input("Enter a string = ")

print("Words Reversed =", wordRev(Str))
