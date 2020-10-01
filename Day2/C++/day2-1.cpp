/*

* @author Utkarshmalik
 * @date 05/01/2019

*/


#include<iostream>
using namespace std;
#include<string>



  int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    string s;
    cin>>s;
    string :: iterator ptr1,ptr2;
     ptr1=s.begin();
     ptr2=s.begin()+s.size()-1;

  
   while(ptr1<ptr2)
   {
     //using bitwise operation for swapping purpose instead of temporary variable

     *ptr1=*ptr1^*ptr2;
     *ptr2=*ptr1^*ptr2;
     *ptr1=*ptr1^*ptr2;
     
     ptr1++;
     ptr2--;

   }


   cout<<s<<"\n";

  }

}