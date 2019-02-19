/**
 * @author: aaditkamat
 * @date: 19/02/2019
 */
#include "queue.h"

template<class T>
Queue<T>::Queue(std::vector<T> data) {
  for (int i = 0; i < data.size(); i++) {
    this -> enqueue(data[i]);
  }
}

template<class T>
bool Queue<T>::empty() {
  return this -> data.empty();
}

template<class T>
void Queue<T>::enqueue(T element) {
  if (this -> data.empty()) {
    this-> data.push(element);
    return;
  }
  T curr = this -> data.top();
  this -> data.pop();
  enqueue(element);
  this -> data.push(curr);
}

template<class T>
T Queue<T>::dequeue() {
  if (this -> data.empty()) {
    std::cerr << "Cannot remove element from an empty queue\n";
    return NULL;
  }
  if (this -> data.size() == 1) {
    T element = this -> data.top();
    this -> data.pop();
    return element;
  }
  T curr = this -> data.top();
  this -> data.pop();
  return curr;
}

template<class T>
T Queue<T>::back() {
  if (this -> data.empty()) {
    std::cerr << "Cannot return an element from an empty queue\n";
    return NULL;
  }
  if (this -> data.size() == 1) {
    T element = this -> data.top();
    return element;
  }
  T curr = this -> data.top();
  this -> data.pop();
  T element = back();
  this -> data.push(curr);
  return element;
}

template<class T>
T Queue<T>::front() {
  if (this -> data.empty()) {
    std::cerr << "Cannot return an element from an empty queue\n";
    return NULL;
  }
  return this -> data.top();
}
