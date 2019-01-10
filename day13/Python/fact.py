'''
@author spreeha
@date 07/01/19
'''
n=int(input())
def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1)
f=factorial(n)
print(f)

    
    
