/**
 * @author Utkarshmalik
 * @date 06/01/2019
 */

#include<iostream>
using namespace std;


string lcs(string str1,string str2)
{
  //first make sure that s2 is the smaller of the two strings

  if(str2.size()>str1.size())
  {
    //swap the two given strings

    string temp=str1;
    str1=str2;
    str2=temp;
  }



    for(int i=str2.size();i>=1;i--)
    {
      for(int j=0;j<=str2.size()-i;j++)
      {
        string tempS=str2.substr(j,i);

        if(str1.find(tempS)!=string::npos)
        {
          return tempS;
        }
      }
    
    }

    return "";


}






int main()
{

  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    string str1,str2,str3;

    cin>>str1;
    cin>>str2;

    str3=lcs(str1,str2);

    cout<<str3;
  }



}
