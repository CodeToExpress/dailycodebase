/**
 * Queue from stack 
 */

// Class declaration for queue data structure
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

// Class declaration for stack data structure
class Stack {
    constructor() {
        this.data = [];
    }

    push(record) {
        this.data.push(record);
    }

    pop() {
        return this.data.pop();
    }

    peek() {
        return this.data[this.data.length - 1];
    }
}

const q = new Queue();

q.enqueue(1);
console.log(q.dequeue());
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
console.log(q.dequeue());
console.log(q.dequeue());
console.log(q.dequeue());
q.enqueue(1);
q.enqueue(2);
console.log(q.peek());
console.log(q.peek());