/**
  * @author : ashwek
  * @date : 26/12/2018
  */

#include<stdio.h>

void main(){

    int n, i, j, s;

    printf("Enter n = ");
    scanf("%d", &n);

    //Upper-Half
    for(i=1; i <=n; i++){
        for(s=i; s<n; s++)  //Space
            printf("  ");
        for(j=1; j<i*2; j++)  //Triangle
            printf("* ");
        printf("\n");
    }
    //Lower-Half
    for(i=2; i <=n; i++){
        for(s=1; s<i; s++)  //Sapce
            printf("  ");
        for(j=1; j<(n-i+1)*2; j++)  //Triangle
            printf("* ");
        printf("\n");
    }
}
