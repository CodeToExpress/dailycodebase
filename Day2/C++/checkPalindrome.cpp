/*
* @author: imkaka
* @date :  21/12/2018
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;
    cin >> str ;

    int size = str.size();
    bool flag = false;
    for(int i = 0; i< size/2; i++)
    {
        if(str[i] != str[size-i-1])
        {
           flag = true;
           break;
        }
    }

    if(!flag)
        cout << str <<" is a Palindrome!!"  << endl;
    else
        cout << str << " is NOT a Palindrome!" << endl;

    return 0;
}
