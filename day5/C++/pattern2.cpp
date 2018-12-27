/*
* @author : dhruv-gupta14
* @date : 26/12/2018
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, num = 1;
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << num << " ";
            ++num;
        }

        cout << endl;
    }
    
    return 0;
}