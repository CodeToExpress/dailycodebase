/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;

int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	
	int m = s1.length();
	int n = s2.length();
	int edit[m + 1][n + 1]; 
	
	for(int i = 0; i <= n; i++){
		edit[0][i] = i;
	}
	
	
	for(int i = 0; i <= m; i++){
		edit[i][0] = i;
	}
	
	for(int i =  1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(s1[i - 1] == s2[j - 1]) edit[i][j] = edit[i -1 ][j - 1];
			else edit[i][j] = 1 + min(edit[ i -1][j], edit[i - 1][j - 1], edit[i][j - 1]);  
		}
	}
	
	if(edit[m][n] <= 1) cout << "At edit distance 1";
	else cout << "Not at edit distance 1";
	return 0;
}
