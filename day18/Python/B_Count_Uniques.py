"""
  @author : ashwek
  @date : 15/1/2019
"""

def countUniques(data):
	return len(set(data))

data = [1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7]
print("Number of unique elements =", countUniques(data))
