/**
 * @author Utkarshmalik
 * @date 06/01/2019
 */



#include<iostream>
using namespace std;
#include<vector>
int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    cout<<"Enter the size of the array\n";
    int n;cin>>n;
    cout<<"Enter the elements\n";
    vector<char>v;
    char temp;

    for(int k=0;k<n;k++)
    {
      cin>>temp;
      v.push_back(temp);
    }

    cout<<"Enter the string\n";
    string s;
    cin>>s;

    bool found=false;


    for(int j=n;j<=s.size() && found==false;j++)
    {
      for(int k=0;k<=s.size()-j;k++)
      {
        string temps=s.substr(k,j);

        int count=0;

        for(int h=0;h<n;h++)
        {
          if(temps.find(v[h])==string::npos)
          {
            count++;
          }
        }

        if(count==0)
        {
          cout<<temps<<"\n";
          found=true;
          break;
        }


      }

    }

    if(found==false)
    {
      cout<<"";
    }




  }

return 0;
}










