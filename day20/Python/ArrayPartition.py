Name:DiptoChakrabarty
Date:16/01/2019
Day20

l=list(map(int,input().split()))
t=[]
k=len(l)
for i in range(0,k,2):
    d=l[i:i+2]
    t.append(d)
    
print(t)
