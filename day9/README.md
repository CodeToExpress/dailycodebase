![cover](./cover.png)

# Day 9 - Smallest Substring Problem

**Question** -- Given an array of unique characters and a string, write a program to find the smallest substring of the given string which contains all the characters of the array.

**Example**

```
input: 
    arr = [a, b, c]
    str = "abyuxabyteqaebczt"
output: "aebc"
```

![ques](./ques.png)

## JavaScript Implementation

### [Solution 1](./JavaScript/sol1.js)

```js
/**
 * @author MadhavBahlMD
 * @date 01/01/2019
 * METHOD (Using Array)
 * - Initalize an empty array `strArr` that will store all the substrings that contains all the array elements
 * - iterate over each character of string and check whether it is present in the array
 * - If it is not present in the array, then continue, else duplicate the array into another temporary array `tempArr` and remove the current letter from the temp arr
 * - Take another variable j, and iterate over the rest of the string till the last remaining element in the tempArr, and keep appending each character in some temporary strinig.
 * - Stop the iteration if either it is the end of the string, or tempArr is empty
 * - if the current (temporary) string contains all elements of the array, store push it to `strArr`
 * - After the iterations are complete 
 */

function smallestSubstr (str, arr) {
    let strArr = [],
        strLen = str.length;

    // iterate over the string to find any match
    for (let i=0; i<strLen; i++) {
        // Check whether the current letter exists in array
        let pos = arr.indexOf(str[i]);
        // if there is only one character in the array return that as the smallest substring
        if (arr.length === 1 && str[i] === arr[0])  return str[i];

        // Check for the remaining characters
        if (pos >= 0) {
            // Duplicate the arr (To Prevent Shallow Copy)
            let tempArr = JSON.parse(JSON.stringify(arr));

            // Append to a temporary string and remove that element from tempArr
            let currentStr = tempArr[pos];
            tempArr.splice (pos, 1);

            // Iterate over the remaining string elements
            let j=i+1, flag = 0;
            while (j<strLen) {
                let nextPos = tempArr.indexOf(str[j]);
                currentStr += str[j];
                if (nextPos >= 0) {
                    tempArr.splice (nextPos, 1);
                }
                if (tempArr.length<=0) {
                    flag = 1;
                    break;
                }
                j++;
            }

            if (flag === 1)  strArr.push (currentStr);
        }
    }

    // Return empty string if strArr is empty
    if (strArr.length === 0)   return "";

    // find the minimum index in cntArr
    let minCntIndex = 0;
    for (let i=1; i<strArr.length; i++) {
        if (strArr[minCntIndex].length > strArr[i].length) {
            minCntIndex = i;
        }
    }

    return (strArr[minCntIndex]);
}

console.log (smallestSubstr ('abyuxabyteqaebczt', ['a','b','c']));
console.log (smallestSubstr ("abd", ['x','y','z']));
console.log (smallestSubstr ("x", ['x']));
console.log (smallestSubstr ("afekbtcodebancfeger", ["a","b","c"]));
```

## Java Implementation

### [Solution](./Java/minSubstring.java)

```java
/**
 * @date 01/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class minSubstring {
    
    public static boolean check (String s,char []c)
    {
        String str=new String(c);int k=0;
        for(int i=0;i<c.length;i++)
        {
            if(s.contains(str.substring(i,i+1)))
              k++;  
        }
        if(k==c.length)
            return true;
        else
            return false;
    }
    
    public static void generate(String str,char c[]) {
        String s;int min;
        min=str.length();String s1="";
        for(int i=0;i<=str.length()-1;i++)
        {
            for(int j=i+1;j<=str.length();j++)
            {
                s=str.substring(i,j);
                if(check(s,c)==true)
                {
                    if(min>=s.length())
                    {
                        min=s.length();
                        s1=s;
                    }
                }
            }
        }
        System.out.println(s1);
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;int i,n;
        System.out.println("Enter a string");
        s=sc.next();
        System.out.println("Enter size of character array");
        n=sc.nextInt();
        char a[]=new char[n];
        for(i=0;i<n;i++)
            a[i]=sc.next().charAt(0);
        generate(s,a);
    }
}
```

### Have Another solution?

The beauty of programming lies in the fact that there is never a single solution to any problem.

In case you have an alternative way to solve this problem, do contribute to this repository :)