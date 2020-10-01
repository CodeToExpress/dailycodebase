/**
 * @author Utkarshmalik
 * @date 06/01/2019
 */


#include<iostream>
using namespace std;
#include<cstdlib>

int main()
{

  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
   

      string str1,str2;
      cin>>str1;
      cin>>str2;

      int d=abs(int(str1.size()-str2.size()));

      if(d==0)
      {
        //there is no difference in the sizes of the string
        
          int count=0;

          for(int j=0;j<str1.size();j++)
          {
            if(str1[j]!=str2[j])
            {
              count++;
            }
          }

          if(count==0 || count==1)
          {
            cout<<"Yes\n";
          }

          else
          {
            cout<<"No\n";
          }
      }
      

      else if(d==1)
      {
        //always taking str1 as the longer of the two strings 
        if(str1.size()<str2.size())
        {
          //swap two strings without using temporary string
          str1=str1+str2;
          str2=str1.substr(0,str1.size()-str2.size());
          str1=str2.substr(str2.size(),str1.size()-str2.size()); 
        }

      string :: iterator ptr1,ptr2;
      
      ptr1=str1.begin();ptr2=str2.begin();
      
      int count=0;

       while(ptr1!=str1.end()&&ptr2!=str2.end())
       {

         if(*ptr1==*ptr2)
         {
           ptr1++;
           ptr2++;
         }

        else
        {
          ptr1++;
          count++;
        }

      }

      if(count==0 || count==1)
      {
        cout<<"Yes\n";
      }

      else
      {
        cout<<"No\n";
      }
      
    }

      else
      {
        cout<<"No\n";
      }
    }
    
  
  return 0;
}

//Time Complexity O(m+n) , where m,n are the size of the two input strings.



