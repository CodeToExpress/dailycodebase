/*
  *@author: profgrammer
  *@date: 30-12-2018
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;
  cin>>s1>>s2;
  cout<<"The hamming distance is : ";
  // the hamming distance is calculated for strings of EQUAL length. hence if the lengths differ we return -1 as an invalid case.
  if(s1.size() != s2.size()) cout<<-1<<endl;
  else{
    // iterate through both strings and find the number of indices where the strings differ. the total of these indices is the hamming distance
    int hammingDistance = 0;
    for(int i = 0;i < s1.size();i++){
      if(s1[i] != s2[i]) hammingDistance++;
    }
    cout<<hammingDistance<<endl;
  }

}