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

    transform(s.begin(),s.end(),s.begin(),::tolower);

    string::iterator ptr1,ptr2;

    ptr1=s.begin();
    ptr2=s.begin();


    while(*ptr2!=' ')
    {
      ptr2++;
    }

    reverse(ptr1,ptr2);


    for(ptr1=s.begin();ptr1!=s.end();ptr1++)
    {
      if(*ptr1==' ')
      {
        ptr1++;
      

      ptr2=ptr1;

      while(*ptr2!=' '&&ptr2!=s.end())
      {
        ptr2++;
      }
      reverse(ptr1,ptr2);
      }
      
    }

    cout<<s<<"\n";



  }

}