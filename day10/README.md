![cover](./cover.png)

# Day 10 -- String Permutation Problem

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

### [Solution using recursion](./JavaScript/stringPermute.js)

```js
function stringPermutations (str) {
    let permutations = [];

    if (str.length <= 1) {
        permutations.push (str);
        return permutations;
    } else {
        for (let i=0; i<str.length; i++) {
            let start = str[i],
                remainingString= str.slice(0, i) + str.slice(i+1),
                permutationsforRemainingString = stringPermutations(remainingString);
            
            for (let j=0; j<permutationsforRemainingString.length; j++) {
                permutations.push (start + permutationsforRemainingString[j]);
            }
        }
    }

    return permutations;
}

console.log (stringPermutations('123'));
```

### [Solution using backtracking](./JavaScript/stringPermute2.js)

```js
/**
 * METHOD -- Backtracking
 * Algorithm taken from GeeksForGeeks (https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/)
 * Implemented in JS by @MadhavBahlMD
 * @date 02/01/2019
 */

function swap (str, pos1, pos2) {
    // console.log (`pos1 = ${pos1}, pos2 = ${pos2} old`, str);
    str = str.split('');
    let temp = str[pos1];
    str[pos1] = str[pos2];
    str[pos2] = temp;
    str = str.join('');
    // console.log ('new str', str);
    return str;
}

function stringPermutations (str, start, end) {
    if (start === end) {
        console.log (str);
    } else {
        for (let i=start; i<end; i++) {
            str = swap (str, start, i);
            stringPermutations (str, start+1, end);
            str = swap (str, i, start);
        }
    }
}

let inputStr = '123';
stringPermutations (inputStr, 0, inputStr.length);
```

### [Solution by @Karthikeyan](./JavaScript/sol.js)

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

### [Solution1](./Python/permutations.py)
```python
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
```

### [Solution 2 by @vishalshirke7](./Python/permutations1.py)
```python
from itertools import permutations
"""
  @author : vishalshirke7
  @date : 02/01/2019
  
  This solution makes use of python's in-build permutations function from itertools module
  It takes two arguments 1st is the list on which permutation is to be performed and 
  2nd is the length of the permutation
"""

ip_str = input()
perm = permutations(list(ip_str), len(ip_str))
for i in set(list(perm)):
    print("".join(map(str, i)))
```

### [Solution 3 by @ashwek](./Python/st_permutations.py)

```py
"""
  * @author: ashwek
  * @date 2/1/2019
"""
from itertools import permutations

String = "123"

for each in permutations(String):
	print(''.join(each))

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

## Python Implementation

### [Solution](./Python/permutations.py)

```py
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

### [Solution by @imkaka](./C++/allPermutation.cpp)

```cpp

/*
* @author : imkaka
* @date   : 2/1/2019
*/

#include <bits/stdc++.h>
using namespace std;

// std::rotate, Rotation will help us to rearange the chars.

void allPermutation(string str, string out)
{

    if (str.size() == 0)
    {
        cout << out << endl;
        return;
    }


     for (int i = 0; i < str.size(); i++)
    {
        // Remove first character from str and
        // add it to out
        allPermutation(str.substr(1), out + str[0]);

        // Rotate string in a way second character
        // moves to the beginning.
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

int main(){

    allPermutation("abcde", "");
    allPermutation("1234", "");
    allPermutation("beyounic", "");

    return 0;
}
```
### [Solution by @YashMeh](./C++/day10AllPermutations.cpp)

```cpp
/*
* @author : YashMeh
* @date   : 28/1/2019
*/
#include<bits/stdc++.h>
using namespace std;
//Using STL
void permute(string s)
{
   sort(s.begin(),s.end());
   do
   {
      cout<<s<<endl;
   } while (next_permutation(s.begin(),s.end()));
}
//Using recursion
void permute(string smallPart,int n,string firstChar)
{
   if(n==1)
   {
      cout<<firstChar+smallPart<<endl;
      return;
   }
   for(int i=0;i<n;i++)
   {
      permute(smallPart.substr(1),n-1,firstChar+smallPart[0]);
      rotate(smallPart.begin(),smallPart.begin()+1,smallPart.end());
   }
}
main()
{
   string s="1234";
   string r="";
   permute("1234");
   permute(s,s.size(),r);
   
}
```
