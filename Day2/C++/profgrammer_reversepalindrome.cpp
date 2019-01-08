/*
  *@author: profgrammer
  *@date: 30-12-2018
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
  string s;
  cin>>s;

  // method 1: print the string in reverse order
  cout<<"The reversed string is: ";
  for(int i = s.size()-1;i >= 0;i--) cout<<s[i];
  cout<<endl;

  // method 2: swap characters at either end
  string s1 = s;
  for(int i = 0, j = s1.size()-1;i <= j;i++, j--){
    char temp = s1[i];
    s1[i] = s1[j];
    s1[j] = temp;
  }
  cout<<"The reversed string is: "<<s1<<endl;

  // method 3: library functions
  s1 = s;
  reverse(s1.begin(), s1.end());
  cout<<"The reversed string is: "<<s1<<endl;

  // to check if the string is a palindrome, we need to check if it is equal to its reverse. 

  if(s.compare(s1) == 0) cout<<"The string is a palindrome"<<endl;
  else cout<<"The string is not a palindrome\n";

}