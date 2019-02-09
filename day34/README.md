![cover](./cover.png)

# Day 34 - Search and Sort Algorithms Part G: Merge Sort

Now that we have come this far in searching and sorting algorithms, let's look at a few more algorithms for a couple of days and then we will proceed with questions on data structures like linked lists (singly linked and doubly linked), stacks, queues, trees etc. So today, try to implement merge sort.

Referance: https://www.geeksforgeeks.org/merge-sort/

## Question

**Type:** Divide and Conquer

Given an unsorted list of elements, write a program to sort the given list using merge sort.

**Example**

```
input: [1, 5, 2, 7, 3, 4, 8, 9, 6]
output: [1, 2, 3, 4, 5, 6, 7, 8, 9]
```

## Solution

### [JavaScript Implementation](./JavaScript/mergeSort.js)

```js
to be added
```

### [C++ Implementation](./C++/mergeSort.cpp)

```cpp
/*
* @author : imkaka
* @date   : 5/2/2019
*/

#include<iostream>
#include<vector>

using namespace std;

// Merges two subarrays of arr[].
void merge(vector<int>& arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    //create temp arrays
    int L[n1], R[n2];

    //Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    // Merge the temp arrays back
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    //Copy the remaining elements of R[]
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r){

    if(l < r){

        int m = l + (r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void print(const vector<int>& arr){
    for(const int x : arr){
        cout << x << " ";
    }

    cout << endl;
}
int main(){
    vector<int> arr = {12, 34, 1, -5, 10, 43, 23, 100, 100000, 0};

    cout << "Before Sorting : ";
    print(arr);

    mergeSort(arr, 0, arr.size()-1);

    cout << endl << "After Sorting : ";
    print(arr);
    return 0;
}
```
