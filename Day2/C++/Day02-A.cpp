/* @author : AkshitAggarwal */

#include<iostream>
#include<string.h>

using namespace std;


string strRev(string s)
{
    int str_len = s.size();
    cout<<str_len;
    int last = str_len;
    char temp;
    for(int i = 0; i < str_len/2; i++)
    {
        temp = s[i];
        s[i] = s[last - 1];
        s[last -1] = temp;
        last--;
    }

    return s;
}
int main()
{
    string str;

    cout<<"\nEnter string to be reversed: ";
    getline(cin, str);
    string rev = strRev(str);
    cout<<'\n'<<rev;

    return 0;
}
