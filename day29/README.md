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
function binary (arr, n) {
    let left = 0,
        right = arr.length - 1, mid;

    while (left <= right) {
        mid = Math.floor((left + right)/2);
        if (arr[mid] === n)  return mid;
        else if (arr[mid] < n)  left = mid+1;
        else right = mid-1;
    }

    return -1;
}

console.log (binary ([1, 2, 3, 4, 5, 6, 7, 8, 9], 5)); // 4
```