![cover](./cover.png)

# Day 43 - Queue Reversal

Write a program to reverse the given queue.

#### Hint

Use stack as an intermediate data structure

## Example:

```
Input:
    q1  -> 4 -> 3 -> 2 -> 1 ->

Output:
    q1  -> 1 -> 2 -> 3 -> 4 ->
```

![ques](./ques.png)

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/queueReversal.js)

```js
const reverse = (myQueue) => {
    const stack = new Stack (10);
    let len = myQueue.rearIndex;

    for (let i=len; i>0; i--) {
        let currentElement = myQueue.dequeue();
        stack.push (currentElement);
    }

    for (let i=0; i<len; i++) {
        let currentElement = stack.pop();
        myQueue.enqueue(currentElement);
    }
};
```

[Click Here](./JavaScript/queueReversal.js) for complete solution

## C++ Implementation

### [Solution](./C++/reverse_queue.cpp)

```c++
/**
 * @author: aaditkamat
 * @date: 18/02/2019
 */
#include<iostream>
#include<queue>
#define SIZE 4

void reverseQueue(std::queue<int>& int_queue) {
  if (!int_queue.empty()) {
    int element = int_queue.front();
    int_queue.pop();
    reverseQueue(int_queue);
    int_queue.push(element);
  }
}

void printQueue(std::queue<int> int_queue) {
    while (!int_queue.empty()) {
      std::cout << int_queue.front() << " -> ";
      int_queue.pop();
    }
    std::cout << "\n";
}

int main() {
  int a[SIZE] = {4, 3, 2, 1};
  std::queue<int> int_queue;
  for (int i = 0; i < SIZE; i++) {
     int_queue.push(a[i]);
  }
  std::cout << "Input:\n q1 -> ";
  printQueue(int_queue);
  reverseQueue(int_queue);
  std::cout << "Output:\n q1 -> ";
  printQueue(int_queue);
  return 0;
}
```
