#Implementaed in Python3 by @hiteshsubnani0128
#reffered geekforgeeks.com
#@date 10/01/2019

def toh(n,a,b,c):
    if n == 1:
        print("Move disk 1 from rod",a,"to rod",c)
        return
    toh(n-1, a, b, c)
    print("Move disk",n,"from rod",a,"to rod",b)
    toh(n-1, a, b, c)

num = int(input("enter a number"))
if num == 0:
    print("Not Possible")
else:
    toh(num,'a','b','c')
