'''
Name:Dipto Chakrabarty
Date:17/01/2019
Day 21
Question:Pair Sum N
'''

def pairSumN(l,n):
    t=[]
    k=len(l)
    l.sort()
    print(l)
    #sorting the list (incase list is unsorted)
    for i in range(k-1):
        #using nested list to loop through elements
        for j in range(i+1,k):
            s=l[i]+l[j]
            if(s==n):
            #checking if sum of elements is equal to required no
                t=[l[i],l[j]]
                return t
                #return list with required elements
    return t
    #else returns empty list
l=list(map(int,input().split()))
#taking the array input
num=int(input())
#desired sum needed
a=pairSumN(l,num)
print(a)


