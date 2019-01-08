/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 07/01/2019
 */
#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    if (n <= 1)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    long long n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}