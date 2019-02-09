/*
* @author : dhruv-gupta14
* @date : 15/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int arr1[n];
	int arr2[m];
	
	for(int i=0;i<n;i++)
	    cin >> arr1[i];
	    
	for(int j=0;j<m;j++)
	    cin >> arr2[j];
	    
	for(int l=0;l<n;l++)
	{
	    for(int k=0;k<m;k++)
	    {
	        cout << arr1[l] << "," << arr2[k] << endl;
	    }
	}
	return 0;
}
