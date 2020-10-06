/*
 * @author divyakhetan  
 * @date 16/1/2019
 */

#include<bits/stdc++.h>
using namespace std;




int main(){
	int n;
	cout << "Enter the number of values you want to have."<<endl;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int num;
	cin >> num;
	
	int count = 0;
	vector<int> part;
	vector<vector <int> > ans;
	int last_added = 0;
	for(int i = 0; i < n; i++){
		if(count == num ){
			
			ans.push_back(part);
			part.clear();
			part.push_back(a[i]);
			count = 1;
		}
		else{
			
			count++;
			part.push_back(a[i]);
		}
		
	}
	
	ans.push_back(part); //for the remaining array
	//cout << ans.size();
	cout<<"Your answer is  :- ";
	for(int i = 0; i < ans.size(); i++){
		for(int j = 0; j < ans[i].size(); j++){
		    cout<< ans[i][j] << " ";
		
		}
		cout << endl;
	}
}
