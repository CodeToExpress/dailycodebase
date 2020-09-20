![cover](./cover.png)

# Day 53 - The Binary Search Tree

The questions from here onwards will be focusing on complex data structures and hence will be little more  open ended than before, try to do them yourself.

Ques) Implement a Binary Search Tree, and the following methods 

1. `insert()` - to insert a new value to the BST
2. `find()` - to find a value in the BST

### Binary Search Tree

Binary Search Tree is a node-based binary tree data structure which has the following properties:

1. The left subtree of a node contains only nodes with keys lesser than the node’s key.
2. The right subtree of a node contains only nodes with keys greater than the node’s key.
3. The left and right subtree each must also be a binary search tree.

[Read more about Binary Search Trees... (Geeks4Geeks)](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)

[ques](./ques.png)

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/BST.js)

```js
/* ==== A very simple implementation of a BST ==== */

class Node {
    constructor (value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BST {
    constructor () {
        this.rootnode = null;
    }
}
```

See full solution [here](./JavaScript/BST.js)