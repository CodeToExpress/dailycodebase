/*
* @author : YashMeh
* @date   : 29/1/2019
*/
#include<bits/stdc++.h>
using namespace std;
//Using nested loops Time Complexity-O(n^2)
string longestCommon(string one,string two)
{   
    for(int i=0;i<one.size();i++)
    {
        for(int j=one.substr(i).size();j>0;j--)
        {
            int ret=two.find(one.substr(i,j));
            if(ret>=0)
            return one.substr(i,j);
        }
    }
    return "";
}
//Using DP Time Complexity-O(n)
string longestCommonDP(string one,string two)
{
    int m=one.size();
    int n=two.size();
    int dp[n+1][m+1];
    int max=0;
    int loc;
    int mj;
    int mi;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
            else if(one[i-1]==two[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                if(dp[i][j]>max)
                {
                    mi=i;
                    mj=j;
                    max=dp[i][j];
                }
            }
            else
            {
               dp[i][j]=0;
            }
            
        }
    }
    string ans="";
    while(dp[mi--][mj--]!=0)
    {
        ans=one[mi]+ans;
    }
    
    return ans;
}
main()
{
string s1="abcdefg";
string s2="xyabcz";
string found=longestCommonDP(s2,s1);
cout<<found<<endl;
string s3="XYXYXYZ";
string s4="XYZYX";
string found2=longestCommonDP(s3,s4);
cout<<found2<<endl;
string found3=longestCommonDP("abcdaf","zbcdf");
cout<<found3<<endl;

}