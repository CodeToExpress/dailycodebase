"""
  @author : imkaka
  @date : 28/12/2018

  # Merges the Insert/Remove and Replace Operation in One.
  # Insert and Remove are Identical Operation logically.
"""

import sys
import math


def oneEditDistance(str1, str2):
    if(abs(len(str1) - len(str2)) > 1):
        return False
    short = str1 if len(str1) < len(str2) else str2
    longg = str1 if len(str1) > len(str2) else str2

    id1 = 0
    id2 = 0
    flag = False

    while(id2 < len(longg) and id1 < len(short)):
        if(short[id1] != longg[id2]):
            if(flag):
                return False
            flag = True
            if(len(short) == len(longg)):
                id1 += 1
        else:
            id1 += 1
        id2 += 1
    return True


def main():
    strings = input().split(' ')
    str1 = strings[0]
    str2 = strings[1]

    print(f"{str1} , {str2} : {oneEditDistance(str1, str2)}.")

    print(f" {'abcd'} , {'acd'} : {oneEditDistance('abcd', 'acd')}.")
    print(f"{'cake'} , {'bake'} : {oneEditDistance('cake', 'bake')}.")
    print(f"{'sue'} , {'chikuu'}: {oneEditDistance('sue', 'chikuu')}.")


if __name__ == '__main__':
    main()
