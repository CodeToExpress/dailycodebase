/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 08/01/2018
 */

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int N) {

    if( N == 0 ) {
        return 0;
    }
    return ( sumOfDigits(N/10) + N%10 );

}

int main(void) {

    int N;

    cout << "Enter the Number: ";
    cin >> N;

    cout << "\nThe sum of digits = " << sumOfDigits(N);

    return 0;
}

/*
---------------------
 Sample Input/Output
---------------------

    Enter the Number: 1234

    The sum of digits = 10

*/
