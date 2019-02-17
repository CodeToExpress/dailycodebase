/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */
#include<iostream>
#include<queue>
#define SIZE 4
int main() {
  std::queue<int> first, second, result;
  int firstElements[SIZE] = {4, 3, 2, 1};
  int secondElements[SIZE] = {8, 7, 6, 5};
  for (int i = 0; i < SIZE; i++) {
    first.push(firstElements[i]);
    second.push(secondElements[i]);
  }
  while(!first.empty() && !second.empty()) {
    result.push(second.front());
    second.pop();
    result.push(first.front());
    first.pop();
  }
  while (!result.empty()) {
    std::cout << result.front() << " ";
    result.pop();
  }
  std::cout << "\n";
  return 0;
}
