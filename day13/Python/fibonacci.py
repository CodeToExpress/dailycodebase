"""
  @author : vishalshirke7
  @date : 07/01/2019
"""


# Fibonacci Series using Dynamic Programming
def fibonacci(n):
    if n <= 1:
        return n
    else:
        if fib_series[n - 1] == 0:
            fib_series[n - 1] = fibonacci(n - 1)

        if fib_series[n - 2] == 0:
            fib_series[n - 2] = fibonacci(n - 2)

        fib_series[n] = fib_series[n - 2] + fib_series[n - 1]
    return fib_series[n]


n = int(input())
fib_series = [0, 1]
while len(fib_series) < n + 1:
    fib_series.append(0)
print(fibonacci(n))
if n == 0:
    print(0)
else:
    print(", ".join(map(str, fib_series)))

