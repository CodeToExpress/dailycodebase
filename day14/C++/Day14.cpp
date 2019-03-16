/*
    @author: AkshitAggarwal
    @date: 18/03/2019
*/

#include<iostream>
using namespace std;

int sumOfDigits(long int n)
{
    if(n == 0) return 0;
    else return n % 10 + sumOfDigits(n / 10);
}

int product(int n1, int n2)
{
    if(n2 < 0) return -1 * product(n1, n2 - 2 * n2);
    else if(n2 == 1) return n1;
    else return n1 + product(n1, n2 - 1);
}

int main()
{
    long int number = 123456;
    int ans = sumOfDigits(number);
    cout<<"The sum of Digits of 123456 ="<<ans<<'\n';
    int n1 = 0, n2 = 0;
    cin>>n1>>n2;
    int prod = product(n1, n2);
    cout<<"Product of the two numbers is "<<prod<<'\n';
    return 0;
}