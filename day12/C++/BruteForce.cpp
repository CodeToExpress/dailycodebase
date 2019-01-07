/**
 * @date 04/01/18
 * @author SPREEHA DUTTA
 */

#include <bits/stdc++.h>
using namespace std;

int search(string s,string w)
{
    int i,j;int k=-1;int c=0;
    int m=w.length();
    int n=s.length();
    for(i=0;i<=n-m;i++)
    {
         for(j=0,c=i;j<m;j++,c++)
            if(s[c]!=w[j])
               break;
        if(j==m)
        {
            k=i;
            break;
        }
    }
    return k;
}
int main()
{
    string s,w;
    getline(cin,s);
    getline(cin,w);
    int t=search (w,s);
    cout<<"\n"<<t<<endl;
}

