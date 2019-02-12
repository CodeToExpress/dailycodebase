template <class T, const int MAX_SIZE>
class Stack {
  private:
    T data[MAX_SIZE];
    int size = 0;
  public:
    bool isEmpty();
    bool isFull();
    void push(T element);
    T pop();
    T peek();
};
