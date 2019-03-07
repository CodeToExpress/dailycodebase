class Node {
    constructor (value){
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BST {
    constructor (){
        this.rootnode = null;
    }

    // insert() method
    insert(value){
        var newNode = new Node (value);

        if(this.rootnode === null){
            this.rootnode = newNode;
            return this;
        }

        var current = this.rootnode;

        while (true) {
            if(value === current.value) return undefined;
            if(value < current.value){
                if(current.left === null){
                    current.left = newNode;
                    return this;
                }
                current = current.left;
            } else {
                if(current.right === null){
                    current.right = newNode;
                    return this;
                } 
                current = current.right;
            }
        }
    }

    // find() method
    find (value) {

        if(this.rootnode === null) return false;

        var current = this.rootnode,
            found = false;

        while (current && !found){
            if(value < current.value){
                current = current.left;
            } else if(value > current.value){
                current = current.right;
            } else {
                found = true;
            }
        }

        if (!found) return undefined;
        return current;
    }
}

var tree = new BST(); 
console.log (tree.insert (15));
console.log (tree.insert (10));
console.log (tree.insert (20));
console.log (tree.find (20));

//      15
//   10    20