
//write a program to capitalise first letter of each word in a sentence

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
    string s;
    getline(cin,s);

    s[0]=char(int(s[0]-32));


    for(int i=0;i<s.size();i++)
    {
      if(s[i]==' ')
      {
        i++;
        s[i]=char(int(s[i]-32));
      }
    }

    cout<<s;


  }







return 0;
}

