![cover](./cover.png)

# day 12 - Substring Search Problem 

**Question** -- Given a text, and a pattern, find whether the given pattern exists in the text or not.

**Implement various algorithms**

```   
    a) Brute Force Search
    b) Knuth-Morris-Pratt Algorithm
    c) Z Algorithm
    d) Rabin Karp Algorithm
    e) Boyer Moore Algorithm
```

### Example

```
input: text: helloworld, substring: hello
output: 0 (index of 'h', where the substring starts)

input: text: helloworld, substring: hop
output: -1

input: text: abcrxyzgf, substring: xyz
output: 4
```

![ques](./ques.png)

## A) Brute Force Search

### JavaScript Implementation

#### [Solution](./JavaScript/sol.js)

Substring search can be done using brute force. 
In this case, the worst case Time Complexity will be O(m.n), m and n are the lengths of string and pattern respectively.

```js
/**
 * @author MadhavBahlMD
 * @date 04/01/2018
 * In this case, the worst case Time Complexity will be O(m.n), 
 * m and n are the lengths of string and pattern respectively.
 */

function substringSearch (str, pattern) {
    let strLen = str.length,
        patLen = pattern.length,
        flag = 0;

    for (let i=0; i<(strLen-patLen+1); i++) {
        if (str[i] === pattern[0]) {
            flag = 1;
            for (let j=1; j<patLen; j++) {
                if (str[i+j] !== pattern[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag === 1) {
                console.log (i);
                return i;
            } 
        }
    }

    console.log (-1);
    return -1;
}

substringSearch ("helloworld", "world");
substringSearch ("abcrxyzgf", "xyz");
```

### Using Inbuilt JavaScript Methods

#### [Using String.indexOf()](./JavaScript/using_indexof.js)

```js
/**
 * @author MadhavBahlMD
 * @date 05/01/2018
 * METHOD - Using String.indexOf() method
 */

function substringSearch (str, subStr) {
    return str.indexOf(subStr);
}

console.log (substringSearch ("helloworld", "world"));
console.log (substringSearch ("abcrxyzgf", "xyz"));
```

#### [Using String.search()](./JavaScript/using_search.js)

```js
/**
 * @author MadhavBahlMD
 * @date 05/01/2018
 * METHOD - Using String.search() method
 */

function substringSearch (str, subStr) {
    return str.search (subStr);
}

console.log (substringSearch ("helloworld", "world"));
console.log (substringSearch ("abcrxyzgf", "xyz"));
```

### Python Implementation

#### [Solution](./Python/bruteForce.py)

```py
'''
  @author prateek3255
  @date 05/01/2018
 '''

def subStringSearch(string,pattern):
    for i in range(len(string)-len(pattern)):
        if string[i:i+len(pattern)]==pattern:
            return i
    return -1

print(subStringSearch("helloworld","hello"))
print(subStringSearch("helloworld","hop"))
print(subStringSearch("abcrxyzgf","xyz"))
```

### Java Implementation

#### [Solution](./Java/Bruteforce.java)

```java
import java.util.Scanner;

/**
 * Daily Codes Day 12 -- Substring Search (Brute Force Search)
 * @author MadhavBahlMD
 * @date 05/01/2018
 */

public class Bruteforce {
    public static void main(String[] args) {
        // Take input
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the string: ");
        String str = input.next();
        System.out.print("Enter the substrinig to search: ");
        String subStr = input.next();

        // Search the string
        int i, j, flag,
            strLen = str.length(),
            subStrLen = subStr.length();

        for (i=0; i<(strLen-subStrLen+1); i++) {
            flag = 1;
            if (str.charAt(i) == subStr.charAt(0)) {
                for (j=1; j<subStrLen; j++) {
                    if (str.charAt(i+j) != subStr.charAt(j)) {
                        flag = 0;
                        break;
                    }
                }

                // If substring is found, print the index
                if (flag == 1) {
                    System.out.println("Substring \"" + subStr + "\" was found in string \"" + str + "\" at index " + i);
                    System.exit(0);
                }
            }
        }

        System.out.println("Substring \"" + subStr + "\" was not found in string \"" + str);
        System.exit(0);
    }
}
```



## B) Knuth-Morris-Pratt Algorithm

### JavaScript Implementation

#### [Solution](./JavaScript/KMP.js)

```js
To Be Added
```

### Python Implementation

#### [Solution](./Pyhton/KMP.py)

```py
def kmp(string,pattern):
    n=len(string)
    m=len(pattern)
    lps=calculateLPS(pattern)
    i=0
    j=0
    while i<n:
        if pattern[j]==string[i]:
            i+=1
            j+=1
        if j==m:
            return i-j
        elif i<n and pattern[j]!=string[i]:
            if j!=0:
                j=lps[j-1]
            else:
                i+=1
    return -1

def calculateLPS(pattern):
    lps=[0]*len(pattern)
    i=1
    lenPat=0
    while i<len(pattern):
        if pattern[i]==pattern[lenPat]:
            lenPat+=1
            lps[i]=lenPat
            i+=1
        else:
            if lenPat!=0:
                lenPat=lps[lenPat-1]
            else:
                lps[i]=0
                i+=1
    return lps

print(kmp("helloworld","hello"))
print(kmp("helloworld","hop"))
print(kmp("ABABDABACDABABCABAB","ABABCABAB"))
```

### Java Implementation

#### [Solution](./Java/KMPAlgo.java)

```java

/**
 * @date 06/01/1998
 * @author spattk (Sitesh Pattanaik)
 */

import java.util.*;
class StringMatching
{
	static int KMPSearch(String text, String subs){

		int n = subs.length();
		int[] lps = new int[n];

		generateLPSArray(lps,subs);
		n = text.length();
		int m = subs.length();

		int i=0,j=0;
		while(i<n){
			if(text.charAt(i)==subs.charAt(j)){
				i++;
				j++;
			}

			if(j==m){
				//Pattern Found
				return (i-j);
			}

			else if(i<n && text.charAt(i)!=subs.charAt(j)){
				if(j!=0){
					j = lps[j-1];
				}
				else{
					i++;
				}
			}
		}

		return -1;
	}

	static void generateLPSArray(int[] lps, String subs)
	{
		int j = 0;
		int i = 1;
		int n = subs.length();

		while(i<n){
			if(subs.charAt(i)==subs.charAt(j)){
				j++;
				lps[i] = j;
				i++;
			}
			else{
				if(j!=0){
					j = lps[j-1];
				}
				else{
					lps[i] = 0;
					i++;
				}
			}
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String text = sc.next();
		String subs = sc.next();

		System.out.println(KMPSearch(text,subs));
		
	}
}

```

##  C) Z Algorithm

### JavaScript Implementation

#### [Solution](./JavaScript/ZAlgorithm.js)

```js
To Be Added
```

## D) Rabin Karp Algorithm

### JavaScript Implementation

#### [Solution](./JavaScript/rabin_karp.js)

```js
To Be Added
```

## E) Boyer Moore Algorithm

### JavaScript Implementation

#### [Solution](./JavaScript/boyer_moore.js)

```js
To Be Added
```

### Have Another solution?

The beauty of programming lies in the fact that there is never a single solution to any problem.

In case you have an alternative way to solve this problem, do contribute to this repository (https://github.com/CodeToExpress/dailycodebase)