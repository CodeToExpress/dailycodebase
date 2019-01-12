/**
 * @author:divyakhetan
 * @date: 10/1/2019
 */


#include<bits/stdc++.h>
using namespace std;


int product(int a, int b){
	if(b == 0) return 0; // base case;
	int ans = product(a, b/2);
	if(b % 2 == 0) return 2 * ans;
	else return 2 * ans + a;
}
int main(){
	int num1, num2;
	cin >> num1 >> num2;
	int ans = product(num1, num2);
	//since we are adding the first number in the recursive function, we get the ans only according to the num1, hence we need to adjust the sign accd to the num2.
	if( (num2 < 0 && num1 > 0) || (num2 < 0 && num1 < 0)) ans *= -1;
	cout << "The multiplication is " << ans;
}
