/**
        * @author: Shashankjain12
        * @date: 21/12/2018
**/
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"FIZZ BUZZ \n";
	cout<<"Enter the input for the game";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if((i%3==0)&&(i%5==0))
		{
			cout<<"fizzbuzz,";
		}
		else if((i%5)==0)
			{
				cout<<"buzz,";
			}
	
		else if((i%3)==0)
			{
				cout<<"fizz,";
			}
		else
		cout<<i<<",";
	}
return 0;
}	
