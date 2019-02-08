/*
* @author : dhruv-gupta14
* @date : 15/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr1[n];
	
	for(int i=0;i<n;i++)
	    cin >> arr1[i];
	    
    int temp=0;
    int random_index = 0;
    
    for(int j=0;j<n;j++)
    {
        random_index = rand() % n;
        temp = arr1[j];
        arr1[j] = arr1[random_index];
        arr1[random_index] = temp;
    }
    
    for(int k=0;k<n;k++)
        cout << arr1[k] << " ";
	    

	return 0;
}
