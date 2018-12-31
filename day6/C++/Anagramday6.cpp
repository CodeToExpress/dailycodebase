/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;


int main(){
	string s1, s2;
	cin >> s1 >> s2;
	if(s1.length() != s2.length()) cout << "Not of same length";
	else{
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		if(s1.compare(s2) == 0) cout << "Anagrams!";
		else cout << "Not anagrams";
	} 
	return 0;
}
