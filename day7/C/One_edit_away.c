/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 24/12/2018
 */

#include <stdio.h>
#include <string.h>
int replacable(const char *s1, const char *s2)
{
    int diff_count = 0;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len == s2_len)
    {
        for (int i = 0; i < s1_len; i++)
        {
            if (s1[i] != s2[i])
                diff_count++;
        }
        if (diff_count == 1)
            return 1;
    }
    return 0;
}
int addable(const char *s1, const char *s2)
{
    int diff_count = 0;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len == s2_len + 1)
    {
        int j = 0;
        for (int i = 0; i < s1_len; i++)
        {
            if (s1[i] == s2[j])
            {
                j++;
            }
            else
            {
                diff_count++;
            }
        }
        if (diff_count <= 1)
            return 1;
        else
            return 0;
    }
    return 0;
}
int deletable(const char *s1, const char *s2)
{
    int diff_count = 0;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len + 1 == s2_len)
    {
        int j = 0;
        for (int i = 0; i < s2_len; i++)
        {
            if (s2[i] == s1[j])
            {
                j++;
            }
            else
            {
                diff_count++;
            }
        }
        if (diff_count <= 1)
            return 1;
        else
            return 0;
    }
    return 0;
}
int main()
{
    char s1[100], s2[100];
    printf("Enter the first string ");
    scanf("%s", s1);
    printf("Enter the second string ");
    scanf("%s", s2);
    if (strcmp(s1, s2) == 0 || replacable(s1, s2) || addable(s1, s2) || deletable(s1, s2))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}