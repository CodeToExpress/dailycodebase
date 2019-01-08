"""
  @author : vishalshirke7
  @date : 07/01/2019
"""


def factorial(no):
    if no <= 1:
        return 1
    else:
        return no * factorial(no - 1)


n = int(input())
print("factorial of %d is %d" % (n, factorial(n)))

