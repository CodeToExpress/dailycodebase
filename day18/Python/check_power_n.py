'''
@author:aaditkamat
@date: 15/01/2019
'''
from frequency_counter import handle_input

"""
I wrote a one liner for the check_power_n function thanks to python's generators which is quite messy ;-) 
print(len(list(filter(lambda x: x == 1, map(lambda x: len([num for num in first if x == num ** N]), second)))) == len(second))
"""
def check_power_n(first, second, N):
  count = 0
  for num in first:
    for x in second:
      if x == num ** N:
        count += 1
  print(count == len(second))

def main():
  first = handle_input('first')
  second = handle_input('second')
  print('Enter a number: ', end='')
  N = int(input())
  check_power_n(first, second, N)
