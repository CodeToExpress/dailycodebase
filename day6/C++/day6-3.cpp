/**
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
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());

    if(s1==s2)
    {
      cout<<"Anagrams\n";
    }
    else
    {
      cout<<"Not Anagrams\n";
    }
  }
}