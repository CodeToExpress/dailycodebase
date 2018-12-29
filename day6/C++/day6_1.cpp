/*
* @author : dhruv-gupta14
* @date : 27/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    
    string ans;
    ans = toupper(s[0]);
    for(int i=1; i < s.size(); i++)
    {
        if(s[i-1] == ' ')
        {
            ans += toupper(s[i]);
        } else{
            ans += s[i];
        }
    }
    
    cout << ans;
    return 0;
}
