![cover](./cover.png)

# Day 10 -- Smallest Substring Problem

**Question** Find all the permutations of the given string

```
Example:
input: 
123

output:
123
132
213
231
312
321
```

![ques](./ques.png)

## JavaScript Implementation

### [Solution](./sol.js)

```js
// To Be Added
```

## Python Implementation

### [Solution](./Python/permutations.py)
```python

'''
@author: aaditkamat
@date: 02/01/2019
'''

def permutations(string):
    if (len(string) <= 1):
        return [string]
    lst = []
    for i in range(len(string)):
        substring = ''
        for j in range(len(string)):
            if j != i:
                substring += string[j]
        lst.extend(list(set(map(lambda x: string[i] + x, permutations(substring)))))
    return lst


def printList(string_list):
    for string in string_list:
        print(string)

def main():
    print('Enter a string: ')
    string = input()
    print(f'The permutations of {string} are:')
    printList(permutations(string))

main()
```