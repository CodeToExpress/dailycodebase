![cover](./cover.png)

# Day 38 - Implementation of Stack Data Structure

## What all did we see till now?

Now that we are proceeding towards the phase 2 of Daily Codes initiative, here are the things that we focused on phase 1,

- Basic questions
- String Manipulation programs
- Recursion
- Array based programs
- Time and space complexity in various programs
- Searching algorithms
- Sorting algorithms
- Applications based on searching and sorting algorithms

### Help us improve

It's been a long journey, and I hope the people who are following this initiative daily are getting benefitted.
Moreover, we would love to have your valuable feedback, and suggestions

Just comment on issue [#244](https://github.com/CodeToExpress/dailycodebase/issues/244) - https://github.com/CodeToExpress/dailycodebase/issues/244 - whatever you would like us to know

**Thanks for being a part, we love you all. Let's make this world a better place through code**

## Today's question - Implement a Stack

Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out)

There are many real-life examples of a stack, like a stack of books, where you can add another book at top and remove the book at the top. Another example can be a stack of plates kept one over the other in the kitchen, one can remove the plate kept at top and remove the element kept at the top.

A stack has various methods -

1. `isEmpty()` - **To check whether the stack is empty**
2. `isFull()` - **To check whether the stack is full**
3. `push()` - **To add a new element to the stack**
4. `pop()` - **To remove the topmost element from the stack**
5. `peek()` - **To view the topmost element in the stack**

Try to implement a stack 😁

## Solution

## JavaScript Implementation

### [Solution 1](./JavaScript/stack1.js)

Implementation by using JS's array push and pop methods

```js
/**
 * Implemntation of Stack Data  Structure in JavaScript
 * @author MadhavBahlMD
 * @date 11/02/2019
 * Method 1 - Using JavaScript's push and pop methods
 */

class Stack {
    // constructor to initialize the stack and it's capacity
    constructor (limit) {
        this.myStack = [];
        this.top = limit;
    }

    // isEmpty method to check whether the stack is empty
    isEmpty () {
        if (this.myStack.length === 0)  return true;
        else return false;
    }

    // isFull method to check whether the stack is full
    isFull () {
        if (this.myStack.length === this.top)  return true;
        else return false;
    }

    // push method to add a record to the stack
    push (record) {
        if (!this.isFull()) {
            console.log (`Pushing ${record} to the stack!`);
            this.myStack.push (record);
        } else {
            console.log ('Sorry! The Stack is full!');
        }
    }

    // pop method to remove an element from the stack
    pop () {
        if (!this.isEmpty()) {
            console.log (`Popped element is: ${this.myStack[this.myStack.length-1]}`);
            return this.myStack.pop ();
        } else {
            console.log ('Sorry! The Stack is empty');
        }
    }

    // peek method to view the top element
    peek () {
        console.log (`Current element is: ${this.myStack[this.myStack.length - 1]}`);
    }
}

const stk = new Stack (10);
stk.pop ();
stk.push (1);
stk.push (2);
stk.pop ();
stk.peek ();
```

### [Solution 2](./JavaScript/stack2.js)

Implementation without using JS's array push and pop methods

```js
/**
 * Implemntation of Stack Data  Structure in JavaScript
 * @author MadhavBahlMD
 * @date 11/02/2019
 * Method 2 - Stack implementation from scratch (without push() and pop() methods)
 */

class Stack {
    // Constructor function to initialize the stack
    constructor (capacity) {
        this.myStack = [];
        this.cap = capacity;
        this.first = 0;
        this.last = 0;
        this.size = -1;
    }

    // isEmpty() method to check whether the stack is empty
    isEmpty () {
        if (this.size === -1) return true;
        return false;
    }

    //isFull() method to check whether the stack is full
    isFull () {
        if (this.size === this.cap -1) return true;
        return false;
    }

    // push() method to add an element to the stack
    push (element) {
        if (this.isFull()) {
            console.log ('OVERFLOW!');
            return 0;
        }
        console.log (`Pushing ${element} to the stack!`);
        this.size++;
        this.myStack[this.size] = element;
        return 1;
    }

    // pop() method to remove topmost element
    pop () {
        if (this.isEmpty()) {
            console.log ('UNDERFLOW!');
            return 0;
        }
        console.log (`Popped element is: ${this.myStack[this.size]}`);
        this.size--;
        return 1;
    }

    // peek() method to view the toopmost element
    peek () {
        if (this.isEmpty()) {
            console.log ('Stack is empty!');
            return 0;
        }
        console.log (`Current Element is: ${this.myStack[this.size]}`);
    }
}

const stk = new Stack (10);
stk.pop ();
stk.push (1);
stk.push (2);
stk.pop ();
stk.peek ();
```