/**
 * @date 04/01/19
 * @author SPREEHA DUTTA
 */

#include <bits/stdc++.h>
using namespace std;
void calc(string w,int m,int p[])
{
    int l=0,i=1;p[0]=0;
    while(i<m)
    {
        if(p[i]==p[l])
        {
            l++;
            p[i]=l;
            i++;
        }
        else
        {
            if(l!=0)
                l=p[l-1];
            else
            {
                p[i]=l;
                i++;
            }
        }
    }
}
int search(string s,string w)
{
    int i=0,j=0;int k=-1;
    int m=w.length();
    int n=s.length();
    int arr[m];
    calc(w,m,arr);
    while(i<n)
    {
        if(w[j]==s[i])
        {
            j++;
            i++;
        }
        if(j==m)
        {
            k=i-j;
            break;
        }
        else if(i<n && w[j]!=s[i])
        {
            if(j!=0)
                j=arr[j-1];
            else
                i++;
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
