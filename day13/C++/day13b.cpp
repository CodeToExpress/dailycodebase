/*
* @author : dhruv-gupta14
* @date : 8/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

long long fib_num(long long n)
{
    if (n <= 2)
        return 1;
    return fib_num(n-1)+fib_num(n-2);
}
int main()
{
    long long n;
    cin>>n;
    cout<<fib_num(n)<<endl;
    return 0;
}
