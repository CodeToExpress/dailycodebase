/**
 * @author Utkarshmalik
 * @date 06/01/2019
 */



#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  for(int i=0;i<t;i++)
  {
    string str1,str2;
    cin>>str1;cin>>str2;

    int nor=str2.size()+1;
    int noc=str1.size()+1;
    int mat[nor][noc];


    for(int j=0;j<nor;j++)
    {
      for(int k=0;k<noc;k++)
      {
        if(j==0)
        {
          mat[j][k]=k;
        }

        else if(k==0)
        {
          mat[j][k]=j;
        }

        else
        {
          if(str1[j-1]==str2[k-1])
          {
            mat[j][k]=mat[j-1][k-1];
          }
    
          else
          {
            int temp=min(mat[j-1][k]+1,mat[j-1][k-1]+1);
            mat[j][k]=min(temp,mat[j][k-1]+1);
          }

        }
      }
    }
  cout<<mat[nor-1][noc-1]<<"\n";    
  }
}

/*
used lavenshtein algorithm
Time complexity O(m*n),where m,n are the size of the two input strings
*/