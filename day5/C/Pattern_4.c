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
        for(s=i; s<n; s++)  //Space
            printf("  ");

        for(j=0; j<i; j++)  //Number-Sequence
            printf("%d ", (j+i));
        for(j=i-2; j>=0; j--)  //Reverse-Number-Sequence
            printf("%d ", (j+i));
        printf("\n");
    }
}
