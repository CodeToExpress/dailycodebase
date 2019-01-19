"""
author: @aaditkamat
date: 15/01/2019
"""
import sys
sys.path.append('../../day18/Python')

from frequency_counter import convert_input_array_to_list

def get_input(word):
    print (f'Enter set {word}: ', end='')
    input_array = input()
    lst = convert_input_array_to_list(input_array)
    return set(lst)

def calculate_cartesian_product(first_set, second_set):
    result = []
    for num in first_set:
        for other in second_set:
            result.append([num, other])
    print(result)

def main():
    set_A = get_input('A')
    set_B = get_input('B')
    calculate_cartesian_product(set_A, set_B)