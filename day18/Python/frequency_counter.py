"""
author: @aaditkamat
date: 15/01/2019
"""
def count_frequencies(lst):
  frequency_dictionary = {}
  
  for num in lst:
    if num not in frequency_dictionary:
      frequency_dictionary[num] = 1
    else:
      frequency_dictionary[num] += 1

  for key in frequency_dictionary:
    print(f'\'{key}\' is present {frequency_dictionary[key]} time(s)')

def get_input(word):
  print(f'Enter {word} input array: ', end='')
  input_array = input()
  return input_array

def handle_input(word):
  input_array = get_input(word)
  return convert_input_array_to_list(input_array)

def convert_input_array_to_list(input_array):
  return list(map(lambda x: int(x), input_array.strip('[').strip(']').split(',')))

def main():
  lst = handle_input('an')
  count_frequencies(lst)