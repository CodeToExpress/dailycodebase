/**
 * @author:aaditkamat
 * @date: 13/02/2019
 */
#include<iostream>
#include<stack>
#define SIZE 11

int get_top_element(std::stack<int>& stack) {
  int first = stack.top();
  stack.pop();
  return first;
}

int maximum_element(std::stack<int> stack) {
  if(stack.empty()) {
    std::cerr << "Stack is empty and has no maximum element";
    return NULL;
  }
  int max = get_top_element(stack);
  while(!stack.empty()) {
    int curr = get_top_element(stack);
    if (curr > max) {
      max = curr;
    }
  }
  return max;
}

int main() {
  std::stack<int> stack;
  int a[SIZE] = {2, 4, 8, 9, 7, 6, 27, 5, 3, 2, 4};
  for (int i = 0; i < SIZE; i++) {
    stack.push(a[i]);
  }
  std::cout << maximum_element(stack) << "\n";
  return 0;
}
