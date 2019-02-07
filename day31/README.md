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
