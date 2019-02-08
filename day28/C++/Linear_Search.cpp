/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 31/01/2018
 */

#include <iostream>
using namespace std;

/** @desc: compares the key with each array elements.
  * @param: array , key (to be found), size of the array.
  * @return: index of key if present , -1 otherwise.
  * @TimeComplexity: O(n)   < n = size of the array >
  */
int linear_search(int* arr , int key, int N) {

    for( int i = 0 ; i < N ; i++ ) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main(void) {

    int arr[] = { 12, 15, 1, 16, 20, 100, 89, 97, 205, 345, 467 };

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    cout << "\nLinear_search(arr , 20) = " << linear_search(arr, 20, sizeOfArray ) << endl;

    cout << "\nLinear_search(arr , 1000) = " << linear_search(arr, 1000, sizeOfArray ) << endl;

    return 0;
}

/*
---------------
 Sample Output
---------------

Linear_search(arr , 20) = 4

Linear_search(arr , 1000) = -1

*/
