"""
author: @aaditkamat
date: 15/01/2019
"""
import sys
sys.path.append('../../day18/Python')

from frequency_counter import convert_input_array_to_list, handle_input
from random import randint

def fisher_yates(lst):
    for i in range(len(lst) - 1, 0, -1):
        swap_index = randint(0, i)
        temp = lst[swap_index]
        lst[swap_index] = lst[i]
        lst[i] = temp
    print(lst)

def main():
    lst = handle_input('an')
    fisher_yates(lst)