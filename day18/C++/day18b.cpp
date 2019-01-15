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
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    std::set<int> s(arr,arr+n);
    
    cout << "Number of unique elements = " << s.size() << endl;
	
	
	return 0;
}
