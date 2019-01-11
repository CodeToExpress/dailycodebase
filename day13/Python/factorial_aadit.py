"""
@author: aaditkamat
@date: 07/01/2019
"""

def factorial_recursive(num, result):
  if num < 0:
    return "Factorial of #{num} is undefined"
  if num == 0:
    return result
  return factorial_recursive(num - 1, result * num)

def factorial_iterative(num):
  if num < 0:
    return "Factorial of #{num} is undefined"
  result = 1
  i = 1
  while i <= num:
    result *= i
    i += 1
  return result

def main():
  print("Enter an integer: ")
  num = int(input())
  print(f'Factorial of {num} is: {factorial_recursive(num, 1)}')
  print(f'Factorial of {num} is: {factorial_iterative(num)}')

main()