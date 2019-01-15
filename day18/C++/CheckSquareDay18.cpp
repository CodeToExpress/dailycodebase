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
	int b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	
	}
	
	for(int i = 0; i < n; i++){
		cin >> b[i];
	
	}
	int num;
	cin >> num;
	sort(a, a + n);
	sort(b, b + n);
	

	bool flag = true;
	for(int i = 0; i< n; i++){
		
		if((int) pow(a[i], num) != b[i]){
			flag = false;
			break;
		}
	}
	if(flag)
	cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}
