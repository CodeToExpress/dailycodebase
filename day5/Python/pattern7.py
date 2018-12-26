'''
 * @author: ashwek
 * @date: 26/12/2018
'''

def pattern7(num):
    Upper = []
    for i in range(1, num+1):
        Upper.append("* " * (num-i+1) +  #Left Triangle
                    "    "*(i-1) + #Space
                    "* " * (num-i+1)  #Right Triangle
                    )

    for i in Upper:  # Upper Half
        print(i)
    for i in Upper[::-1]:  # Lower Half (Reverse of Upper Half)
        print(i)

pattern7(4)
