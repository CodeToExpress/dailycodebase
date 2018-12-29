"""
  @author : vishalshirke7
  @date : 28/12/2018
"""


def check_one_edit_away(str1, str2):
    l1, l2 = len(str1), len(str2)
    if abs(l1 - l2) > 1:
        return False
    if l1 == l2:
        count = 0
        for i in range(l1):
            if str1[i] != str2[i]:
                count += 1
        if count > 1:
            return False
        else:
            return True
    else:
        if len(set(str1) & set(str2)) == min(l1, l2):
            return True
        else:
            return False


check_one_edit_away(*(input().split()))


