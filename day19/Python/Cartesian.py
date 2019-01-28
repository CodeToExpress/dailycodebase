"""
  @author : vishalshirke7
  @date : 15/01/2019
"""

import itertools


def cartesian1(*iplists):   # method 1 using product function
    for element in itertools.product(*iplists):
        print(element)


def cartesian2(ip1, ip2):   # method 2 using iteration
    if not ip1 or not ip2:
        return None
    cartesian_product = []
    for i in ip1:
        for j in ip2:
            cartesian_product.append((i, j))

    return cartesian_product


ip1 = list(map(int, input().split()))
ip2 = list(map(int, input().split()))
cartesian1(ip1, ip2)
cartesian = cartesian2(ip1, ip2)
for i in cartesian:
    print(i)