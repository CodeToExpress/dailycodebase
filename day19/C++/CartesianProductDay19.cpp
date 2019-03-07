/**
 * @author divyakhetan
 * @date 16/1/2019
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter length of 1st and 2nd array";
	int n1, n2;	
	cin >> n1 >> n2;
	int a[n1];
	int b[n2];
	for(int i = 0; i < n1; i++){
		cin >> a[i];
		
	}
	
	for(int i = 0; i < n2; i++){
		cin >> b[i];
	}
	
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			cout << "[ " << a[i]  << " " << b[j] << " ] " << endl;
		}
	}
	return 0;
}
