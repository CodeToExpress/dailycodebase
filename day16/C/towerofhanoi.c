/**
     @author: rajashree23
     @date: 13/02/2019
   **/




#include<stdio.h>

void TowerOfHanoi(int n, char source,char aux, char dest)
{
    if(n==1)
    {
      printf("Move disk 1 from rod %c to rod %c\n", source,dest);
      return;
    }
    TowerOfHanoi(n-1,source,dest,aux);
    printf("Move disk %d from rod %c to rod %c\n",n,source,dest);
    TowerOfHanoi(n-1,aux,source,dest);

}
int main()
{
    int n;
    char source,auxilliary,destination;
    printf("Enter number of disks\n");
    scanf("%d",&n);
    TowerOfHanoi(n,'A','c','B');
    return 0;
}
