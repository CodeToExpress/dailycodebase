/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 08/01/2018
 */

#include <bits/stdc++.h>
using namespace std;

int product(int number , int times) {

    //if multiplier is a negative number.
    if(times < 0) {
        return number + product(number , times+1);
    }

    if(times == 0) {
        return 0;
    }

    return number + product(number , times-1);
}

int main(void) {

    int A , B;

    cout << "Enter A & B: " ;
    cin >> A >> B;

    cout << "Product of " << A << " & " << B << " = " << product(A , B);

    return 0;
}

/*
---------------------
 Sample Input/Output
---------------------

        1)  Enter A & B: 10 5
            Product of 10 & 5 = 50

        2)  Enter A & B: -2 -3
            Product of -2 & -3 = -6

*/
