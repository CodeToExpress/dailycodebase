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
	    int flag = 0, i;
	    transform(sa.begin(), sa.end(), sa.begin(), ::tolower);
	    transform(sb.begin(), sb.end(), sb.begin(), ::tolower);
	    for(i = 0; sa[i] && sb[i]; i++){
	        count[sa[i] - 97]++;
	        count[sb[i] - 97]--;
	    }
	    for(int i = 0; i < 26; i++){
	        if(count[i]){
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0)
	    cout << "Anagrams";
	    else
	    cout << "Not anagrams";
	}
	return 0;
}
