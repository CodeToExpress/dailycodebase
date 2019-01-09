'''
  @author prateek3255
  @date 05/01/2018
 '''

def rabinKarp(string,pattern,q=153):
    n=len(string)
    m=len(pattern)
    d=256
    h=d**(m-1)%q
    p=0
    t=0
    
    for i in range(0,m):
        p=(d*p+ord(pattern[i]))%q
        t=(d*t+ord(string[i]))%q
    for i in range(n-m+1):
        if p==t and string[i:i+m]==pattern:
            return i
        
        if i<(n-m):
            t= (d*(t-ord(string[i])*h)+ord(string[i+m]))%q
            if t<0:
                t+=q
    return -1

print(rabinKarp("helloworld","hello"))
print(rabinKarp("helloworld","hop"))
print(rabinKarp("ABABDABACDABABCABAB","ABABCABAB"))




