/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */

/*
 * This is a linked list implementation of queues.
 */
#include "queue.h"

template<class T>
Node<T>::Node(T& element) {
  this -> value = element;
}

template<class T>
void Queue<T>::enqueue(T element) {
  Node<T>* element_node = new Node<T>(element);
  if (this -> front_node == NULL) {
    this -> front_node = element_node;
    this -> back_node = element_node;
  }
  else {
    this -> back_node -> next = element_node;
    this -> back_node = element_node;
  }
}

template<class T>
void Queue<T>::dequeue() {
  if (this -> front_node == NULL) {
    std::cerr << "Cannot remove an element from an empty queue\n";
    return;
  }
  this -> front_node = this -> front_node -> next;
}

template<class T>
T Queue<T>::front() {
  if (this -> front_node == NULL) {
    std::cerr << "Cannot return the front element of an empty queue\n";
    return NULL;
  }
  return this -> front_node -> value;
}

template<class T>
T Queue<T>::back() {
  if (this -> back_node == NULL) {
    std::cerr << "Cannot return the back element of am empty queue\n";
    return NULL;
  }
  return this -> back_node -> value;
}
