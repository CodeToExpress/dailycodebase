/*
* @author : dhruv-gupta14
* @date : 25/12/2018
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cin >> str;
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int cnt1 = 0;
    char max;
    for (int i = 0; i < str.size(); i++)
    {
        int cnt2 = std::count(str.begin(), str.end(), str[i]);
        if (cnt2 > cnt1)
        {
            cnt1 = cnt2;
            max = str[i];
        }
    }
    cout <<char(max) << "=>" << cnt1;
    
    return 0;
}