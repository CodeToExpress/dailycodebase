'''
 * @author: anirudh-jwala
 * @date: 12/01/2019
'''
print("Enter the value of n: ")
n = int(input())
for i in range(1, n+1):
    if i % 3 == 0 and i % 5 == 0:
        print("Fizz Buzz")
    elif i % 3 == 0:
        print("Fizz")
    elif i % 5 == 0:
        print("Buzz")
    else:
        print(i)