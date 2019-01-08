/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 24/12/2018
 */

#include <stdio.h>
#include <string.h>

int hammingDistance(const char *first_word, const char *second_word)
{
    int count = 0;
    if (strlen(first_word) != strlen(second_word))
    {
        return -1;
    }
    for (int i = 0; i < strlen(first_word); i++)
    {
        if (first_word[i] != second_word[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char first_word[100], second_word[100];
    printf("Enter the first word: ");
    scanf("%s", first_word);
    printf("Enter the second word: ");
    scanf("%s", second_word);
    printf("The hamming distance between %s and %s is: %d\n", first_word, second_word, hammingDistance(first_word, second_word));
    return 0;
}