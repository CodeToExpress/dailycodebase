/**

    Fibonacci sequence... 1 1 2 3 5 8 13 21 34 55 ...

    F(N) = F(N-1) + F(N-2)

    where F(0) = 1 , F(1) = 1

    @author: Karthick
    @github: Karthikn2098
*/

#include <bits/stdc++.h>
using namespace std;

/**
 * @desc: recursive function to calculate the Nth Fibonacci number.
 * @param: the integer N.
 * @return: Nth Fibonacci number.
 */
long long int fib(long long int N) {

    if(N == 1 || N == 2)
        return 1;

    return fib(N-1) + fib(N-2);
}

int main(void) {

    long long int N;

    cout << "Enter N: ";
    cin >> N;

    cout << "The " << N << "th fibonacci number is... " << fib(N) << ".";

    return 0;
}
