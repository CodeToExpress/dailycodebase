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