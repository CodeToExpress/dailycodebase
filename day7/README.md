![cover](./cover.png)

# Day 7 -- One Edit Away

**Question** -- Given two strings, check whether they are one edit distance apart, i.e., if str1 and str2 are the given strings, check whether str1 can be converted to str2 with exactly one edit.

An edit between 2 strings is one of the following operations

1. Replace a character
2. Add a character
3. Delete a character

Also note that two same strings are also one edit away since we can say that anyone of those strings can be converted into another by just one replace operation where we replace any of the character by itself.

**Example**

```
Input: 
  str1 = 'abc', str2 = 'abc'
Output: yes
```

```
Input:
  str1 = 'abc', str2 = 'abd'
Output: yes
```

```
Input:
  str1 = 'abc', str2 = 'ab'
Output: yes
```

```
Input:
  str1 = 'abc', str2 = 'abcd'
Output: yes
```

```
Input:
  str1 = 'abc', str2 = 'abdef'
Output: no
```

![ques](./ques.png)

## JavaScript Implementatiom

### [Solution](./JavaScript/sol.js)

```js
/**
 * @author MadhavBahlMD
 * @date 28/12/2018
 * METHOD - Consider the 3 cases separately, 
 *   1) If difference in lengths is more than 1 then print no and exit 
 *   2) If the length is same and the hamming distance is 1, print yes
 *   3) If difference in length equals 1, then loop through the bigger string and check for the corresponding elements of smaller string
 */

function oneEditAway (str1, str2) {
    let len1 = str1.length,
        len2 = str2.length;
    
        if (Math.abs(len1-len2) > 1) {
            // If difference in lengths is greater than 1
            console.log (`Strings "${str1}" and "${str2}" are not one edit away`);
            return 0;
        } else if(len1 === len2) {
            // if lengths are equal
            let count = 0;

            for (let i=0; i<len1; i++) {
                if (str1[i] !== str2[i])    count++;
            }

            if (count < 2) {    // hamming distance is 0 or 1
                console.log (`Strings "${str1}" and "${str2}" are one edit away`);
                return 1;
            } else {            // hamming distance >= 2
                console.log (`Strings "${str1}" and "${str2}" are not one edit away`);
                return 0;
            }

        } else {
            // Difference in lenghts = 1
            if (len1 > len2)    return checkOneEdit (str1, str2);
            else    return checkOneEdit (str2, str1);
        }
}

function checkOneEdit (str1, str2) {
    let edit = 0, j=0;
    for (let i=0; i<str1.length; i++) {
        if (str1[i] !== str2[j]) {
            edit++;
        } else {
            j++;
        }
    }
    
    if (edit >= 2) {
        console.log (`Strings "${str1}" and "${str2}" are not one edit away`);
        return 0;
    } else {
        console.log (`Strings "${str1}" and "${str2}" are one edit away`);
        return 1;
    }
}

// Test Cases
oneEditAway ('abc', 'abc'); // true
oneEditAway ('abc', 'abd'); // true
oneEditAway ('abc', 'ab'); // true
oneEditAway ("a", "a");  // true
oneEditAway ("abcdef", "abqdef");  // true
oneEditAway ("abcdef", "abccef");  // true
oneEditAway ("abcdef", "abcde");  // true
oneEditAway ("aaa", "abc");  // false
oneEditAway ('bc', 'abc'); // true
oneEditAway ('abc', 'abced'); // false
```

## Python Implementatiom

### [Solution 1](./Python/onewordaway.py)

```python
"""
  @author : vishalshirke7
  @date : 28/12/2018
  
  Method - There are 3 test cases
      1) Difference of length between 2 characters is more than one, then answer is False
      2) If length of both strings is equal then we'll have to check for 2 cases
          2.1) if count of different characters at each position is > 1 then answer is False
          2.2) if count of different characters at each position is < 2 then answer is True
      3) if difference in length of both strings in 1 then we check for intersection of 
         both strings and if it is equal to min(length1, length2) then answer is true 
         as we can add a character to minimum length string or remove one from bigger length string
"""


def check_one_edit_away(str1, str2):
    l1, l2 = len(str1), len(str2)
    if abs(l1 - l2) > 1:
        return False
    if l1 == l2:
        count = 0
        for i in range(l1):
            if str1[i] != str2[i]:
                count += 1
        if count > 1:
            return False
        else:
            return True
    else:
        if len(set(str1) & set(str2)) == min(l1, l2): 
            # check for intersection of two strings
            return True
        else:
            return False


check_one_edit_away(*(input().split())) # here list unpacking is used
```


## C++ Implementation

### [Solution 1](./C++/day7.cpp)

```cpp
/*
* @author : dhruv-gupta14
* @date : 28/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0,x=0;
    string str1;
    getline(cin,str1);
    
    string str2;
    getline(cin,str2);
    
    int n = str1.length();
    int m = str2.length();
    
    if(str1 == str2)
        cout << "Yes";
    else if(n==m && str1 !=str2){
        for(int i=0; i<n; i++)
        {
            if(str1[i] != str2[i])
                flag++;
        }
        if(flag == 1)
            cout << "Yes";
        else
            cout << "No";
    } else{
        if(n == m+1)
        {
            x=0;
            for(int j=0; j<n; j++)
            {
                if(str1[j] != str2[x])
                {
                    flag++;
                }else{
                    x++;
                }
            }
        }else if(m == n+1){
            x=0;
            for(int k=0; k<m; k++)
            {
                if(str1[x] != str2[k])
                {
                    flag++;
                }else{
                    x++;
                }
            }
        }
        if(flag == 1)
            cout << "Yes";
        else
            cout << "No";
    }
    
    return 0;
}
```

## C Implementation

### [Solution 1](./C/One_edit_away.c)

```c
/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 24/12/2018
 */

#include <stdio.h>
#include <string.h>
int replacable(const char *s1, const char *s2)
{
    int diff_count = 0;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len == s2_len)
    {
        for (int i = 0; i < s1_len; i++)
        {
            if (s1[i] != s2[i])
                diff_count++;
        }
        if (diff_count == 1)
            return 1;
    }
    return 0;
}
int addable(const char *s1, const char *s2)
{
    int diff_count = 0;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len == s2_len + 1)
    {
        int j = 0;
        for (int i = 0; i < s1_len; i++)
        {
            if (s1[i] == s2[j])
            {
                j++;
            }
            else
            {
                diff_count++;
            }
        }
        if (diff_count <= 1)
            return 1;
        else
            return 0;
    }
    return 0;
}
int deletable(const char *s1, const char *s2)
{
    int diff_count = 0;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len + 1 == s2_len)
    {
        int j = 0;
        for (int i = 0; i < s2_len; i++)
        {
            if (s2[i] == s1[j])
            {
                j++;
            }
            else
            {
                diff_count++;
            }
        }
        if (diff_count <= 1)
            return 1;
        else
            return 0;
    }
    return 0;
}
int main()
{
    char s1[100], s2[100];
    printf("Enter the first string ");
    scanf("%s", s1);
    printf("Enter the second string ");
    scanf("%s", s2);
    if (strcmp(s1, s2) == 0 || replacable(s1, s2) || addable(s1, s2) || deletable(s1, s2))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
```