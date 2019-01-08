/**
 * @author Bhanu0202
 * @date 27/12/2018
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	string sa, sb;
	cin >> sa >>sb;
	int la = sa.length();
	int lb = sb.length();
	int count[26] = {0};
	if(la != lb){
	    cout << "Invalid Input";
	}
	else{
	    int flag = 0;
	    sort(sa.begin(), sa.end()); 
	    sort(sb.begin(), sb.end());
	    if(sa != sb){
	        flag = 1;
	    }
	    if(flag == 0)
	    cout << "Anagrams";
	    else
	    cout << "Not anagrams";
	}
	return 0;
}

