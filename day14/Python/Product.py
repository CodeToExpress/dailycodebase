"""
@author: NormalVad
@date: 25/10/2020
"""

def product(a,b):
    if(a==0 or b==0):
        return 0
    elif(b == 1):
        return a
    elif(a<0 and b<0):
        a = a*(-1)
        b = b*(-1)
        return a + product(a,b-1)
    elif(a>0 and b>0):
        return a+product(a,b-1)
    elif(a<0 and b>0):
        a = a*(-1)
        x = a+product(a,b-1)
        return x*(-1)
    else:
        b = b*(-1)
        x = a+product(a,b-1)
        return x*(-1)

print("Enter two numbers to be multiplied seperated by a space")
(a,b) = list(map(int, input().split()))
print(product(a,b))
