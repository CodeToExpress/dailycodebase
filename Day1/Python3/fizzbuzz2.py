'''
 * @author: ashwek
 * @date: 20/12/2018
'''

n = int(input("Enter limit : "))

for i in range(1, n+1):
    
    output = ""
    if i%3 == 0 :
        output = "Fizz"
    if i%5 == 0:
        output += "Buzz"

    if output :
        print(output)
    else:
        print(i)
