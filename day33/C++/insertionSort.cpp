/*
* @author : imkaka
* @date : 4/2/2019
*/

#include<iostream>

using namespace std;

void insertionSort(int arr[], int size){
    int key , j;
    for(int i = 1; i < size; ++i){

        key = arr[i];
        j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void print(int* arr, int size){
    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}
int main(){

    int arr[] = {10, 12, 0, 36, -4, 2, 3, -36, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: " << endl;
    print(arr,size);
    cout << endl;

    insertionSort(arr, size);

    cout << "After Sorting: " << endl;
    print(arr,size);
    return 0;
}
