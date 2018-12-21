/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
 * @github: https://github.com/razdeep
 * @date: 21/12/2018
 */
#include<iostream>

using namespace std;

string strRev(const string& s)
{
    static string temp=s;
    int k=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        temp[k++]=s[i];
    }
    return temp;
}

int main()
{
    string s="Hello";
    string rev=strRev(s);
    cout<<rev<<endl;
    return 0;
}