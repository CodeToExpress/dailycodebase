/**

    Factorial of N = N * (N-1) * (N-2) ....... 3 * 2 * 1;

    Factorial of N = N * Factorial of (N-1)

    @author: Karthick
    @github: Karthikn2098

*/

#include <bits/stdc++.h>
using namespace std;

/**
 * @desc: recursive function to compute factorial of the Number.
 * @param: integer N.
 * @return: factorial of N.
 */
long long int factorial(long long int N) {

    if(N == 0 || N == 1)
        return 1;

    return N * factorial(N-1);

}

int main(void) {

    long long int N;

    cout << "Enter N: ";
    cin >> N;

    cout << "\n\nFactorial of " << N << " is... " << factorial(N) << ".";

    return 0;
}
