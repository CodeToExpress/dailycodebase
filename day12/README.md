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

## B) Knuth-Morris-Pratt Algorithm

### JavaScript Implementation

#### [Solution](./JavaScript/KMP.js)

```js
To Be Added
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