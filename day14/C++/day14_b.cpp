/*
* @author : dhruv-gupta14
* @date : 8/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int product_of_nos(int num1, int num2)
{
    if(num1 == 0 || num2 == 0)
        return 0;
    else if(num1==1)
        return num2;
    else if(num2==1)
        return num1;
    else if (num1 < 0 && num2 < 0)
        return product_of_nos(-num1,-num2);
    else if(num2 < 0)
        return product_of_nos(num2,num1);
    else
        return num1 + product_of_nos(num1,num2-1);
}

int main() {
	int num1,num2;
	cin >> num1 >> num2;
	cout << product_of_nos(num1,num2);
	return 0;
}
