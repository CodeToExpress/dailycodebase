/**
 * @author Bhanu0202
 * @date 27/12/2018
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string sa, sb;
	getline(cin, sa);
	int l = sa.length();
	vector<string> s;
	s.push_back("");
	int c = 0;
	for(int i = 0; i < l; i++){
    if(sa[i] == ' '){
        c++;
        s.push_back("");
    }
    else
        s[c] += sa[i];
    }
    for(int i = 0; i <= c; i++){
        reverse(s[i].begin(), s[i].end());
        sb += s[i]  + " ";
    }
    cout << sb;
	return 0;
}
