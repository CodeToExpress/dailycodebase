/**
 * @author:divyakhetan
 * @date: 10/1/2019
 */


#include<bits/stdc++.h>
using namespace std;

int pascal(int i, int j){
	if(j == 1) return 1;
	if(i == j ) return 1;
	else return pascal(i - 1, j) + pascal(i - 1, j - 1);
}

int main(){
	int n;
	cin >> n;
	
	for(int i = 1; i  <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << pascal(i,j) << " ";
		}
		cout << endl;
	}
	return 0;
}
