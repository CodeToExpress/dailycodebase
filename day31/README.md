![cover](./cover.png)

# Day 31 - Search and Sort Algorithms Part D: Bubble Sort

Now that we've seen some searching algorithms, it's time we proceed with the sorting algorithms. Whenever we look at sorting algorithm, the first algorithm that comes to mind is the easiest one, the bubble sort algorithm, and hence today, we'll be doing the bubble sort.

"Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order." -- (source: GeeksForGeeks)

## Question

Given an unsorted list of elements, write a program to sort the given list using bubble sort.

**Example**

```
input: [1, 8, 3, 2, 9, 5, 4]
output: [1, 2, 3, 4, 5, 8, 9]
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/bubble.js)

```js
to be added
```

## Java Implementation

### [Solution](./Java/bubbleSort.java)

```java
/**
 * @date 31/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class bubbleSort {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,j;int t;
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter array");
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        System.out.println("Sorted array is :");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
```

### [Solution by thefluffyoshi](./Java/bubbleSort_thefluffyoshi.java)
```
/*
 * @author thefluffyoshi
 * date: 31/10/2020
 */

import java.util.Scanner;

public class bubbleSort_thefluffyoshi
{
    public static void main (String[] args)
    {
        int arr_size, i, j, swapNum;

        //Enter how big the array is
        System.out.print("Enter an array size: ");
        Scanner arr_scan = new Scanner(System.in);
        arr_size = arr_scan.nextInt();

        int array[] = new int[arr_size];

        //The array numbers
        for (i = 0; i < arr_size; i++)
        {
            System.out.print("Enter the elements inside the array: ");
            array[i] = arr_scan.nextInt();
        }//end for loop

        //Bubble sort
        for (i = 0; i < arr_size-1; i++)
        {
            for (j = 0; j < arr_size-i-1; j++)
            {
                if (array[j] > array[j+1])
                {
                    swapNum = array[j];
                    array[j] = array[j+1];
                    array[j+1] = swapNum;
                }
            }
        }
        
        //End sort
        System.out.print("Sorted array: ");
        for (i = 0; i < arr_size; i++)
        {
            System.out.print(array[i] + " ");
        }
    }//end main
}//end class
```

### [C++ Implementation](./C++/bubbleSort.cpp)

```cpp

/*
* @author : imkaka
* @date   : 1/2/2019
*
*/

#include<iostream>
#include<vector>

using namespace std;

void bubblesort(vector<int>& arr){
    int N = arr.size();

    bool swapped;
    for(int i = 0; i < N-1; ++i){
        swapped = false;  // Optimizing part
        for(int j = 0; j < N-i-1; ++j)    // (j, j+1) Adjacent Swap.

            if(arr[j] > arr[j+1]){  // Swap Part
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        if(!swapped)
            break;
    }
}

void printArray(const vector<int> &arr){
    int N = arr.size();

    for(const int x : arr){
        cout << x << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {20, 10, 0, 36, 100, 12, -20, 30, 50, -100};

    cout << "Unsorted:" << endl;
    printArray(arr);

    bubblesort(arr);

    cout << "Sorted: " << endl;
    printArray(arr);
    return 0;
}
```
