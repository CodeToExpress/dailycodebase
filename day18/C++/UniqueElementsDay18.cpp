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
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		
	}
	
	//since sorted
	
	int count = 1;
	int pos = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] != pos){
			count++;
			pos = a[i];
			
		}
	}
	
	cout << count << endl;
	return 0;
}
