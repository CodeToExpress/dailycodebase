Name:Dipto Chakrabarty
Topic:Combination Sum
Date:1/02/2019

from itertools import combinations_with_replacement
l=list(map(int,input().split())) #taking inputs and storing in list
n=int(input())  #input of required sum
k=len(l)  #length of list
d=[]
for i in range(k):
    t=list(combinations_with_replacement(l,i+1)) #total combinations of the list 
    d.append(t) #adding it to another list

for i in range(len(d)):
    for j in range(len(d[i])):
        if(n==(sum(d[i][j]))):  #checking if list element equals required number
            print(list(d[i][j]))
    
