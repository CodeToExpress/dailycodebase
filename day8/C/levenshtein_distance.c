/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 24/12/2018
 */
#include <stdio.h>
#include <string.h>

int min(int x, int y, int z)
{
    if (x <= y && x <= z)
        return x;
    else if (y <= x && y <= z)
        return y;
    else
        return z;
}

int levenshtein_distance(const char *str1, const char *str2)
{
    int m = strlen(str1);
    int n = strlen(str2);
    int ld[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                ld[i][j] = j;

            else if (j == 0)
                ld[i][j] = i;

            else if (str1[i - 1] == str2[j - 1])
                ld[i][j] = ld[i - 1][j - 1];

            else
                ld[i][j] = 1 + min(ld[i][j - 1], ld[i - 1][j], ld[i - 1][j - 1]);
        }
    }

    return ld[m][n];
}

int main()
{
    const int STRING_LENGTH=100;
    char str1[STRING_LENGTH], str2[STRING_LENGTH];
    scanf("%s%s",str1,str2);

    printf("%d\n",levenshtein_distance(str1, str2));

    return 0;
}
