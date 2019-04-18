/*
    @author: AkshitAggarwal
    @date: 18/03/2019
*/

#include<iostream>

using namespace std;

long int factorial(int n)
{
    if(n == 1) return 1;
    else return n * factorial( n - 1);
}

int fibonacci(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int input;
    cin>>input;
    long int fact = factorial(input);
    cout<<"Factorial of "<<input<<" is "<<fact<<'\n';
    int fib = fibonacci(input);
    cout<<"The "<<input<<"th element in the fibonacci series is "<<fib<<'\n';
    for(int i = 0; i <= input; i++)
    {
        int k = fibonacci(i);
        cout<<k<<" ";
    }
    return 0;
}