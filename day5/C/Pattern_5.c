/**
  * @author : ashwek
  * @date : 26/12/2018
  */

#include<stdio.h>

void main(){

    int n, i, j, s;

    printf("Enter n = ");
    scanf("%d", &n);

    for(i=1; i <=n; i++){
        for(s=1; s<i; s++)  //Space
            printf("  ");
        for(j=1; j<(n-i+1)*2; j++)  //Triangle
            printf("* ");
        printf("\n");
    }
}
