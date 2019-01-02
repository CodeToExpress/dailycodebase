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
/*
* @author : Karthikeyan
* @date : 02/01/2019
*/

function permut(string) {
    if (string.length < 2) return string; // This is our break condition

    var permutations = []; // This array will hold our permutations

    for (var i=0; i<string.length; i++) {
        var char = string[i];

        // Cause we don't want any duplicates:
        if (string.indexOf(char) != i) // if char was used already
            continue;           // skip it this time

        var remainingString = string.slice(0,i) + string.slice(i+1,string.length); //Note: you can concat Strings via '+' in JS

        for (var subPermutation of permut(remainingString))
            permutations.push(char + subPermutation)

    }
    return permutations;
}

permut('123');
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

## Java Implementation

### [Solution](./Java/StringPermutations.java)

```java
/**
 * @date 03/01/19
 * @author spattk ( Sitesh Pattanaik )
 */
import java.util.*;

class StringPermutations {
    
    static void printArr(char[] arr){
        for(char x : arr){
            System.out.print(x);
        }
    }
    
    static void printAllPermutationsUtil(String str, boolean[] visited, char[] res, int index){
        
        if(index==str.length())
        {
            printArr(res);
            System.out.println();
            return;
        } 
        
        for(int i=0;i<str.length();i++)
        {
            if(visited[i]){
                continue;
            }
            res[index] = str.charAt(i);
            visited[i] = true;
            printAllPermutationsUtil(str, visited, res, index+1);
            visited[i] = false;
        }        
    }
    
    static void printAllPermutations(String str){
        int n = str.length();
        boolean[] visited = new boolean[n];
        Arrays.fill(visited, false);        
        char[] res = new char[n];        
        printAllPermutationsUtil(str, visited, res, 0);
    }
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
	    String str = sc.next();
	    char[] temp = str.toCharArray();
	    Arrays.sort(temp);
	    str = new String(temp);
	    printAllPermutations(str);
	    System.out.println(); 
	}
}
```

## C++ Implementation

### [Solution](./C++/permutationday10.cpp)

```cpp
/**
 * @author:divyakhetan
 * @date: 2/1/2019
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  do{
    cout << s << endl;
  }while(next_permutation(s.begin(), s.end()));
}
```
