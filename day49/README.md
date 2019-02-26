![cover](./cover.png)

# Day 49 - MiddleMost Node Search

Given a singly linked list, find it's middle-most element, *without* knowing the size of the linked list or using any counter variable.

### Example

```
given linked list: 1 -> 2 -> 3
output: 2

given linked list: 1 -> 2 -> 3 -> 4
output: 2
```

### HINT

👉 Make 2 pointer variables which would iterate over the Linked List, such that in each iteration, first variable moves 1 step forward, and the second pointer variable moves 2 steps forward. 

👉 When the second pointer reaches the end, first pointer would reach to the middlemost element

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/middleNode.js)

```js
// To Be Added
```

## C++ Implementation

### [Solution](./C++/find_middle_linked_list.cpp)

```c++
/**
 * @author: aaditkamat
 * @date: 26/02/2019
 */
#include<forward_list>
#include<stack>
#include<iostream>
#include<cmath>
using namespace std;

int get_middle(forward_list<int> singly_linked_list) {
    stack<int> first, second;
    //Iterate through the linked list and store the elements in the first stack
    for (int &it : singly_linked_list) {
        first.push(it);
    }
    //Keep shifting the elements from the first stack into the second till both the stacks are
    //either of the same size (if the number of elements in the linked list is even) or
    //have a difference of one element (if the number of elements in the linked list are odd).
    //You can also use queues to do this because a middle element has equal distance from the
    //front and the back.
    while (abs(static_cast<int>(first.size() - second.size())) > 1) {
        second.push(first.top());
        first.pop();
    }
    return first.top();
}
int main() {
    forward_list<int> singly_linked_list{1, 2, 3, 4};    //implementation of singly linked list in C++
    cout << get_middle(singly_linked_list) << endl;
    return 0;
}
```