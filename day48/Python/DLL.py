"""
@author: Abhishek Reddy
@date: 2/25/2019
"""

import gc


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class DLL:
    def __init__(self):
        self.head = None

    def push(self, data):
        new_node = Node(data)
        new_node.next = self.head
        new_node.prev = None
        if self.head is not None:
            self.head.prev = new_node
        self.head = new_node

    def pushAfter(self, prevnode, data):
        if prevnode is None:
            return
        new_node = Node(data)
        new_node.next = prevnode.next
        prevnode.next = new_node
        new_node.prev = prevnode
        if new_node.next is not None:
            new_node.next.prev = new_node

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            new_node.prev = None
            new_node.next = None
            self.head = new_node
            return
        else:
            tmp = self.head
            while tmp.next is not None:
                tmp = tmp.next
            tmp.next = new_node
            new_node.prev = tmp
            new_node.next = None

    def popAtPos(self, prevnode):
        if self.head is None or prevnode is None:
            return
        if self.head == prevnode:
            self.head = prevnode.next
        if prevnode.next is not None:
            prevnode.next.prev = prevnode.prev
        if prevnode.prev is not None:
            prevnode.prev.next = prevnode.next
        gc.collect()

    def popFirst(self):
        tmp = self.head
        self.head = self.head.next
        self.head.prev = None
        tmp.next = None
    def popEnd(self):
        tmp = self.head
        while tmp.next is not None:
            tmp = tmp.next
        tmp.prev.next = None
        tmp.prev = None

    def printList(self):
        temp = self.head
        while temp is not None:
            print(temp.data)
            temp = temp.next


d = DLL()

