/*
  *@author: profgrammer
  *@date: 31-12-2018
*/

#include <bits/stdc++.h>
#define inf 100000000
using namespace std;

string s1, s2;

int dp[1500][1500];

// function that returns minimum edits required to convert s1[0 .. i-1] into s2[0 .. j-1]
int minEdit(int i, int j){
  // base cases. if s1 finishes we need j insertions, if s2 finishes we need i insertions
  if(i == 0) return j;
  if(j == 0) return i;
  // housekeeping for dp with memoisation
  if(dp[i][j] != inf) return dp[i][j];
  // if the last characters are the same, no need to change anything and move both pointers by 1 unit
  if(s1[i-1] == s2[j-1]) {
    return dp[i][j] = minEdit(i-1, j-1);
  }
  // replace s1[i] to be s2[j]. the strings to be checked are still s1[0 .. i-1] and s2[0 .. j-1] but the cost is +1
  int minReplace = 1 + minEdit(i-1, j-1);
  // delete s1[i], cost is +1 and the strings are now s1[0 .. i-1] and s2[0 .. j] because we need to compare the i-1th character with the jth character
  int minDelete = 1 + minEdit(i-1, j); 
  // insert a character into s1 at index i. cost is +1 and now the strings to be checked are s1[0 .. i] because the ith character isn't compared yet and s2[0 .. j-1]
  int minInsert = 1 + minEdit(i, j-1);
  // return min of these 3 values
  return dp[i][j] = min(minReplace, min(minDelete, minInsert));
}

int main() {
  for(int i = 0;i < 1500;i++){
    for(int j = 0;j < 1500;j++) dp[i][j] = inf;
  }
  cin>>s1>>s2;
  cout<<"The minimum edit distance is: ";
  cout<<minEdit(s1.size(), s2.size())<<endl;
}