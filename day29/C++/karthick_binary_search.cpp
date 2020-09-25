/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 31/01/2018
 */

#include <iostream>
using namespace std;

/** @desc: splits the array into two sections at each step, then checks the element in the desired one.
  * @param: array , key (to be found), size of the array.
  * @return: index of key if present , -1 otherwise.
  * @TimeComplexity: O( logn )   < n = size of the array >
  */
int Binary_search(int arr[] , int key, int N) {

    int low = 0 , high = N-1 , mid;

    while(low <= high) {

        mid = low + (high - low) / 2;   //like (low + high)/2 but efficient.

        if(key == arr[mid]) {
            return mid;
        }
        else if( key > arr[mid] ) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main(void) {

    int arr[] = { 1, 3, 5, 7, 8, 9, 100, 234, 788, 899 };

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBinary_search(arr , 100) = " << Binary_search(arr, 100, sizeOfArray ) << endl;

    cout << "\nBinary_search(arr , 1000) = " << Binary_search(arr, 1000, sizeOfArray ) << endl;

    return 0;
}

/*
---------------
 Sample Output
---------------
Binary_search(arr , 100) = 6
Binary_search(arr , 1000) = -1
*/