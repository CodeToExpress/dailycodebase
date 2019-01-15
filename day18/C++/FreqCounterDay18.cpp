/**
 * @author divyakhetan
 * @date 14/1/2019
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
	    std::cout << it->first << " comes " << it->second << " times " << '\n';
	}
	
	
	return 0;
}
