/*
 * @author : ashwek
 * @date : 29/01/2019
 */

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *arr, int n, int search){

    int low = 0, high = n-1;
    int mid;

    while( low <= high ){

        mid  = (high - low) / 2 + low;

        if( arr[mid] == search ){
            return mid;
        }
        else if( search < arr[mid] ){
            high--;
        }
        else{
            low++;
        }

    }

    return -1;
}

void main(){

    int *arr, n, search, i;

    printf("Enter size of array = ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    printf("Enter %d elements (in sorted order) : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter a value to search = ");
    scanf("%d", &search);

    i = binary_search(arr, n, search);

    if( i == -1 ){
        printf("%d not found in array", search);
    }
    else{
        printf("%d found at %d index", search, i);
    }
}
