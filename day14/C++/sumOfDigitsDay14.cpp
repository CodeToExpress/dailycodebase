/**
 * @author:divyakhetan
 * @date: 10/1/2019
 */


#include<bits/stdc++.h>
using namespace std;


int sum(int n){
	if(n < 10) return n;
	else return n % 10 + sum(n /10);
}
int main(){
	int n;
	cin >> n;
	cout << "The sum of digits is " << sum(n);
	return 0;
}
