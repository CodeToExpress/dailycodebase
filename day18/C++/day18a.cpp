/*
* @author : dhruv-gupta14
* @date : 14/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int cnt[n] = {0};
	for(int i=0;i<n;i++)
	{
	    cin >> arr[i];
	    cnt[arr[i]]++;
	}
	
	for(int j=0;j<n;j++)
	{
	    if(cnt[arr[j]] != -1)
	    {
	        cout << arr[j] << " is present " << cnt[arr[j]] << " times" << endl;
	        cnt[arr[j]] = -1;
	    }
	}
	
	
	return 0;
}
