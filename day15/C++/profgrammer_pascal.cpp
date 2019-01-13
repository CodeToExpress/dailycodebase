/*
  *@author: profgrammer
  *@date: 09-01-2019
*/

#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r){
  if(n < r || n < 0 || r < 0) return 0;
  if(n == r || r == 0) return 1;
  return ncr(n-1,r) + ncr(n-1, r-1);
}

int main() {
  int n;
  cin>>n;
  for(int i = 0;i <= n;i++){
    for(int j = 0;j <= i;j++) cout<<ncr(i,j)<<" ";
    cout<<endl;
  }
}