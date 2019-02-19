/**
 * @author: aaditkamat
 * @date: 19/02/2019
 */
#include "queue.cpp"

int main() {
  Queue<int> queue(std::vector<int>{1, 2, 4, 3});
  while(!queue.empty()) {
    std::cout << "Front: " << queue.front() << std::endl;
    std::cout << "Back: " << queue.back() << std::endl;
    queue.dequeue();
  }
}
