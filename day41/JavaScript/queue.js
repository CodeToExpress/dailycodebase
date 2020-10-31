/**
 * Implementation of queue usinig JS
 * @author MadhavBahl
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