/* @author : AkshitAggarwal
    Date : 28/01/2019
    Hamming Distance Problem*/

#include<iostream>
#include<string.h>

using namespace std;

int hammingDistance(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int ptr = 0;
    int n = len1;

    if(len1 > len2)
    {
        ptr = len1 - len2;
        n = len2;
    }
    else if(len2 > len1)
    {
        ptr = len2 - len1;
        n = len1;
    }

    for(int i = 0; i < n; i++)
        if(s1[i] != s2[i]) ptr++;

    return ptr;
}

int main()
{
    string str1, str2;
    cout<<"\nEnter String 1 : ";
    getline(cin, str1);
    cout<<"\nEnter String 2 : ";
    getline(cin, str2);
    int ans = hammingDistance(str1, str2);
    cout<<ans;
    return 0;
}
