'''
  @author: profgrammer 
  @date: 30-12-2018
'''

n = int(input())

for i in range(1, n+1):
  if(i % 15 == 0):
    print("Fizz Buzz")
  elif(i % 5 == 0):
    print("Buzz")
  elif(i % 3 == 0):
    print("Fizz")
  else:
    print(i)

