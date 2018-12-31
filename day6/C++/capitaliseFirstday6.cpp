/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	getline(cin, s);
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.length(); i++){
		if(s[i - 1] == ' '){
			if(s[i] >= 'a' && s[i] <= 'z') s[i] =  toupper(s[i]);
		}
	}
	
	cout << s << endl;
	return 0;
}
