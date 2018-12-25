//g++  5.4.0
// Moulik Aggarwal - www.github.com/moulikcipherx

//all header file included
#include <bits/stdc++.h>

//for STL library
using namespace std;

//hamming distance of two strings
int hamming(string str1, string str2)
{
    int count = 0;
    for(int i = 0; i< str1.length(); i++)
    {
        if(str1[i] != str2[i]) count++;        //Increment the counter when char is not match
    }
    return count;
}

//driver function
int main()
{
    string str1,str2;

    //Enter the two strings

    std::cout<<"Enter the first String\n";
    std::cin>>str1;

    std::cout<<"Enter the Second String\n";
    std::cin>>str2;

    std::cout<<"Humming Distance of Given Strings is: "<<hamming(str1,str2)<<'\n';
    return 0;
}
