/* @author : AkshitAggarwal
    Date : 28/01/2019
    Counting the Vowels*/

#include<iostream>

using namespace std;

int vowelCount(string s)
{
    int ctr = 0;
    for(int i = 0, n = s.length(); i < n; i++)
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ctr++;

    return ctr;
}
int main()
{
    string str;
    getline(cin, str);
    cout<<"\nNo. of vowels in this word are :"<<vowelCount(str);

    return 0;
}
