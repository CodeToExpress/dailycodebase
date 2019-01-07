'''
@author: aaditkamat
@date: 02/01/2019
'''

def permutations(string):
    if (len(string) <= 1):
        return {string}
    permutation_set = set()
    for i in range(len(string)):
        substring = ''
        for j in range(len(string)):
            if j != i:
                substring += string[j]
        permutation_set |= set(map(lambda x: string[i] + x, permutations(substring)))
    return permutation_set


def printSet(string_set):
    for string in string_set:
        print(string)

def main():
    print('Enter a string: ')
    string = input()
    print(f'The permutations of {string} are:')
    printSet(permutations(string))

main()