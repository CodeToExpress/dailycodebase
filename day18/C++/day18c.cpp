/*
* @author : dhruv-gupta14
* @date : 14/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,cnt=0;
	cin >> n;
	cin >> m;
	int arr1[n];
	int arr2[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    
    for(int j=0;j<n;j++)
    {
        cin >> arr2[j];
    }
    
    sort(arr1,arr1 + n);
    sort(arr2,arr2 + n);
    
    for(int k =0 ;k<n; k++)
    {

        if(arr2[k] == pow(arr1[k],m))
        {
            cnt++;
        } else
        {
            cout << "false";
            break;
        }
    }
	
	if (cnt == n)
	{
	    cout << "true";
	}
	
	return 0;
}
