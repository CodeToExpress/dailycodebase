'''
  @author prateek3255
  @date 05/01/2018
 '''
def boyerMoore(string,pattern):
    n=len(string)
    m=len(pattern)
    i=0
    while i<=n-m:
        k=m-1
        j=m+i-1
        while string[j]==pattern[k]:
            k=k-1
            j=j-1
            if k==0:
                return i
        if pattern.rfind(string[j])==-1:
            i=j+1
        else:
            i=max(1,j-pattern.rfind(string[j]))
    return -1

print(boyerMoore("helloworld","hello"))
print(boyerMoore("helloworld","hop"))
print(boyerMoore("abcrxyzgf","xyz"))
print(boyerMoore("ABABDABACDABABCABAB","ABABCABAB"))
