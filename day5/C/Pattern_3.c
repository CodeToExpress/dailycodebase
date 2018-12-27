/**
  * @author : ashwek
  * @date : 26/12/2018
  */

#include<stdio.h>

void main(){

    int n, i, j;

    printf("Enter n = ");
    scanf("%d", &n);

    //Upper-Half
    for(i=1; i <=n; i++){
        for(j=1; j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }
    //Lower-Half
    for(i=n-1; i>=1; i--){
        for(j=1;  j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
