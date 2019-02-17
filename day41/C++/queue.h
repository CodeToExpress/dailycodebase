/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */

#include<iostream>
#include<vector>

template<class T>
struct Node {
  Node<T>* next;
  T value;
  Node(T& element);
};

template<class T>
class Queue {
  private:
    Node<T>* front_node = NULL;
    Node<T>* back_node = NULL;
  public:
    void enqueue(T element);
    void dequeue();
    T front();
    T back();
};
