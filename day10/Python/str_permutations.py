"""
  * @author: ashwek
  * @date 2/1/2019
"""
from itertools import permutations

String = "123"

for each in permutations(String):
	print(''.join(each))
