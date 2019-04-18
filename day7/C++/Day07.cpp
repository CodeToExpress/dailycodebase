/*
    @author: AkshitAggarwal
    @date: 13/03/2019
*/

#include<bits/stdc++.h>

using namespace std;

int oneEditCheck(string s1, string s2);

int main()
{
    string str1, str2;
    cout<<"\nEnter Two strings to be checked:";
    getline(cin, str1);
    getline(cin, str2);
    return 0;
}

int oneEditCheck(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();
    int ctr = 0;
    sort()
    if( l1 - l2 == 1 || l2 - l1 == 1 || l1 - l2 == 0)
}