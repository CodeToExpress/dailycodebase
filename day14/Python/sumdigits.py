"""
  @author : vishalshirke7
  @date : 08/01/2019
"""


def sum_of_digits(n):
    if n <= 0:
        return n
    else:
        return (n % 10) + sum_of_digits(n // 10)


print(sum_of_digits(int(input())))
