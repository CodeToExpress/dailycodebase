/*
 * @author: ashwek
 * @date: 8/1/2019
 */

#include <stdio.h>

int product(int a, int b){

    if( a == 0 || b == 0 )
        return 0;
    else if( a == 1 )
        return b;
    else if( b == 1 )
        return a;

    if( a < 0 && b < 0 )
        return product(-a, -b);
    else if( a < 0 )
        return product(b, a);
    else
        return b + product(a-1, b);

}

void main(){

    int a, b;

    printf("Enter 1st number = ");
    scanf("%d", &a);
    printf("Enter 2nd number = ");
    scanf("%d", &b);

    printf("%d x %d = %d\n", a, b, product(a, b));

}
