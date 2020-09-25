/*
* @author : imkaka
* @date   : 31/1/2019
*/

#include<iostream>
#include<cstdio>

using namespace std;

int binary_search_itr(int arr[], int size, int val){
    int l = 0, r = size-1;
    int mid = (l + r) / 2;

    while(arr[mid] != val && l <= r){
        if(val < arr[mid]){
            r = mid - 1;
        }
        else{
            l = mid +1;
        }

        mid = (l + r) / 2;
    }

    if(arr[mid] == val)
        return mid;

    return -1;
}

int binary_search_rec(int arr[], int left, int right, int val){
    if(right >= left){

        int mid = left + (right - left) / 2;

        if(arr[mid] == val) return mid;

        if(arr[mid] > val)
            return binary_search_rec(arr, left, mid-1, val);
        return binary_search_rec(arr, mid+1, right, val);
    }

    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 6, 9, 15, 16, 14};
    int val = 9;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Iterative: " << binary_search_itr(arr, size, val) << endl;
    cout << "Recursive: " << binary_search_rec(arr, 0, size-1, val) << endl;
    return 0;
}
