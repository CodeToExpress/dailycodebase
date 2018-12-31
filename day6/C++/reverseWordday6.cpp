/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	
	int start = 0;
	int len = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] != ' '){
			len++;
		}
		else{
			v.push_back(s.substr(start, len));
			start = i + 1;
			len = 0; 
		}
	}
	//for last word
	v.push_back(s.substr(start, len));	
	string t;
	for(int i = 0; i < v.size(); i++){
		reverse(v[i].begin(), v[i].end());
		t += v[i];
		t += " ";
	}
	cout << t;
	return 0;
}
