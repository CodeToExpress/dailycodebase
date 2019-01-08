/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;


int main(){
	string s1, s2;
	cin >> s1 >> s2;
	if(s1.length() != s2.length()) cout << "Enter strings of equal length";
	else{
		int count = 0; 
		for(int i = 0; i < s1.length(); i++){
			if(s1[i] != s2[i]) count++;
		}
		cout << "The Hamming Distance is: " << count;
	}
	return 0;
}
