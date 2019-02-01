/*
* @author : imkaka
* @date   : 1/2/2019
*
*/

#include<iostream>
#include<vector>

using namespace std;

void bubblesort(vector<int>& arr){
    int N = arr.size();

    bool swapped;
    for(int i = 0; i < N-1; ++i){
        swapped = false;  // Optimizing part
        for(int j = 0; j < N-i-1; ++j)    // (j, j+1) Adjacent Swap.

            if(arr[j] > arr[j+1]){  // Swap Part
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        if(!swapped)
            break;
    }
}

void printArray(const vector<int> &arr){
    int N = arr.size();

    for(const int x : arr){
        cout << x << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {20, 10, 0, 36, 100, 12, -20, 30, 50, -100};

    cout << "Unsorted:" << endl;
    printArray(arr);

    bubblesort(arr);

    cout << "Sorted: " << endl;
    printArray(arr);
    return 0;
}

