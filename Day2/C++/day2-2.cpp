/*

* @author Utkarshmalik
 * @date 05/01/2019

*/

#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    string s,temp;
    cin>>s;
    temp=s;
    reverse(temp.begin(),temp.end());

    if(s==temp)
    {
      cout<<"Yes\n";
    }

    else
    {
      cout<<"No\n";
    }
    
  }

}