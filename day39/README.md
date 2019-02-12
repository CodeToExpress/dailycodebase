![cover](./cover.png)

# Day 39 - Maximum Element and Stack Reversal

## Question 1

Find the maximum element in the stack

## Question 2

Reverse the given stack

**HINT**

- You can use another stack, pop the elements of first stack and push them onto the second stack
- You can reverse without another data structure using recursion

## Solution to Question 1

### [JavaScript Implementation](./JavaScript/maxElement.js)

```js
/**
 * Find maximum element in the stack
 * @author MadhavBahlMD
 * @date 12/02/2019
 */

class Stack {
    constructor (limit) {
        this.myStack = [];
        this.tempStack = [];
        this.capacity = limit;
    }

    // Implement isFull() method
    isFull () {
        if (this.myStack.length === this.capacity)  return true;
        return false;
    }

    // Implement isEmpty() method
    isEmpty () {
        if (this.myStack.length === 0)  return true;
        return false;
    }

    // Implement push(x) method
    push (element) {
        if (this.isFull()) return false;
        this.myStack.push(element);
        return true;
    }

    // Implement pop() method
    pop () {
        if (this.isEmpty())  return -1;
        return this.myStack.pop();
    }

    // Implement the peek() function
    peek () {
        return this.myStack[this.myStack.length - 1];
    }

    // Implement findMax() method
    findMax () {
        this.tempStack = this.myStack;
        let max = this.peek();

        while (!this.isEmpty()) {
            let currentTop = this.pop();
            if (currentTop > max) max = currentTop;
        }

        this.myStack = this.tempStack;
        return max;
    }
}

const stk = new Stack (10);
stk.push (1);
stk.push (2);
stk.push (19);
stk.push (12);
stk.push (16);
stk.push (4);
stk.push (25);
stk.push (5);

console.log (stk.findMax());
```

###[C++ Implementation](./C++/stack_maximum.cpp)

```c++
/**
 * @author:aaditkamat
 * @date: 13/02/2019
 */
#include<iostream>
#include<stack>
#define SIZE 11

int get_top_element(std::stack<int>& stack) {
  int first = stack.top();
  stack.pop();
  return first;
}

int maximum_element(std::stack<int> stack) {
  if(stack.empty()) {
    std::cerr << "Stack is empty and has no maximum element";
    return NULL;
  }
  int max = get_top_element(stack);
  while(!stack.empty()) {
    int curr = get_top_element(stack);
    if (curr > max) {
      max = curr;
    }
  }
  return max;
}

int main() {
  std::stack<int> stack;
  int a[SIZE] = {2, 4, 8, 9, 7, 6, 27, 5, 3, 2, 4};
  for (int i = 0; i < SIZE; i++) {
    stack.push(a[i]);
  }
  std::cout << maximum_element(stack) << "\n";
  return 0;
}
```

## Solution to Question 2

### [JavaScript Implementation](./JavaScript/stackReverse.js)

```js
/**
 * Reverse the stack
 * @author MadhavBahlMD
 * @date 12/02/2019
 */

class Stack {
    constructor (limit) {
        this.myStack = [];
        this.tempStack = [];
        this.capacity = limit;
    }

    // Implement isFull() method
    isFull () {
        if (this.myStack.length === this.capacity)  return true;
        return false;
    }

    // Implement isEmpty() method
    isEmpty () {
        if (this.myStack.length === 0)  return true;
        return false;
    }

    // Implement push(x) method
    push (element) {
        if (this.isFull()) return false;
        this.myStack.push(element);
        return true;
    }

    // Implement pop() method
    pop () {
        if (this.isEmpty())  return -1;
        return this.myStack.pop();
    }

    // Implement the peek() function
    peek () {
        return this.myStack[this.myStack.length - 1];
    }

    // Implement reverse() method
    reverse () {
        this.tempStack = [];
        while (!this.isEmpty()) {
            let top = this.pop ();
            console.log ('temp = ', top);
            this.tempStack.push (top);
        }
        this.myStack = this.tempStack;
    }

    // Implement displayAll() method
    displayAll () {
        console.log ('/* ==== My Stack ==== */');
        console.log ('Top');

        this.tempStack = this.myStack;
        while (!this.isEmpty())
            console.log (this.pop());
        this.myStack = this.tempStack;

        console.log ('Bottom');
    }
}

const stk = new Stack (10);
stk.push (1);
stk.push (2);
stk.push (19);
stk.push (12);
stk.push (16);
stk.push (4);
stk.push (25);
stk.push (5);

stk.displayAll ();
stk.reverse ();
stk.displayAll ();
```

###[C++ Implementation](./C++/reverse_stack.cpp)

```c++
/**
 * @author:aaditkamat
 * @date: 13/02/2019
 */
#include<iostream>
#include<stack>
#define SIZE 11

int get_top_element(std::stack<int>& stack) {
  int first = stack.top();
  stack.pop();
  return first;
}

void printReverseFirst(std::stack<int> stack) {
  if (stack.empty()) {
    return;
  }
  int element = get_top_element(stack);
  printReverseFirst(stack);
  std::cout << element << "\n";
}

void printReverseSecond(std::stack<int> stack) {
  if (stack.empty()) {
    return;
  }
  std::stack<int> new_stack;
  while(!stack.empty()) {
    int element = get_top_element(stack);
    new_stack.push(element);
  }
  while(!new_stack.empty()) {
    int element = get_top_element(new_stack);
    std::cout << element << "\n";
  }
}

int main() {
  std::stack<int> stack;
  int a[SIZE] = {2, 4, 8, 9, 7, 6, 27, 5, 3, 2, 4};
  for (int i = 0; i < SIZE; i++) {
    stack.push(a[i]);
  }
  //first method to reverse the stack
  printReverseFirst(stack);
  //second method to reverse the stack
  printReverseSecond(stack);
  return 0;
}
```
