"""
@author:NormalVad
@date:25/10/2020 
"""


def LinearSearch(a,n):
    l = len(a)
    found = False
    i = 0
    while(i<l):
        if(a[i]==n):
            found = True
            break
        else:
            i += 1
    if(found):
        return i
    else:
        return "Undefined"

print("Please input Elements of array in single line seperated by spaces")
arr = list(map(int, input().split()))
print("Input element to be found")
n = int(input())
print(LinearSearch(arr,n))
