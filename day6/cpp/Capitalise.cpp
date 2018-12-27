/**
 * @author Bhanu0202
 * @date 27/12/2018
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string sa;
	getline(cin, sa);
	int l = sa.length();
	sa[0] -= 32;
	for(int i = 0; i < l; i++){
	    if(sa[i] == 32 && sa[i+1] != 32){
	        sa[i + 1] -= 32;  
	    }
	}
	cout << sa;
	return 0;
}
