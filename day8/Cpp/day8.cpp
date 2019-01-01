/*
* @author : dhruv-gupta14
* @date : 31/12/2018
*/

#include<bits/stdc++.h> 
using namespace std; 
  
int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 
  
int levenshtein_distance(string str1, string str2, int m, int n) 
{ 
    int ld[m+1][n+1]; 
  
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i==0) 
                ld[i][j] = j;
  
            else if (j==0) 
                ld[i][j] = i;
  
 
            else if (str1[i-1] == str2[j-1]) 
                ld[i][j] = ld[i-1][j-1]; 
  
            else
                ld[i][j] = 1 + min(ld[i][j-1], ld[i-1][j], ld[i-1][j-1]);  
        } 
    } 
  
    return ld[m][n]; 
} 
  
int main() 
{ 
    string str1,str2;
    cin >> str1 >> str2;
  
    cout << levenshtein_distance(str1, str2, str1.length(), str2.length()); 
  
    return 0; 
}
