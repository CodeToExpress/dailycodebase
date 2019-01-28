/*
* @author : YashMeh
* @date   : 28/1/2019
*/
#include<bits/stdc++.h>
using namespace std;
//Using STL
void permute(string s)
{
   sort(s.begin(),s.end());
   do
   {
      cout<<s<<endl;
   } while (next_permutation(s.begin(),s.end()));
}
//Using recursion
void permute(string smallPart,int n,string firstChar)
{
   if(n==1)
   {
      cout<<firstChar+smallPart<<endl;
      return;
   }
   for(int i=0;i<n;i++)
   {
      permute(smallPart.substr(1),n-1,firstChar+smallPart[0]);
      rotate(smallPart.begin(),smallPart.begin()+1,smallPart.end());
   }
}
main()
{
   string s="1234";
   string r="";
   permute(s,s.size(),r);
   
}