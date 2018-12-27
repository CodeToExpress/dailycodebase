/*
* @author : dhruv-gupta14
* @date : 26/12/2018
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    
    for(int i = rows-1; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}