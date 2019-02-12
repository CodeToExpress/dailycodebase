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

void printReverseFirst(std::stack<int> stack) {
  if (stack.empty()) {
    return;
  }
  int element = get_top_element(stack);
  printReverseFirst(stack);
  std::cout << element << "\n";
}

void printReverseSecond(std::stack<int> stack) {
  if (stack.empty()) {
    return;
  }
  std::stack<int> new_stack;
  while(!stack.empty()) {
    int element = get_top_element(stack);
    new_stack.push(element);
  }
  while(!new_stack.empty()) {
    int element = get_top_element(new_stack);
    std::cout << element << "\n";
  }
}

int main() {
  std::stack<int> stack;
  int a[SIZE] = {2, 4, 8, 9, 7, 6, 27, 5, 3, 2, 4};
  for (int i = 0; i < SIZE; i++) {
    stack.push(a[i]);
  }
  //first method to reverse the stack
  printReverseFirst(stack);
  //second method to reverse the stack
  printReverseSecond(stack);
  return 0;
}
