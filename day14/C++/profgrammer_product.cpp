/*
  *@author: profgrammer
  *@date: 08-01-2019
*/

#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b){
  if(b == 0) return 0;
  // a*b = (a*b/2) + (a*b/2) + (b%2 == 0)? 0:a;
  int ans = mul(a, b/2);
  ans = ans + ans;
  if(b % 2 == 1) ans += a;
  return ans;
}

int main() {
  int a,b;
  cin>>a>>b;
  cout<<mul(a,b)<<endl;
}