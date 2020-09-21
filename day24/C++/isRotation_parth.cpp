/**
 * @author Parth Patel
 * @date 22/09/2020
 * Method - Circular Search -- Time = O(n)
 */

#include <bits/stdc++.h>
using namespace std;

bool isRotation(int arr1[], int n1, int arr2[], int n2) {
     // return false if lengths are different
    if (n1 != n2)return false;
    int ind = -1;
    int n = n1;

     // find position of first element of array2 in array 1
    for (int i = 0; i < n; i++) {
        if (arr2[0] == arr1[i]) {
            ind = i;
            break;
        }
    }
    // Return false if element not found
    if(ind==-1)return false;

     // Check all the other numbers
    for (int i = 0; i < n; i++) {
        int j = (i + ind) % n;
        if (arr2[i] != arr1[j])return false;
    }
    return true;
}
int main() {
    int n1, n2, arr1[n1], arr2[n2];
    // Size of array 1 is n1
    cin >> n1;    
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    // Size of array 2 is n2 
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    bool ans = isRotation(arr1, n1, arr2, n2);
    cout << ans << endl;
    return 0;
}