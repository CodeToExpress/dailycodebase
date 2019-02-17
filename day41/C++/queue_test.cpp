/**
 * @author: aaditkamat
 * @date: 17/02/2019
 */
#include "queue.cpp"

void printQueue(Queue<int> queue) {
  std::cout << "Queue status: " << queue.front() << " " << queue.back() << "\n";
}

int main() {
  Queue<int> queue;
  queue.dequeue();
  queue.enqueue(3);
  printQueue(queue);
  queue.enqueue(4);
  printQueue(queue);
  queue.enqueue(5);
  printQueue(queue);
  queue.dequeue();
  printQueue(queue);
  return 0;
}
