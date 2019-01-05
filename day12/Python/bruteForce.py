'''
  @author prateek3255
  @date 05/01/2018
 '''

def subStringSearch(string,pattern):
    for i in range(len(string)-len(pattern)):
        if string[i:i+len(pattern)]==pattern:
            return i
    return -1

print(subStringSearch("helloworld","hello"))
print(subStringSearch("helloworld","hop"))
print(subStringSearch("abcrxyzgf","xyz"))
