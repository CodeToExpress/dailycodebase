/**
 * @author Bhanu0202
 * @date 27/12/2018
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	string sa;
	getline(cin, sa);
	int l = sa.length();
	if(sa[0]>=97 && sa[0]<=122)
	sa[0] -= 32;
	for(int i = 0; i < l; i++){
	    if(sa[i] == 32 && sa[i + 1]>=97 && sa[i + 1]<=122){
	        sa[i + 1] -= 32;  
	    }
	}
	cout << sa;
	return 0;
}
