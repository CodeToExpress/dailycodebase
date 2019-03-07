![cover](./cover.png)

# Day 48 - Implement a doubly linked list

Write a program to implement a doubly linked list

### Doubly Linked Lists

A doubly Linked List is a variation to a normal Linked List where, instead of one pointer pointing to the next node, there are 2 pointers, one pointing to the next node and the other one to the previous node.

![image](https://user-images.githubusercontent.com/26179770/53316858-6f783980-38ef-11e9-82f5-996aeb8bf08f.png)

Source: [Geeks4Geeks](https://www.geeksforgeeks.org/doubly-linked-list/)

### Advantages of Doubly Linked Lists 

1. A DLL can be traversed in both forward and backward direction.
2. The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
3. We can quickly insert a new node before a given node.

In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer.

### Disadvantages of Linked Lists

1. Every node of DLL Require extra space for an previous pointer. It is possible to implement DLL with single pointer though (See this and this).
2. All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointer.

[Read More (Geeks4Geeks)](https://www.geeksforgeeks.org/doubly-linked-list/)

Try to implement a doubly linked list.

[ques](./ques.png)

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/dll.js)

```js
// To Be Added
```