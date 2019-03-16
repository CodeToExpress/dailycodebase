/* @author : AkshitAggarwal
    Date : 24/01/2019  */

#include<iostream>
#include<string.h>

using namespace std;

string palindrome(string s)
{
    int len = s.length();
    int ptr = 0;

    for(int i = 0, j = len -1; i < len/2; i++, j--)
    {
        if(s[i] == s[j]) ptr++;
    }

    if(ptr == len/2) return "Yes";
    else return "No";

}

int main()
{
    string str;
    cout<<"\nEnter String : ";
    getline(cin, str);
    string ans = palindrome(str);
    cout<<ans;
    return 0;
}

