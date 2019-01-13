/**
 * @author: Karthick < karthikn2099@gmail.com >
 * @github: https://github.com/karthikn2098
 * @date: 10/01/2018
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * @desc: function to get the pascal triangle number of given row and column...
 * @param: row , column
 * @return: pascal number for given row and column.
 */
int pascal(int row , int column) {

    if(row == column || column == 0)
        return 1;
    return pascal(row - 1 , column - 1) + pascal(row - 1 , column);

}

int main(void) {

    int N;

    cout << "Enter the Number of rows: ";
    cin >> N;

    cout << endl;

    for(int i = 0 ; i < N ; i++ ) {
        for(int j = 0 ; j <= i ; j++ ) {
            cout << pascal(i , j) << " ";
        }
        cout << "\n";
    }

    return 0;
}

/*
Sample Input/Output:

        Enter the Number of rows: 5

        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1

*/
