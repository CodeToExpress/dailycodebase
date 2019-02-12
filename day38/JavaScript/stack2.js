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
