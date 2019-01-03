"""
 @author : imkaka
 @date   : 31/12/2018

"""

import sys


def min_edit_distance(str1, str2):
    len1 = len(str1)
    len2 = len(str2)

    # Matrix inilization
    dp = [[0 for i in range(len2 + 1)]
          for j in range(len1 + 1)]

    for i in range(1, len1 + 1):
        dp[i][0] = i

    for j in range(1, len2 + 1):
        dp[0][j] = j

    # Fill the DP matrix.

    for j in range(1, len2 + 1):
        for i in range(1, len1 + 1):
            if(str1[i - 1] == str2[j - 1]):
                dp[i][j] = dp[i - 1][j - 1]
            else:
                dp[i][j] = 1 + min(dp[i - 1][j - 1],
                                   dp[i][j - 1],
                                   dp[i - 1][j])
    return dp[len1][len2]


def main():

    print("==================Minimum Edit Distance====================")
    print()

    print(min_edit_distance("kitten", "sitting"))
    print(min_edit_distance("abcdef", "abcdhgikll"))


if __name__ == '__main__':
    main()
