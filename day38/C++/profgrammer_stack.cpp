/*
  * @author profgrammer
  * @date 17-2-2019
*/

#include <bits/stdc++.h>
using namespace std;

class MyStack{
  private:
    int top;
    int stack[100];
    int size;
  public:
    MyStack(int _size){
      top = -1;
      size = _size;
    }

    bool isEmpty(){
      return top == -1;
    }

    bool isFull(){
      return top == size - 1;
    }

    int peek(){
      if(isEmpty()) {cout<<"Stack empty..\n"; return -1;}
      return stack[top];
    }

    void push(int x){
      if(isFull()) cout<<"Stack full..\n";
      else stack[++top] = x;
    }

    void pop(){
      if(isEmpty()) cout<<"Stack empty..\n";
      else top--;
    }
};

int main(){
  MyStack stack(2);
  stack.push(1);
  stack.push(2);
  stack.push(3); // err
  cout<<stack.peek()<<endl;
  stack.pop();
  stack.pop();
  stack.pop(); // err
  cout<<stack.peek()<<endl;
}
