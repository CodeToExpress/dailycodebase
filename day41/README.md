![cover](./cover.png)

# Day 41 - Implement a Queue

Just like a stack, queue is also a linear data structure which follows a particular order in which the operations are performed. The order is called FIFO (First In First Out) which means the first element to enter the queue will be the last one to exit

There are many real-life examples of a queue, and the most common one of them is the real queue. It can be a queue of people waiting at billing counter, or a queue of people waiting at a ticket counter etc.

A Queue has various methods -

1. `Enqueue()` - **Adds an item to the queue**
2. `Dequeue()` - **Removes an item from the queue**
3. `Front()` - **Get the front item from queue**
4. `Rear()` - **Get the last item from queue**

Try to implement a queue 😁

Read more about queues here: https://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/queue.js)

```js
/**
 * Implementation of queue usinig JS
 * @author MadhavBahlMD
 * @date 14/02/2019
 */

class Queue {
    constructor (size) {
        this.capacty = size;
        this.data = [];
        this.frontIndex = 0;
        this.rearIndex = 0;
    }

    front () {
        return data[this.frontIndex];
    }

    rear () {
        return data[this.rearIndex];
    }

    enqueue (element) {
        if (this.rearIndex >= this.capacty)  {
            console.log ("Overflow!");
            return -1;
        }
        this.data.unshift (element);
        console.log (element + ' added to the queue');
        this.rearIndex++;
    }

    dequeue (element) {
        if (this.rearIndex === 0) {
            console.log ("Underflow!");
            return -1;
        }
        console.log (this.data[this.rearIndex -1] + ' has been removed from the queue');
        this.rearIndex--;
        return this.data.pop ();
    }
}

const myQ = new Queue (4);

myQ.dequeue ( );
myQ.enqueue (1);
myQ.enqueue (2);
myQ.enqueue (3);
myQ.enqueue (4);
myQ.enqueue (5);
myQ.dequeue ( );
```

## C++ Implementation

### [Queue Interface](./C++/queue.h)

```c++
/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */

#include<iostream>
#include<vector>

template<class T>
struct Node {
  Node<T>* next;
  T value;
  Node(T& element);
};

template<class T>
class Queue {
  private:
    Node<T>* front_node = NULL;
    Node<T>* back_node = NULL;
  public:
    void enqueue(T element);
    void dequeue();
    T front();
    T back();
};
```

### [Queue Implementation](./C++/queue.cpp)

```c++
/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */

 /*
  * This is a linked list implementation of queues.
  */

#include "queue.h"

template<class T>
Node<T>::Node(T& element) {
  this -> value = element;
}

template<class T>
void Queue<T>::enqueue(T element) {
  Node<T>* element_node = new Node<T>(element);
  if (this -> front_node == NULL) {
    this -> front_node = element_node;
    this -> back_node = element_node;
  }
  else {
    this -> back_node -> next = element_node;
    this -> back_node = element_node;
  }
}

template<class T>
void Queue<T>::dequeue() {
  if (this -> front_node == NULL) {
    std::cerr << "Cannot remove an element from an empty queue\n";
    return;
  }
  this -> front_node = this -> front_node -> next;
}

template<class T>
T Queue<T>::front() {
  if (this -> front_node == NULL) {
    std::cerr << "Cannot return the front element of an empty queue\n";
    return NULL;
  }
  return this -> front_node -> value;
}

template<class T>
T Queue<T>::back() {
  if (this -> back_node == NULL) {
    std::cerr << "Cannot return the back element of am empty queue\n";
    return NULL;
  }
  return this -> back_node -> value;
}
```

### [Queue Test file](./C++/queue_test.cpp)

```c++
/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */
#include "queue.cpp"

void printQueue(Queue<int> queue) {
  std::cout << "Queue status: " << queue.front() << " " << queue.back() << "\n";
}

int main() {
  Queue<int> queue;
  queue.dequeue();
  queue.enqueue(3);
  printQueue(queue);
  queue.enqueue(4);
  printQueue(queue);
  queue.enqueue(5);
  printQueue(queue);
  queue.dequeue();
  printQueue(queue);
  return 0;
}
```
