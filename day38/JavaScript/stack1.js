/**
 * Implemntation of Stack Data  Structure in JavaScript
 * @author MadhavBahl
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
