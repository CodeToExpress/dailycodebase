"""
@author:aaditkamat
@date: 9/1/2019
"""

def fill_table(num):
  table = []

  for i in range(num):
        table.append([0] * num)

  for i in range(num):
    table[i][0] = 1

  for i in range(1, num):
    for j in range(1, num):
      table[i][j] = table[i - 1][j] + table[i - 1][j - 1]

  return table

def print_table(table):
  str = ''
  for i in range(len(table)):
    for j in range(len(table)):
      if table[i][j] != 0:
        str += f'{table[i][j]} '
    str += '\n'
  print(str)

def main():
  print("Enter a number:")
  num = int(input())
  if num >= 1:
    table = fill_table(num)
    print_table(table)
  else:
    print(f'Pascal triangle cannot have {num} rows')

main()