/*
*  @author : imkaka
*  @date   : 10/2/2018
*/

#include<iostream>
#include<vector>

using namespace std;


void radixSortInt(vector<int>& arr) {
  for (int i = 0; i < 32; ++i) {
    vector<int> zeroBucket;
    vector<int> oneBucket;

    for (int j = 0; j < arr.size(); ++j) {
      int bit = (arr[j] >> i) & 1;
      if (bit) {
        oneBucket.push_back(arr[j]);
      } else {
        zeroBucket.push_back(arr[j]);
      }
    }

    arr.clear();
    if (i == 31) {
      arr.insert(arr.end(), oneBucket.begin(), oneBucket.end());
      arr.insert(arr.end(), zeroBucket.begin(), zeroBucket.end());
    } else {
      arr.insert(arr.end(), zeroBucket.begin(), zeroBucket.end());
      arr.insert(arr.end(), oneBucket.begin(), oneBucket.end());
    }
  }
}

void printArray(const vector<int> &arr){
    for(int i = 0; i < arr.size(); ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    vector<int> arr = {10, 23, 25, 0, 1, 6, 4, -10, 24, 100, 36};

    cout << "Before sort: ";
    printArray(arr);

    radixSortInt(arr);

    cout << "After sort: ";
    printArray(arr);

    return 0;
}
