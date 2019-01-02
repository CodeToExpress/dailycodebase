/*
* @author : dhruv-gupta14
* @date : 27/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    
    string ans;
    stringstream s(str);
    
    while(s >> ans)
    {
        reverse(ans.begin(),ans.end());
        cout << ans << " ";
    }
    return 0;
}
