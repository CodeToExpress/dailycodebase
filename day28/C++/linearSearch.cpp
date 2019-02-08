/*
* @author : imkaka
* @date   : 29/1/2019
*/

#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int> arr, int val){

    int size = arr.size();
    for(int i = 0; i < size; ++i){
        if(arr[i] == val)
            return i;
    }

    return -1;
}

int main(){

    vector<int> arr = {1, 2, 5, 10, 6, 100};
    vector<int> arr2 = {500, 22, 101, 10, 6, 0};
    int val = 10;
    int val2 = 1;

    cout << linearSearch(arr, val) << endl;
    cout << linearSearch(arr2, val2) << endl;
    return 0;
}
