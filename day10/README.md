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

## Java Implementation

### [Solution](./Java/Permutation.java)

```java
/**
 * @date 02/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Permutation {
    public static void permute(char []arr,int size,int n)
    {
        char b;int i;
        if(size==1)
        {
            for(i=0;i<n;i++)
                System.out.print(arr[i]);
            System.out.println();
        }
        for(i=0;i<size;i++)
        {
            permute(arr,size-1,n);
            if(size%2==1)
            {
                b=arr[0];
                arr[0]=arr[size-1];
                arr[size-1]=b;
            }
            else
            {
                b=arr[i];
                arr[i]=arr[size-1];
                arr[size-1]=b;
            }
        }
    }
    public static void main(String []args)
    {
        String s;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string");
        s=sc.next();
        char []arr=s.toCharArray();
        System.out.println("The permutations are ");
        permute(arr,arr.length,arr.length);
    }
}
```