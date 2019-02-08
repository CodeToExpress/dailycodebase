/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 15/01/2018
 */

#include <iostream>
using namespace std;

void fizzBuzz1(int N) {

    for( int i = 1 ; i <= N ; i++ ) {

        if( (i % 3 == 0) && (i % 5 == 0) ) {
            cout << "FizzBuzz ";
        }
        else if( i % 3 == 0 ) {
            cout << "Fizz ";
        }
        else if( i % 5 == 0 ) {
            cout << "Buzz ";
        }
        else {
            cout << i << " ";
        }

    }
}

void fizzBuzz2(int N) {

    for( int i = 1 ; i <= N ; i++ ) {

        string str = "";

        if(i % 3 == 0) str += "Fizz";

        if(i % 5 == 0) str += "Buzz";

        if(str == "") {
            cout << i << " ";
        }
        else {
            cout << str << " ";
        }

    }

}

int main(void) {

    int N;

    cout << "Enter N: ";
    cin >> N;

    fizzBuzz1(N);
    cout << endl << endl;

    fizzBuzz2(N);
    cout << endl << endl;

    return 0;
}

/**
---------------------
 Sample Input/Output
---------------------

Enter N: 25
    1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz

    1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz

*/
