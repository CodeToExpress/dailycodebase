//g++  5.4.0
// Moulik Aggarwal - www.github.com/moulikcipherx

//all header file included
#include <bits/stdc++.h>

//for STL library
using namespace std;

//driver function
int main()
{
    //take the input from user
    int num;
    std::cin>>num;

    //loop for each number
    for(int i = 1; i<=num; i++)
    {
        if(i % 3 == 0 && i % 5 == 0) std::cout<<"Fizz Buzz"; //when number is divisible by 3 and 5
        else if(i % 3 == 0) std::cout<<"Fizz";               //when number is only divisible by 3
        else if(i % 5 == 0) std::cout<<"Buzz";               //when number is only divisible by 5
        else std::cout<<i;                                   //when number is neither divisible by 3 nor 5
        if(i < num) std::cout<<',';                          //just for comma after every number but not for last number
    }
    return 0;
}
