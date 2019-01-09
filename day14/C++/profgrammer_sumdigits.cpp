/*
  *@author: profgrammer
  *@date: 08-01-2019
*/

#include <bits/stdc++.h>
using namespace std;

int sum_digits(int n){
  if(n < 10) return n;
  return n%10 + sum_digits(n/10);
}

int main() {
  int n;
  cin>>n;
  cout<<num_digits(n)<<endl;
}