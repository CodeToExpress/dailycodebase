'''
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 26/12/2018
'''

def pattern3(num):
    for i in range(1,num+1):
        currentLine = ''
        for j in range(1,i+1):
            currentLine = currentLine + str(j) + ' '
        print(currentLine)

    for i in range(num-1,0,-1):
        currentLine = ''
        for j in range(1,i+1):
            currentLine= currentLine + str(j) + ' '
        print(currentLine)

        
pattern3(4)