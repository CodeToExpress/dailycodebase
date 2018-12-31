/*
* @author : dhruv-gupta14
* @date : 28/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0,x=0;
    string str1;
    getline(cin,str1);
    
    string str2;
    getline(cin,str2);
    
    int n = str1.length();
    int m = str2.length();
    
    if(str1 == str2)
        cout << "Yes";
    else if(n==m && str1 !=str2){
        for(int i=0; i<n; i++)
        {
            if(str1[i] != str2[i])
                flag++;
        }
        if(flag == 1)
            cout << "Yes";
        else
            cout << "No";
    } else{
        if(n == m+1)
        {
            x=0;
            for(int j=0; j<n; j++)
            {
                if(str1[j] != str2[x])
                {
                    flag++;
                }else{
                    x++;
                }
            }
        }else if(m == n+1){
            x=0;
            for(int k=0; k<m; k++)
            {
                if(str1[x] != str2[k])
                {
                    flag++;
                }else{
                    x++;
                }
            }
        }
        if(flag == 1)
            cout << "Yes";
        else
            cout << "No";
    }
    
    return 0;
}
