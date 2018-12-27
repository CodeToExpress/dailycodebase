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
    
    return 0;
}