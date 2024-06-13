/*
  * @author profgrammer
  * @date 18-02-2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  queue<int> q;
  for(int i = 0;i < n;i++){
    int x;
    cin>>x;
    q.push(x);
  }
  stack<int> s;
  for(int i = 0;i < n;i++){
    s.push(q.front());
    q.pop();
  }
  for(int i = 0;i < n;i++){
    q.push(s.top());
    s.pop();
  }

  queue<int> q1(q);
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
}
