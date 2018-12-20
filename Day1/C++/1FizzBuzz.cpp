#include<iostream>
using namespace std;
int fizzbuzz(int n)
{
  for(int i=1; i<=n; i++)
  {
   if((i%3) && (i%5))
        cout<<i<<" ";

   else if(i%3==0 && i%5!=0)
        cout<<"Fizz ";

   else if(i%5==0 && i%3!=0)
        cout<<"Buzz ";

   else if(!(i%3) && !(i%5))
        cout<<"FizzBuzz ";
  }
}
int main()
{
int n;
cin>>n;
fizzbuzz(n);
}
