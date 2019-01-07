/*
 * @author: ashwek
 * @date: 7/1/2019
 */

#include <stdio.h>

long int fact(long int num){
    if( num <= 1 ){
        return 1;
    }
    return num * fact(num-1);
}

void main(){

    int num;

    printf("Enter a number = ");
    scanf("%d", &num);

    printf("Factorial of %d = %ld\n", num, fact(num));

}
