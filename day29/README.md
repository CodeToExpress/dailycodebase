![cover](./cover.png)

# Day 29 - Search and Sort Algorithms Part B: The Binary Search

Binary Search is searching technique which works on Divide and Conquer approach. Indeed an efficient searching algorithm with a runtime of `O(log(n))`, but it works only on sorted arrays.

## Question

Given a sorted array, and a number n, write a program to implement binary search and finid the index of the given number.

Try to do it using recursion as well as iteration.

**Example**

```
input: arr = [1, 2, 3, 4, 5, 8, 9], num = 8
output: 5 (index of found element)

input: arr = [1, 2, 3, 4, 5, 8, 9], num = 7
output: undefined
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/binary.js)

```js
function binarySearch(arr, elem) {
    var start = 0;
    var end = arr.length - 1;
    var middle = Math.floor((start + end) / 2);
    while(arr[middle] !== elem && start <= end) {
        if(elem < arr[middle]){
            end = middle - 1;
        } else {
            start = middle + 1;
        }
        middle = Math.floor((start + end) / 2);
    }
    if(arr[middle] === elem){
        return middle;
    }
    return undefined;
}

console.log (binarySearch ([1, 2, 3, 4, 5, 8, 9], 8));
console.log (binarySearch ([1, 2, 3, 4, 5, 8, 9], 7));
```

## Java Implementation

### [Solution](./Java/binarySearch.java)

```java
/**
 * @date 29/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class binarySearch {
    public static int search(int []arr,int p,int l,int r)
    {
        int mid=0;
        if(r>=l)
        {
          mid=(l+r)/2;  
        if(p==arr[mid])
            return mid;
        else if(p>arr[mid])
            return search(arr,p,mid+1,r);
        else
            return search(arr,p,l,mid-1);
        }
        return -1;
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i;int p,f;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter element to be searched");
        p=sc.nextInt();
        f=search(arr,p,0,arr.length-1);
        if(f==-1)
            System.out.println("undefined");
        else
            System.out.println(f);
    }
}
```