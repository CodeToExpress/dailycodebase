/*
* @author : dhruv-gupta14
* @date : 27/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string str1;
    getline(cin,str1);
    
    string str2;
    getline(cin,str2);
    
    int n = str1.length();
    int m = str2.length();
    
    if(n!=m)
    {
        cout << "Not Anagrams";
    } else{
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
    
        for(int i=0; i<n; i++)
        {
            if(str1[i] != str2[i])
            {
                cout << "Not Anagrams";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "Anagrams";
        }
    }
    return 0;
}
