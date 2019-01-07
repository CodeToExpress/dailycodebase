'''
 * @author: ashwek
 * @date: 26/12/2018
'''

def pattern4(num):
    for i in range(1, num+1):
        print("  "*(num-i) + #Space
                " ".join(map(str, list(range(i, i+i)))) +  #Number-Sequence
                " " + " ".join(map(str, list(range(i+i-2, i-1, -1))))  #Reverse-Number-Sequence
            )
            
pattern4(5)
