/*
* @author : dhruv-gupta14
* @date : 8/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int num)
{
    if(num == 0)
        return 0;
    
    return sum_of_digits(num/10) + num%10;
}

int main() {
	int num;
	cin >> num;
	cout << sum_of_digits(num);
	return 0;
}
