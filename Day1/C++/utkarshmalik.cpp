/*
author-Utkarsh Malik
https://github.com/Utkarshmalik
Date - 22/12/18
*/


#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    if(i%15==0)
    {cout<<"FizzBuzz ";}

    else if(i%3==0)
    {cout<<"Fizz ";}

    else if(i%5==0)
    {cout<<"Buzz ";}
    
    else
    {cout<<i<<" ";}
    
  }

}