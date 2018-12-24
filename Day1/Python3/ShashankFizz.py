'''
        * @author: Shashankjain12
        * @date: 21/12/18
'''
print("Fizz Buzz")
n=int(input("Enter the number?"));
for i in range(1,n+1):
    if((i%3)==0 and (i%5)==0):
        print("Fizzbuzz ")
    elif((i%3)==0):
        print("fizz ")
    elif ((i%5)==0):
        print("buzz ")
    else:
        print(i)

