'''
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 26/12/2018
'''

def pattern2(num):
    count = 0
    for i in range(1,num+1):
        currentLine = ''
        for j in range(1,i+1):
            count=count+1
            currentLine = currentLine + str(count) + ' '
        print(currentLine)

pattern2(4)