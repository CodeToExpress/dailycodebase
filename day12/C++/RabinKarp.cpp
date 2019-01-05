/**
 * @date 04/01/18
 * @author SPREEHA DUTTA
 */
#include <bits/stdc++.h>
using namespace std;

int search(string s,string w,int q)
{
    int i=0,j=0;int k=-1;
    int m=w.length();
    int n=s.length();
    int sc=0,wc=0,h=1;
    int d=256;
    for(i=0;i<m-1;i++)
        h=(h*d)%q;
    for(i=0;i<m;i++)
    {
        wc=(d*wc+w[i])%q;
        sc=(d*sc+s[i])%q;
    }
    for(i=0;i<n-m;i++)
    {
        if(sc==wc)
        {
            for(j=0;j<m;j++)
                if(s[i+j]!=w[j])
                    break;
            if(j==m)
            {
                k=i;
                break;
            }
        }
        if(i<n-m)
        {
            sc=(d*(sc-s[i]*h)+s[i+m])%q;
            if(sc<0)
                sc+=q;
        }
    }
    return k;
}
int main()
{
    string s,w;
    getline(cin,s);
    getline(cin,w);
    int t=search (w,s,11);
    cout<<"\n"<<t<<endl;
}
