'''
 * @author: ashwek
 * @date: 26/12/2018
'''

def pattern8(num):
    Upper = []
    for i in range(1, num+1):
        Upper.append("* "*i +  #Left Triangle
                    "    "*(num-i) + #Space
                    "* "*i  #Right Triangle
                    )

    for i in Upper:  # Upper Half
        print(i)
    for i in Upper[::-1]:  # Lower Half (Reverse of Upper Half)
        print(i)

pattern8(5)
