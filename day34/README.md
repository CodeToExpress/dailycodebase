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

### [Java Implementation](./Java/MergeSort.Java)
``` java
/**
 * @author Lucas Freire(ldrf)
 * @date 16/10/2020
 */
 
import java.util.Arrays;

public class MergeSort {

	public static void main(String[] args) {
		int[] arrayToOrder = new int[]{1, 5, 2, 7, 3, 4, 8, 9, 6};
		System.out.println("Array before sorting");
		System.out.println(Arrays.toString(arrayToOrder));
		int startIndex = 0;
		int highIdex = arrayToOrder.length - 1;
		mergeSort(arrayToOrder, startIndex, highIdex);
		System.out.println("Array after sorting");
		System.out.println(Arrays.toString(arrayToOrder));
	}

	private static void mergeSort(int[] arrayToOrder, int lowIndex,
			int highIndex) {
		if (lowIndex < highIndex) {
			int firstMidIndex = (lowIndex + highIndex) / 2;
			mergeSort(arrayToOrder, lowIndex, firstMidIndex);
			int secondMidIndex = firstMidIndex + 1;
			mergeSort(arrayToOrder, secondMidIndex, highIndex);
			merge(arrayToOrder, lowIndex, firstMidIndex, highIndex);
		}
	}

	private static void merge(int[] arrayToOrder, int lowIndex, int midIndex,
			int highIndex) {
		int leftSubArraySize = (midIndex - lowIndex) + 1;
		int rightSubArraySize = highIndex - midIndex;
		int[] leftArray = getArray(arrayToOrder, leftSubArraySize, lowIndex);
		int[] rightArray = getArray(arrayToOrder, rightSubArraySize,
				midIndex + 1);
		int leftCounter = 0;
		int rightCounter = 0;
		while ((leftCounter < leftSubArraySize)
				&& (rightCounter < rightSubArraySize)) {
			if (leftArray[leftCounter] <= rightArray[rightCounter]) {
				arrayToOrder[lowIndex] = leftArray[leftCounter];
				++leftCounter;
			} else {
				arrayToOrder[lowIndex] = rightArray[rightCounter];
				++rightCounter;
			}
			++lowIndex;

		}

		lowIndex = remainingElements(arrayToOrder, lowIndex, leftSubArraySize,
				leftArray, leftCounter);
		remainingElements(arrayToOrder, lowIndex, rightSubArraySize, rightArray,
				rightCounter);

	}

	private static int[] getArray(int[] arrayToOrder, int arraySideSize,
			int startIndex) {
		int[] sideArray = new int[arraySideSize];
		for (int i = 0; i < sideArray.length; i++) {
			sideArray[i] = arrayToOrder[startIndex + i];
		}
		return sideArray;
	}

	private static int remainingElements(int[] arrayToOrder, int startIndex,
			int subArraySizeSide, int[] sideArray, int sideCounter) {
		while (sideCounter < subArraySizeSide) {
			arrayToOrder[startIndex] = sideArray[sideCounter];
			++startIndex;
			++sideCounter;
		}
		return startIndex;
	}

}

```