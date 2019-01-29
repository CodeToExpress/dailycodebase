/*
* @author : dhruv-gupta14
* @date : 8/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

long long calc_fact(long long n)
{
    if (n <= 1)
        return 1;
    return n*calc_fact(n-1);
}
int main()
{
    long long n;
    cin>>n;
    cout<<calc_fact(n)<<endl;
    return 0;
}
