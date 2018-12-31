![cover](./cover.png)

# Day 8 - Maximum Edit Distance (Levenshtein Distance)

Given two strings, and operations like replace, delete and add, write a program to determine how many minimum operations would it take to convert one string into another string.

**Hint: Use Lavenshtein Distance**

## Example (source: [Wikipedia](https://en.wikipedia.org/wiki/Levenshtein_distance))

For example, the (Minimum Edit) Levenshtein distance between `kitten` and
`sitting` is `3`, since the following three edits change one
into the other, and there is no way to do it with fewer than
three edits:

1. **k**itten → **s**itten (substitution of "s" for "k")
2. sitt**e**n → sitt**i**n (substitution of "i" for "e")
3. sittin → sittin**g** (insertion of "g" at the end).

## Levenshtein distance

Levenshtein distance between two words is the minimum number of single-character edits (insertions, deletions or substitutions) required to change one word into the other. It is named after the Soviet mathematician Vladimir Levenshtein, who considered this distance in 1965.

### Definition

Mathematically, the Levenshtein distance between two strings `a` and `b` (of length `|a|` and `|b|` respectively) is given by ![lev](https://wikimedia.org/api/rest_v1/media/math/render/svg/4cf357d8f2135035207088d2c7b890fb4b64e410) where,

![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/f0a48ecfc9852c042382fdc33c19e11a16948e85)

where
![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/52512ede08444b13838c570ba4a3fc71d54dbce9)
is the indicator function equal to `0` when
![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/231fda9ee578f0328c5ca28088d01928bb0aaaec)
and equal to 1 otherwise, and
![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/bdc0315678caad28648aafedb6ebafb16bd1655c)
is the distance between the first `i` characters of `a` and the first
`j` characters of `b`.

Therefore, the minimum edit distance between `a` and `b` is the last element in the edit distance matrix

Read more at [Wikipedia](https://en.wikipedia.org/wiki/Levenshtein_distance)

![ques](./ques.png)

## JavaScript Implementation

### [Solution](./JavaScript/sol.js)

```js
/**
 * @author MadhavBahlMD
 * @date 31/12/2018
 */

function minEditDist (str1, str2) {
    // Initialize the distance matrix with all zeroes
    let len1 = str1.length,
        len2 = str2.length,
        distMatrix = [];

    for (let i=0; i<=len2; i++) {
        let row = [];
        for (let j=0; j<=len1; j++) {
            // Initialie the edit distance matrix by all zeroes
            row.push(0);
        }
        distMatrix.push(row);
    }

    // Fill the first row
    for (let i=0; i<=len1; i++) {
        distMatrix[0][i] = i;
    }

    // Fill the first column
    for (let j=0; j<=len2; j++) {
        distMatrix[j][0] = j;
    }

    // Fill the edit distance matrix
    for (let i=1; i<=len2; i++) {
        for (let j=1; j<=len1; j++) {
            if (str1[i-1] === str2[j-1]) {
                distMatrix[i][j] = distMatrix[i-1][j-1];
            } else {
                distMatrix [i][j] = 1 + Math.min (
                                            distMatrix[i-1][j-1],
                                            distMatrix[i-1][j],
                                            distMatrix[i][j-1]
                                          );
            }
        }
    }

    return distMatrix[len2][len1];
}

console.log(minEditDist ('abcdefgs', 'agced'));
console.log(minEditDist('kitten', 'sitting'));
```


### Cpp Implementation

### [Solution 1](./Cpp/day8.cpp)

```cpp
/*
* @author : dhruv-gupta14
* @date : 31/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
    return min(min(x, y), z);
}

int levenshtein_distance(string str1, string str2, int m, int n)
{
    int ld[m+1][n+1];

    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i==0)
                ld[i][j] = j;

            else if (j==0)
                ld[i][j] = i;


            else if (str1[i-1] == str2[j-1])
                ld[i][j] = ld[i-1][j-1];

            else
                ld[i][j] = 1 + min(ld[i][j-1], ld[i-1][j], ld[i-1][j-1]);
        }
    }

    return ld[m][n];
}

int main()
{
    string str1,str2;
    cin >> str1 >> str2;

    cout << levenshtein_distance(str1, str2, str1.length(), str2.length());

    return 0;
}
```

### C Implementation

### [Solution 1](./C/levenshtein_distance.c)

```c
/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 31/12/2018
 */
#include <stdio.h>
#include <string.h>

int min(int x, int y, int z)
{
    if (x <= y && x <= z)
        return x;
    else if (y <= x && y <= z)
        return y;
    else
        return z;
}

int levenshtein_distance(const char *str1, const char *str2)
{
    int m = strlen(str1);
    int n = strlen(str2);
    int ld[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                ld[i][j] = j;

            else if (j == 0)
                ld[i][j] = i;

            else if (str1[i - 1] == str2[j - 1])
                ld[i][j] = ld[i - 1][j - 1];

            else
                ld[i][j] = 1 + min(ld[i][j - 1], ld[i - 1][j], ld[i - 1][j - 1]);
        }
    }

    return ld[m][n];
}

int main()
{
    const int STRING_LENGTH=100;
    char str1[STRING_LENGTH], str2[STRING_LENGTH];
    scanf("%s%s",str1,str2);

    printf("%d\n",levenshtein_distance(str1, str2));

    return 0;
}

```

## Python Implementation

### [Solution](./Python/minimum_edit_distance.py)

```py

"""
 @author : imkaka
 @date   : 31/12/2018

"""

import sys


def min_edit_distance(str1, str2):
    len1 = len(str1)
    len2 = len(str2)

    # Matrix inilization
    dp = [[0 for i in range(len2 + 1)]
          for j in range(len1 + 1)]

    for i in range(1, len1 + 1):
        dp[i][0] = i

    for j in range(1, len2 + 1):
        dp[0][j] = j

    # Fill the DP matrix.

    for j in range(1, len2 + 1):
        for i in range(1, len1 + 1):
            if(str1[i - 1] == str2[j - 1]):
                dp[i][j] = dp[i - 1][j - 1]
            else:
                dp[i][j] = 1 + min(dp[i - 1][j - 1],
                                   dp[i][j - 1],
                                   dp[i - 1][j])
    return dp[len1][len2]


def main():

    print("==================Minimum Edit Distance====================")
    print()

    print(min_edit_distance("kitten", "sitting"))
    print(min_edit_distance("abcdef", "abcdhgikll"))


if __name__ == '__main__':
    main()
    
``` 

## Java Implementation

### [Solution](./Java/Levenshtein.java)

```java
/**
 * @date 31/12/18
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Levenshtein {
    public static int leven_dist(char []s,char []t)
    {
        int d[][]=new int[s.length+1][t.length+1];
        int i,j;int sub;int a,b,c;
        for(i=0;i<=s.length;i++)
        {
            for(j=0;j<=t.length;j++)
            {
                d[i][j]=0;
            }
        }
        for(i=1;i<=s.length;i++)
            d[i][0]=i;
        for(j=1;j<=t.length;j++)
            d[0][j]=j;
        for(j=1;j<=t.length;j++)
        {
            for(i=1;i<=s.length;i++)
            {
                if(s[i-1]==t[j-1])
                {
                    d[i][j]=d[i-1][j-1];
                }
                else
                {
                    a=d[i-1][j-1]+1;
                    b=d[i][j-1]+1;
                    c=d[i-1][j-1]+1;
                    //System.out.println(a+" "+b+" "+c);
                    d[i][j]=Math.min((Math.min(a,b)),c);
                }
            }
        }
        return d[s.length][t.length];
    }
    public static void main(String []args)
    {
        String s1,s2;int dist;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two strings ");
        s1=sc.nextLine();
        s2=sc.nextLine();
        char s[]=s1.toCharArray();
        char t[]=s2.toCharArray();
        if(s.length<t.length)
            dist=leven_dist(s,t);
        else
            dist=leven_dist(t,s);
        System.out.println("Minimum no of operations are "+dist);
    }
}

```
