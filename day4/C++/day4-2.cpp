/*

* @author Utkarshmalik
 * @date 05/01/2019

*/

#include<iostream>
using namespace std;
#include<map>


int main()
{
  int t;
  cin>>t;


  for(int i=0;i<t;i++)
  {
    string s;cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);

        map <char,int> m;
        
        for(int i=0;i<s.size();i++)
        {
          if(m.find(s[i])==m.end())
          {
            m.insert(pair<char,int>(s[i],1)); 
          }
          else
          {
          m[s[i]]++;
          }
        }
    map <char,int> :: iterator ptr1,temp;
    
    int max=0;
    ptr1=m.begin();
    temp=m.end(); // temp points to the map pair with highest value


    while(ptr1!=m.end())
    {
      if(ptr1->second >max)
      {
        max=ptr1->second;
        temp=ptr1;
      }
      
      ptr1++;
    }

    cout<<temp->first<<"\n";

  }
}