"""
  @author : vishalshirke7
  @date : 28/12/2018
"""


def check_one_edit_away(str1, str2):
    l1, l2 = len(str1), len(str2)
    if abs(l1 - l2) > 1:
        return False
    count = 0
    i, j = 0, 0
    while i < l1 and j < l2:
        if str1[i] != str2[j]:
            if count == 1:
                return False

            if l1 > l2:
                i += 1
            elif l2 > l1:
                j += 1
            else:
                i += 1
                j += 1

            count += 1
        else:
            i += 1
            j += 1

    if i < l1 or j < l2:
        count += 1

    return count <= 1


check_one_edit_away(*(input().split()))


