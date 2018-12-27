'''
 * @author: ashwek
 * @date: 26/12/2018
'''

def pattern6(num):
    for i in range(1, num+1):
        print("  "*(num-i) + #Space
                "* " * (2*i-1)  #Triangle
            )
    for i in range(2, num+1):
        print("  "*(i-1) + #Space
                "* " * (2*(num-i)+1)  #Triangle
            )

pattern6(5)
