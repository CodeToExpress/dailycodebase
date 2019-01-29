/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin >> s;
	string t = s;
	reverse(s.begin(), s.end());
	if(s.compare(t) == 0) cout << "Palindrome!";
	else cout << "Not a palindrome";
	return 0;
}
