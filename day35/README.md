![cover](./cover.png)

# Day 35 - Search and Sort Algorithms Part H: Quick Sort

Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.

## Pseudocode

```
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
```

Referance: https://www.geeksforgeeks.org/quick-sort/

## Question

**Type:** Divide and Conquer

Given an unsorted list of elements, write a program to sort the given list using quick sort.

**Example**

```
input: [1, 5, 2, 7, 3, 4, 8, 9, 6]
output: [1, 2, 3, 4, 5, 6, 7, 8, 9]
```

## Solution

### [JavaScript Implementation](./JavaScript/quickSort.js)

```js
to be added
```
### [Java Implementation](./Java/QuickSort.java)

### [C++ Implementation](./C++/quickSort.cpp)

```cpp
/*
* @author : imkaka
* @date   : 6/2/2019
*/

#include<iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int arr[], int left, int right){

    if(right - left <= 1)
        return;

    //Pivot arr[left]
    int yellow = left +1;

    for(int green = left+1; green < right; ++green){
        if(arr[green] < arr[left]){
            swap(arr[yellow], arr[green]);
            yellow++;
        }
    }

    //Move Pivot to original place
    swap(arr[left], arr[yellow-1]);

    quickSort(arr, left, yellow-1);
    quickSort(arr, yellow, right);
}

void print(int arr[],int size){
    for(int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {10, 25, 0, 23, 36, -1, 3, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Before Sorting: ";
    print(arr, size);

    quickSort(arr, 0, size);

    cout << "After Sorting: ";
    print(arr, size);
}
```

### [Python Implementation](./Python/quick_sort.py)

```py
"""
@author : imkaka
@date   : 5/2/2019
"""

import sys


def QuickSort(A, l, r):  # sort A[l:r]
    if r - l <= 1:
        return()

    #Pivot  = A[l]
    yellow = l + 1

    for green in range(l + 1, r):
        if(A[green] <= A[l]):
            (A[yellow], A[green]) = (A[green], A[yellow])
            yellow += 1
    # Move Pivot into place
    (A[l], A[yellow - 1]) = (A[yellow - 1], A[l])

    QuickSort(A, l, yellow - 1)
    QuickSort(A, yellow, r)


def main():
    A = [20, 34, 1, 3, -2, 34, 65, 100, 0]
    print('Before Sorting', A)
    print(len(A))
    QuickSort(A, 0, len(A))

    print('After Sorting', A)


if __name__ == '__main__':
    main()
```

