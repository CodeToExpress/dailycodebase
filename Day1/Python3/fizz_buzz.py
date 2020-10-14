'''
 * @author: Pratyush Raj <pratyush.raj@ug.cusat.ac.in>
 * @github: https://github.com/rajpratyush
 * @date: 14/10/2020
'''

def program1(j):
    i=1
    while(i<=j):
        if (i%3==0) and (i%5!=0):
            print("Fizz")
        elif (i%3!=0) and (i%5==0):
            print("Buzz")
        elif (i%3==0) and(i%5==0):
            print("FizzBuzz")
        else:
            print(i)
        i=i+1
        
if __name__ == '__main__':
    program1(int(input("Enter the last number:")))
