/**
 * Queue reversal 
 * @author MadhavBahlMD
 * @date 15/02/2019
 * Method 
 *  - Dequeue the elements from queue and keep pushing them in stack
 *  - Pop the elements from stack and enqueue them in the original queue
 */

// Class declaration for queue data structure
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
        // console.log (element + ' added to the queue');
        this.rearIndex++;
    }

    dequeue (element) {
        if (this.rearIndex === 0) {
            console.log ("Underflow!");
            return -1;
        }
        // console.log (this.data[this.rearIndex -1] + ' has been removed from the queue');
        this.rearIndex--;
        return this.data.pop ();
    }

    displayQueue () {
        let toBeDisplayed = '-> ';
        for (let element of this.data) {
            toBeDisplayed += element + ' -> ';
        }
        console.log (toBeDisplayed);
    }
}

// Class declaration for stack data structure
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

const reverse = (myQueue) => {

};

const myQueue = new Queue (4);

myQueue.enqueue (1);
myQueue.enqueue (2);
myQueue.enqueue (3);
myQueue.enqueue (4);

console.log ("\n/* ===== Displaying Initial Queue ===== */");
myQueue.displayQueue();


console.log ("\n/* ===== Displaying Final Queue ===== */");
myQueue.displayQueue();