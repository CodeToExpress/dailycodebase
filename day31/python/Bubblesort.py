```
Name:Dipto Chakrabarty
Topic:Bubble Sort
Date:1/02/2019
```

#taking the array and storing in a list
l=list(map(int,input().split()))
n=len(l)  #length of list
for i in range(n):
    for j in range(n-i-1):
    #sorting based on conditions
        if(l[j]>l[j+1]):
            l[j],l[j+1]=l[j+1],l[j]
print(l)
