![cover](./cover.png)

# Day 33 - Search and Sort Algorithms Part F: Insertion Sort

## Question

Given an unsorted list of elements, write a program to sort the given list using insertion sort.

**Example**

```
input: [1, 5, 2, 7, 3, 4, 8, 9, 6]
output: [1, 2, 3, 4, 5, 6, 7, 8, 9]
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/insertionsort.js)

```js
function insertionSort(arr){
	var val;
    for(var i = 1; i < arr.length; i++){
        val = arr[i];
        for(var j = i - 1; j >= 0 && arr[j] > val; j--) {
            arr[j+1] = arr[j]
        }
        arr[j+1] = val;
    }
    return arr;
}

console.log ( insertionSort ([1, 5, 2, 7, 3, 4, 8, 9, 6]));
```

### [C++ Solution](./C++/insertionSort.cpp)

```cpp
/*
* @author : imkaka
* @date : 4/2/2019
*/

#include<iostream>

using namespace std;

void insertionSort(int arr[], int size){
    int key , j;
    for(int i = 1; i < size; ++i){

        key = arr[i];
        j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void print(int* arr, int size){
    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}
int main(){

    int arr[] = {10, 12, 0, 36, -4, 2, 3, -36, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: " << endl;
    print(arr,size);
    cout << endl;

    insertionSort(arr, size);

    cout << "After Sorting: " << endl;
    print(arr,size);
    return 0;
}
```

## Java Implementation

### [Solution](./Java/insertionSort.java)

```java
/**
 * @date 04/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class insertionSort {
    public static void sort(int arr[])
    {
        int i,j,t;
        for(i=0;i<arr.length;i++)
        {
            t=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>t) 
            { 
                arr[j+1]=arr[j]; 
                j=j-1; 
            } 
            arr[j+1]=t; 
        }
        System.out.println("Sorted array is ");
        for(i=0;i<arr.length;i++)
            System.out.print(arr[i]+" ");
    }
    public static void main(String []args)
    {
        int a[]={4,2,7,5,1,6,8};
        sort(a);
    }
}
```
