"""
@author: aaditkamat
@date: 07/01/2019
"""

def fibonacci_recursive_value(num, array, ctr):
  if num < 1:
    return f'Incorrect num #{num} for fibonacci sequence'
  if num == 1 or num == 2:
    array[num - 1] = 1
    return array[num - 1]
  if array[num - 2] != 0 and array[num - 1] != 0:
    return array[num - 2] + array[num - 3]
  elif array[num - 2] != 0:
    array[num - 3] = fibonacci_recursive_value(num - 2, array, ctr + 1)
  elif array[num - 3] != 0:
    array[num - 2] = fibonacci_recursive_value(num - 1, array, ctr + 1)
  else:
    array[num - 2] = fibonacci_recursive_value(num - 1, array, ctr + 1)
    array[num - 3] = fibonacci_recursive_value(num - 2, array, ctr + 1)
  return array[num - 2] + array[num - 3]

def fibonacci_recursive_sequence(num, arr):
  if num < 1:
    return fibonacci_recursive_value(num, arr, 0)
  start = 1
  str = 'The sequence is: '
  while start <= num:
    if start < num:
      str += f'{fibonacci_recursive_value(start, arr[:], 0)}, '
    else:
      str += f'{fibonacci_recursive_value(start, arr[:], 0)}'
    start += 1
  print(str)

def fibonacci_iterative_sequence(num):
  if num < 1:
    return f'Incorrect num {num} for fibonacci sequence'
  start = 1
  str = 'The sequence is: '
  while start <= num:
    if start < num:
      str += f'{fibonacci_iterative_value(start)}, '
    else:
      str += f'{fibonacci_iterative_value(start)}'
    start += 1
  print(str)

def fibonacci_iterative_value(num):
  if num < 1:
    return "Incorrect num #{num} for fibonacci sequence"
  if num == 1 or num == 2:
    return 1
  first = 1
  second = 1
  ctr = 2
  while ctr < num:
    first += second
    ctr += 1
    if ctr == num:
      return first
    second += first
    ctr += 1
  return second

def main():
  print("Enter an integer: ")
  num = int(input())
  a = [0] * num
  print(f'The number at position {num} of fibonacci sequence: {fibonacci_recursive_value(num, a, 0)}')
  fibonacci_recursive_sequence(num, a)
  print(f'The number at position {num} of fibonacci sequence: {fibonacci_iterative_value(num)}')
  fibonacci_iterative_sequence(num)

main()