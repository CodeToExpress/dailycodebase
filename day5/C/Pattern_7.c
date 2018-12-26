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
        for(j=i; j<=n; j++)  //Left Triangle
            printf("* ");
        for(s=1; s<i; s++)  //Space
            printf("    ");
        for(j=i; j<=n; j++)  //Right Triangle
            printf("* ");
        printf("\n");
    }
    //Lower-Half
    for(i=1; i <=n; i++){
        for(j=1; j<=i; j++)  //Left Triangle
            printf("* ");
        for(s=1; s<=(n-i); s++)  //Space
            printf("    ");
        for(j=1; j<=i; j++)  //Right Triangle
            printf("* ");
        printf("\n");
    }
}
