/*
   Author: Shubhendra Singh
   Github: shubhendra-20
 */
 
#include <iostream>
using namespace std;

int main() {
	int i,j,n,x,flag;

	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cin>>x;
	flag=0;
	for(i=0;i<n;i++)
	{
	    if(a[i]==x)
	    {
	        flag=1;
	        cout<<(i+1)<<endl;
	        break;
	    }
	}
	if(flag==0)
	{
	    cout<<"undefined";
	}
	return 0;
}
