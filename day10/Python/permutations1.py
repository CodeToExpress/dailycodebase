from itertools import permutations
"""
  @author : vishalshirke7
  @date : 28/12/2018
"""

ip_str = input()
perm = permutations(list(ip_str), len(ip_str))
for i in set(list(perm)):
    print("".join(map(str, i)))
