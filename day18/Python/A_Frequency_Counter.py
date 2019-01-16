"""
  @author : ashwek
  @date : 15/1/2019
"""

num = list(map(int, input("Enter numbers (space separated) = ").split()))

count = {}
for each in num:
	if count.get(each) == None :
		count[each] = 1
	else:
		count[each] += 1

for v,c in count.items():
	print("\'" + str(v) + "\' is present " + str(c) + " time(s)")
