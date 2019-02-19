![cover](./cover.png)

# Day 44 - Queue from Stacks

Implement the Queue data structure using Stacks

### Hint

Use 2 stacks

- enqueue operation same as push in a single stack
- For dequeue, pop all the elements of first stack into second and apply pop once in second queue
- for peek, again, pop all the elements of first stack into second and apply peek once in second queue

Don't forget to restore the state of first stack after the dequeue and peek operations

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/queueFromStack.js)

```js
class Queue {
    constructor(size) {
        this.first = new Stack();
        this.second = new Stack();
    }

    enqueue(element) {
        this.first.push(element);
    }

    dequeue() {
        // Empty first stack to second
        while (this.first.peek()) {
            this.second.push(this.first.pop());
        }

        const element = this.second.pop();

        // Restore first stack
        while (this.second.peek()) {
            this.first.push(this.second.pop());
        }

        return element;
    }

    peek() {
        while (this.first.peek()) {
            this.second.push(this.first.pop());
        }

        const element = this.second.peek();

        while (this.second.peek()) {
            this.first.push(this.second.pop());
        }

        return element;
    }
}
```

[Click Here](./JavaScript/queueFromStack.js) for complete solution

## C++ Implementation

### [Queue Header file](./C++/queue.h)

```c++
/**
 * @author: aaditkamat
 * @date: 19/02/2019
 */

#include<vector>
#include<stack>
#include<iostream>

/**
 * The Queue ADT follows the day 41 specifications.
 */
template<class T>
class Queue {
private:
  std::stack<T> data;
public:
  Queue(std::vector<T> data);
  bool empty();
  void enqueue(T);
  T dequeue();
  T front();
  T back();
};
```

### [Queue Implementation file](./C++/queue.cpp)

```c++
/**
 * @author: aaditkamat
 * @date: 19/02/2019
 */
#include "queue.h"

template<class T>
Queue<T>::Queue(std::vector<T> data) {
  for (int i = 0; i < data.size(); i++) {
    this -> enqueue(data[i]);
  }
}

template<class T>
bool Queue<T>::empty() {
  return this -> data.empty();
}

template<class T>
void Queue<T>::enqueue(T element) {
  if (this -> data.empty()) {
    this-> data.push(element);
    return;
  }
  T curr = this -> data.top();
  this -> data.pop();
  enqueue(element);
  this -> data.push(curr);
}

template<class T>
T Queue<T>::dequeue() {
  if (this -> data.empty()) {
    std::cerr << "Cannot remove element from an empty queue\n";
    return NULL;
  }
  if (this -> data.size() == 1) {
    T element = this -> data.top();
    this -> data.pop();
    return element;
  }
  T curr = this -> data.top();
  this -> data.pop();
  return curr;
}

template<class T>
T Queue<T>::back() {
  if (this -> data.empty()) {
    std::cerr << "Cannot return an element from an empty queue\n";
    return NULL;
  }
  if (this -> data.size() == 1) {
    T element = this -> data.top();
    return element;
  }
  T curr = this -> data.top();
  this -> data.pop();
  T element = back();
  this -> data.push(curr);
  return element;
}

template<class T>
T Queue<T>::front() {
  if (this -> data.empty()) {
    std::cerr << "Cannot return an element from an empty queue\n";
    return NULL;
  }
  return this -> data.top();
}
```

### [Queue Driver file](./C++/queue_test.cpp)

```c++
/**
 * @author: aaditkamat
 * @date: 19/02/2019
 */
#include "queue.cpp"

int main() {
  Queue<int> queue(std::vector<int>{1, 2, 4, 3});
  while(!queue.empty()) {
    std::cout << "Front: " << queue.front() << std::endl;
    std::cout << "Back: " << queue.back() << std::endl;
    queue.dequeue();
  }
}
```c++
