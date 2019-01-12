/**
 * @author:divyakhetan
 * @date: 10/1/2019
 */

#include<bits/stdc++.h>
using namespace std;


int fibo(int n){
	if(n <= 2) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}
int main(){
	
	int n;
	cin >> n;
	
	cout << "The " << n << "th fibonacci number is " << fibo(n) << endl;
	
	for(int i = 1; i <= n; i++){
		if(i == n){
			cout << fibo(i);
		}
		else{
			cout << fibo(i) << " , ";
		}
	}
	return 0;
}
