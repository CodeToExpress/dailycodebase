"""
  @author : anirudh-jwala
  @date : 12/01/2019
"""

# Pattern 1

'''
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
'''

print("Enter n value")
n = int(input())

def pattern1(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end=" ")
        print()


# Pattern 2
'''
    1
    2 3
    4 5 6
    7 8 9 10
'''
def pattern2(n):
    count = 0
    for i in range(1, n+1):
        for j in range(1, i+1):
            count += 1
            print(count, end=" ")
        print()


# Pattern 3
'''
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
'''
def pattern3(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end=" ")
        print()
    for i in range(n, 1, -1):
        for j in range(1, i):
            print(j, end=" ")
        print()