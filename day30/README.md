![cover](./cover.png)

# Day 29 - Search and Sort Algorithms Part C: Naive Pattern Search

So this week is for searching and sorting algorithms, and we did linear search and binary search yesterday, and today's algorithm would be the Naive Search.

## Question

Given a sentence (string), and a pattern, write a function that returns the index of found pattern. Since it is used for pattern searching, after doing it also have a look at KMP algorithm for pattern searching (We already did the KMP algorithm while string problems series, but since today's topic is searching, it deserves a place here as well 😁)

**Example**

```
input: 
  str = "Hello World, Coding is beautiful"
  pattern = "World"

output: 6 (start index of the found pattern)
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/binary.js)

```js
to be added
```

## Java Implementation

### [Solution](./Java/naive.java)

```java
/**
 * @date 30/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class naive {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        String s,p;int i,j;String str;int c=0;
        s=sc.next();
        System.out.println("Enter pattern ");
        p=sc.next();
        for(i=0;i<s.length()-p.length();i++)
        {
            str=s.substring(i,i+p.length());
            if(str.equals(p))
            {
                System.out.println(i); c=1;
                break;
            }
        }
        if(c==0)
            System.out.println("Pattern not found");
    }
}
```