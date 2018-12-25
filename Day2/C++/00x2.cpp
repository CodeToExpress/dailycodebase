//g++  5.4.0
// Moulik Aggarwal - www.github.com/moulikcipherx

//all header file included
#include <bits/stdc++.h>

//for STL library
using namespace std;

//string reverse : Part A
string reverseFunc(string str)
{
    reverse(str.begin(),str.end());  //inbuilt function in <algorithm.h>
    return str;
}

//palindrome check : Part B
int checkPallindrome(string str)
{
    if(str == reverseFunc(str)) return 1;
    else return 0;
}

//function for printing menu
void menu()
{
    std::cout<<"\n Enter the Number \n";
    std::cout<<"\n 1. Reverse A String \n";
    std::cout<<"\n 2. Check String is Pallindrome or not \n";
}

//driver function
int main()
{
    int choice;
    char ch;
    string str;

    do
    {
        menu();

        std::cout<<"Enter a String";
        std::cin>>str;

        //input the choice
        std::cout<<"Enter the choice";
        std::cin>>choice;

        switch(choice)
        {
            case 1: std::cout<<reverseFunc(str);
                    break;
            case 2: if(checkPallindrome(str)) std::cout<<"String is Pallindrome";
		    else std::cout<<"String is not Pallindrome";
                    break;
            default: std::cout<<"Enter the correct number";
        }

        std::cout<<"Do you want to continue Y/N";
        std::cin>>ch;

    }while(ch == 'Y' || ch == 'y');

    return 0;
}

