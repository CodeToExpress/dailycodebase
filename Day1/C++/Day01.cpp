/*This program prints a pattern of numbers 1 to n, wherein
  every multiple of 3 is Fizz, Every multiple of 5 is Buzz
  and every multiple of 3 and 5 both is replaced by Fizzbuzz*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\n===FIZZBUZZ===";
    cout<<"\nEnter a number: ";
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 ==0 && i % 5 == 0) cout<<" FIZZBUZZ ";

        else if(i % 3 == 0) cout<<" FIZZ ";

        else if(i % 5 == 0) cout<<" BUZZ ";

        else cout<<i<<" ";
    }

    return 0;
}
