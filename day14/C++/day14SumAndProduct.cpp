/*
author:YashMeh
date  :29/1/19
*/
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    return n;
    int smallCalc=sum(n/10);
    return smallCalc+n%10;
}
int product(int m,int n)
{
    if(m==0)
    return 0;
    int smallCalc=product(m-1,n);
    return smallCalc+n;
}
main()
{
    cout<<sum(123456)<<endl;
    cout<<product(8,4)<<endl;
}