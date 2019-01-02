/**
 * @author:divyakhetan
 * @date: 2/1/2019
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n; // no.of char
  cin >> n;
  char pattern[n];
  for(int i = 0; i < n; i++) cin >> pattern[i];


  int hash_str[256];
  int hash_pattern[256];

  memset(hash_str, 0, sizeof(hash_str));
  memset(hash_pattern, 0, sizeof(hash_pattern));
  
  if(n > s.length()) cout << "Not possible";
  else{

    for(int i = 0; i < n; i++){
      char x = pattern[i];
      hash_pattern[x]++;
    }

    
    int count = 0;
    int start = 0;
    int start_ind = -1;
    int minlen = INT_MAX;
    for(int i = 0; i < s.length(); i++){
      char x = s[i];
      hash_str[x]++;

      //check if part of pattern also and we need to avoid overcounting for a particular char.

      if(hash_pattern[x] != 0 && hash_str[x] <= hash_pattern[x]) count++;

      // avoid useless char from the start 

      if(count == n){
        
        while(hash_str[s[start]] > hash_pattern[s[start]] ){
          cout << s[start] << " ";
          hash_str[s[start]]--;
          start++; // move start to right
        }

        int len = i - start + 1;
        if(len < minlen){
          minlen = len;
          start_ind = start;
        }
      }
     

      
    }
    // if(start_ind == -1) cout << "No such substring";
    // else
    // cout << s.substr(start_ind, minlen);
  }
}
