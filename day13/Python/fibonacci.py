'''
@author spreeha
@date 07/01/98
'''
n=int(input())
def fibonacci(n):
    if n>=1 and n<=2:
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)
for i in range(1,n):
    t=fibonacci(i)
    print(t,end=", ")
print(fibonacci(n))
