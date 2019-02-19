/**
 * @author: aaditkamat
 * @date: 19/02/2019
 */

#include<vector>
#include<stack>
#include<iostream>

/**
 * The Queue ADT follows the day 41 specifications.
 */
template<class T>
class Queue {
private:
  std::stack<T> data;
public:
  Queue(std::vector<T> data);
  bool empty();
  void enqueue(T);
  T dequeue();
  T front();
  T back();
};
