'''
  *author: keivalya
  *date: 25-09-2020
'''

print("******FIZZBUZZ******")
n = int(input("Enter limit for number of digits: "))

for i in range(1, n+1):
    final = ""   # initialization, for later we can simply append another string to it
    if i%3 == 0 :
        final = "Fizz"   # contition for when divided by 3, remainder is zero
    if i%5 == 0:
        final += "Buzz"  # similar confition for 5
    if final :
        print(final)     # when both conditions satisfy
    else:
        print(i)          # when no condition is satisfied
