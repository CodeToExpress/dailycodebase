/*
* @author : imkaka
* @date   : 6/2/2019
*/

#include<iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int arr[], int left, int right){

    if(right - left <= 1)
        return;

    //Pivot arr[left]
    int yellow = left +1;

    for(int green = left+1; green < right; ++green){
        if(arr[green] < arr[left]){
            swap(arr[yellow], arr[green]);
            yellow++;
        }
    }

    //Move Pivot to original place
    swap(arr[left], arr[yellow-1]);

    quickSort(arr, left, yellow-1);
    quickSort(arr, yellow, right);
}

void print(int arr[],int size){
    for(int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {10, 25, 0, 23, 36, -1, 3, 1, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Before Sorting: ";
    print(arr, size);

    quickSort(arr, 0, size);

    cout << "After Sorting: ";
    print(arr, size);
}
