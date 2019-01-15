'''
 * @author: ashwek
 * @date: 26/12/2018
'''

def pattern5(num):
    for i in range(num):
        print("  "*i + "* "*((num-i)*2-1))

pattern5(5)
