/*
 * @author : ashwek
 * @date : 29/01/2019
 */

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int n, int search){

    int i;

    for(i=0; i<n; i++){
        if( arr[i] == search )
            return i;
    }

    return -1;
}

void main(){

    int *arr, n, search, i;

    printf("Enter size of array = ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    printf("Enter %d elements : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter a value to search = ");
    scanf("%d", &search);

    i = linear_search(arr, n, search);

    if( i == -1 ){
        printf("%d not found in array", search);
    }
    else{
        printf("%d found at %d index", search, i);
    }
}
