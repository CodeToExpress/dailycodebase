/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
 * @github: https://github.com/razdeep
 * @date: 20/12/2018
**/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number upto which you want to find Fizzbuzz numbers ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}