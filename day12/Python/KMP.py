'''
  @author prateek3255
  @date 05/01/2018
 '''
 
def kmp(string,pattern):
    n=len(string)
    m=len(pattern)
    lps=calculateLPS(pattern)
    i=0
    j=0
    while i<n:
        if pattern[j]==string[i]:
            i+=1
            j+=1
        if j==m:
            return i-j
        elif i<n and pattern[j]!=string[i]:
            if j!=0:
                j=lps[j-1]
            else:
                i+=1
    return -1

def calculateLPS(pattern):
    lps=[0]*len(pattern)
    i=1
    lenPat=0
    while i<len(pattern):
        if pattern[i]==pattern[lenPat]:
            lenPat+=1
            lps[i]=lenPat
            i+=1
        else:
            if lenPat!=0:
                lenPat=lps[lenPat-1]
            else:
                lps[i]=0
                i+=1
    return lps

print(kmp("helloworld","hello"))
print(kmp("helloworld","hop"))
print(kmp("ABABDABACDABABCABAB","ABABCABAB"))

