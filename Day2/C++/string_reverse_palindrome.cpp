/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 15/01/2018
 */

#include <iostream>
#include <string>
using namespace std;

//function to reverse the string.
string reverse_string( string str ) {

    int i = 0 , j = str.length() - 1;

    while(i <= j) {
        swap(str[i++] , str[j--]);
    }

    return str;
}

//function that checks the string is palindrome or not.
bool checkPalindrome( string str ) {

    int i = 0 , j = str.length() - 1;

    while( i <= j ) {
        if( str[i++] != str[j--] ) {
            return false;
        }
    }

    return true;
}


int main(void) {

    cout << "Reverse of abcd: " << reverse_string("abcd");

    cout << "\n\nReverse of abcde: " << reverse_string("abcde");

    cout << endl;

    if( checkPalindrome("amma") ) {
        cout << "\nPalindrome\n";
    }
    else {
        cout << "\nNot a palindrome\n";
    }


    return 0;
}

/**
Output:

Reverse of abcd: dcba

Reverse of abcde: edcba

Palindrome

*/
