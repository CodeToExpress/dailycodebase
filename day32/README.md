![cover](./cover.png)

# Day 32 - Search and Sort Algorithms Part E: Selection Sort

**Source: [GeeksForGeeks](https://www.geeksforgeeks.org/selection-sort/)**

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1. The subarray which is already sorted
2. Remaining subarray which is unsorted

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray

## Question

Given an unsorted list of elements, write a program to sort the given list using selection sort.

**Example**

```
input: [1, 5, 2, 7, 3, 4, 8, 9, 6]
output: [1, 2, 3, 4, 5, 6, 7, 8, 9]
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/selectionsort.js)

```js
function selectionSort(arr){
    for(var i = 0; i < arr.length; i++){
        var lowest = i;
        for(var j = i+1; j < arr.length; j++){
            if(arr[j] < arr[lowest]){
                lowest = j;
            }
        }
        if(i !== lowest){
            var temp = arr[i];
            arr[i] = arr[lowest];
            arr[lowest] = temp;
        }
    }
    return arr;
}

console.log ( selectionSort ([1, 5, 2, 7, 3, 4, 8, 9, 6]));
```

## Java Implementation

### [Solution](./Java/selectionSort.java)

```java
/**
 * @date 01/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class selectionSort {
    public static void main(String []args)
    {
        int n,i,j,t,min=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(i=0;i<n;i++)
        {
            min=i;
            for(j=i;j<n;j++)
            {
                if(arr[min]>arr[j])
                    min=j;
            }
            t=arr[i];
            arr[i]=arr[min];
            arr[min]=t;
        }
        System.out.println("The sorted array is: ");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
```