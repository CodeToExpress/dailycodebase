/**
 * @author:divyakhetan
 * @date: 3/1/2019
 */



#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1,s2;
  cin >> s1 >> s2;

  int n = s1.length();
  int m = s2.length();

  int lcs[n + 1][m + 1];

  int ma = 0;
  int mi = 0; 
  int mj = 0;
  for(int i =0; i <=n; i++){
    for(int j = 0; j <=m;j++){
      if(i == 0 || j == 0) lcs[i][j] = 0;
      else if(s1[i -1] == s2[j - 1]){
        lcs[i][j] = 1 + lcs[i - 1][j - 1];
        if(lcs[i][j] > ma){
           mi = i;
           mj = j;
           ma = lcs[i][j];
        }
       
      }
      else{
        lcs[i][j]= 0;
      }
    }
  }
  int i = 0;
  int j = 0;
  string ans= "";
  for (i=mi, j=mj; i>=0; i--, j--) {
        if (!(i<=0 || j<=0) && lcs[i][j] != 0) {
            ans += s1[i-1];
        } else {
            break;
        }
    }
    reverse(ans.begin(), ans.end());
  cout << "len : " << ma << " is " << ans;   
}
