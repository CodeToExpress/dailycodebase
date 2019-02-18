/*
* @author : imkaka
* @date   : 2/1/2019
*
*/

#include<iostream>

using namespace std;

void selectionSort(int arr[], int size){

    for(int i = 0; i < size; ++i){
        for(int j = i+1; j < size; ++j){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[], int size){
    for(int x = 0; x < size; ++x){
        cout << arr[x] << " ";
    }
    cout << endl;
}
int main(){

    int arr[] = {20, 46, 2, 43, 10, -29, 10, 0, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Sorting " << endl;
    print(arr, size);

    selectionSort(arr, size);

    cout << endl;
    cout << "After Sorting " << endl;
    print(arr, size);

    return 0;
}
