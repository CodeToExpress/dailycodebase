'''
@author: aaditkamat
@date: 15/01/2019
'''
from frequency_counter import handle_input, count_frequencies

def count_uniques(frequency_dictionary):
  print(f'Number of unique elements = {len(frequency_dictionary)}')

def main():
  lst = handle_input('an')
  frequency_dictionary = count_frequencies(lst)
  count_uniques(frequency_dictionary)
