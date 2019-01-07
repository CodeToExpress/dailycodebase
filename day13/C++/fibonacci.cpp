/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 07/01/2019
 */
#include <bits/stdc++.h>
using namespace std;

long long fibonacci(long long n)
{
    if (n <= 2)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    long long n;
    cout<<"Enter a number ";
    cin>>n;
    string pos;
    if(n%10 == 1)
        pos="-st";
    else if(n%10 == 2)
        pos="-nd";
    else
        pos="-th";

    cout<<"The "<<n<<pos<<" number of the fibonacci series is "<<fibonacci(n)<<endl;
    return 0;
}