/**
 * @author divyakhetan
 * @date 16/1/2019
 */

#include<bits/stdc++.h>
using namespace std;


void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	srand(time(NULL));
	for(int i = n - 1; i >= 0; i--){
		int num = rand() % (i + 1); //need to get an index from 0..i-1
		swap(a[i], a[num]);
	}
	cout << "The shuffled array is: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
