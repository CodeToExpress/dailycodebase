#include<iostream>
#include<limits>
#include<array>
#include "stack.h"
#define SIZE 6

template<class T, const int MAX_SIZE>
bool Stack<T, MAX_SIZE>::isEmpty() {
  return this -> size == 0;
}

template<class T, const int MAX_SIZE>
bool Stack<T, MAX_SIZE>::isFull() {
  return this -> size == MAX_SIZE;
}

template<class T, const int MAX_SIZE>
void Stack<T, MAX_SIZE>::push(T element) {
  if (this -> isFull()) {
    std::cerr << "Cannot push an element into a full stack\n";
    return;
  }
  data[this -> size - 1] = element;
  ++this->size;
}

template<class T, const int MAX_SIZE>
T Stack<T, MAX_SIZE>::pop() {
  if (this -> isEmpty()) {
    std::cerr << "Cannot pop an element from an empty stack\n";
    return NULL;
  }
  T element = this -> peek();
  data[this -> size - 1] = NULL;
  --this -> size;
  return element;
}

template<class T, const int MAX_SIZE>
T Stack<T, MAX_SIZE>::peek() {
  if (this -> isEmpty()) {
    std::cerr << "No element in the stack\n";
    return NULL;
  }
  T element = data[this -> size - 2];
  return element;
}

int main() {
  Stack<int, SIZE> int_stack;
  std::cout << (int_stack.isEmpty() ? "Stack is empty" : "Stack is full") << "\n";
  int element = int_stack.pop();
  element = int_stack.peek();
  std::array<int, SIZE> a{3, 4, 9, 8, 5, 6};
  for (int i = 0; i < SIZE; i++) {
    int_stack.push(a[i]);
  }
  std::cout << (int_stack.isFull() ? "Stack is full" : "Stack is empty") << "\n";
  int_stack.push(9);
  std::cout << int_stack.pop() << "\n";
  std::cout << int_stack.peek() << "\n";
  return 0;
}
