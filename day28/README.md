![cover](./cover.png)

# Day 28 - Search and Sort Algorithms Part A: the Linear Search

It's almost a month sincec we starated this initiative and we did questions on Strings, Arrays, Recursion and Misc. Also, in some questions, we tried to solve the question in best possible runtime, which improved our concepts of time complexity. Now, to make our code more efficient, it's highly essential that we know some frequently used searching and sorting algorithms and apply them in the code accordingly whenever required.

So this week we will be be focusing on various searching and sortinig algorithms. Today's Algorithm -- Linear Search

## Question

Write a program to implement linear search, to find the index of a given element in a given array

**Example**

```
input: arr = [1, 2, 3, 4, 5], num = 2
output: 1 (index of found element)

input: arr = [1, 2, 3, 4, 5], num = 7
output: undefined
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/linear.js)

```js
function linearSearch (arr, n) {
    for (let i=0; i<arr.length; i++) 
        if (arr[i] === n)
            return i;

    return undefined;
}

console.log (linearSearch ([1, 2, 3, 4, 5], 2));
console.log (linearSearch ([1, 2, 3, 4, 5], 7));
```

## Java Implementation

### [Solution](./Java/linearSearch1.java)

```java
/**
 * @date 28/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class linearSearch1 {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n;int i;int p,c=-1;
        System.out.println("Enter size and array elements");
        n=sc.nextInt();   
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter element to be found");
        p=sc.nextInt();
        for(i=0;i<n;i++)
           if(arr[i]==p) 
           {
               c=i;
               break;
           }
        if(c!=-1)
            System.out.println(c);
        else
            System.out.println("undefined");
    }
}
```