![cover](./cover.png)

# Day 36 - Search and Sort Algorithms Part I: Radix Sort

From quite a lot of days we are looking at searching and sorting algorithms, try out the radix sort today.

## Question

Given an unsorted list of elements, write a program to sort the given list using radix sort.

**Example**

```
input: [1, 5, 2, 7, 3, 4, 8, 9, 6]
output: [1, 2, 3, 4, 5, 6, 7, 8, 9]
```

## Solution

### [JavaScript Implementation](./JavaScript/radixsort.js)

```js
to be added
```

### [C++ Implementation](./C++/radix_sort.cpp)

```c++
/*
 * @author: aaditkamat
 * @date: 12/02/2019
 */
#include<cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
#define SIZE 10

/**
 * The radix_sort works by processing decimal digits from right to left
 * and sorting the numbers into buckets before combining them into a single
 * array (mutating the original input array) at each step. The number of steps
 * is equal to the number of decimal digits in the maximum element of the
 * input array.
 *
 * e.g. input = [546, 37, 2132, 422] max_element = 2132, steps = digits(2132) = 4
 * Step 1: [[2132, 422], [546], [37]]  input = [2132, 422, 546, 37]
 * Step 2: [[422], [2132, 37], [546]] input = [422, 2132, 37, 546]
 * Step 3: [[37], [2132], [422], [546]] input = [37, 2132, 422, 546]
 * Step 4: [[37, 422, 546], [2132]] input = [37, 422, 546, 2132]
 *
 * The idea is that the smaller numbers (with lesser digits) will have 0s for the
 * digits in the leftmost positions. Example  can be written as 37 can be written
 * as 0037 (0 * 10^3 + 0 * 10^2 + 3 * 10^1 + 7 * 10^0). If all numbers have them
 * same number of digits then it will just sort according to 1st digit, breaking
 * ties using the other digits.
 */
void printArray(std::vector<int> output) {
  for (int i = 0; i < output.size(); i++) {
    std::cout << output[i] << " ";
  }
  std::cout << "\n";
}

int digits(int num) {
  int ctr = 0;
  while(num > 0) {
    num /= 10;
    ctr++;
  }
  return ctr;
}

std::vector<int> sort(std::vector<int> input) {
  int max = *max_element(input.begin(), input.end());
  for (int j = 0; j < digits(max); j++) {
    std::array<std::vector<int>, SIZE> buckets;
    for (int i = 0; i < input.size(); i++) {
      int jth_digit = input[i] % static_cast<int>(std::pow(10, j + 1)) / static_cast<int>(std::pow(10, j));
      buckets[jth_digit].push_back(input[i]);
    }
    input = std::vector<int>();
    for (int i = 0; i < SIZE; i++) {
      for (int k = 0; k < buckets[i].size(); k++) {
        input.push_back(buckets[i][k]);
      }
    }
  }
  return input;
}

int main() {
  std::vector<int> input{39, 72, 64, 538, 2334, 39524, 1521, 2106, 3765};
  std::vector<int> output = sort(input);
  printArray(output);
}
```
