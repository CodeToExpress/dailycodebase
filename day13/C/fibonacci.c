/*
 * @author: ashwek
 * @date: 7/1/2019
 */

#include <stdio.h>

int fib(int num) {
    if( num <= 2 ){
        return 1;
    }
    return fib(num-1) + fib(num-2);
}

void main(){

    int num;

    printf("Enter a number = ");
    scanf("%d", &num);

    printf("%dth element in fibonacci series is %d\n", num, fib(num));

}
