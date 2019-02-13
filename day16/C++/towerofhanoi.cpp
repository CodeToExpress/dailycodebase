/*
@author : mishramonalisha76
 @date : 13/02/2019
*/

#include <iostream>
using namespace std;
void towerofhanoi(int,char,char,char);

void towerofhanoi(int n,char source1,char aux1,char destination1)
{
  if(n==1)
    {
      cout<<"Move a disk from "<<source1<<" to "<<destination1<<"\n";
      return;
    }
  towerofhanoi(n-1,source1,destination1,aux1);
  cout<<"Move a disk from "<<source1<<" to "<<destination1<<"\n";
  towerofhanoi(n-1,aux1,source1,destination1);
  

}

int main()
{
  int n;
  char source,aux,destination;
  cout<<"Enter number of disks\n";
  cin>>n;

  towerofhanoi(n,'A','B','C');
  return 0;
}
