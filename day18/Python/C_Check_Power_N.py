"""
  @author : ashwek
  @date : 15/1/2019
"""

def checkPowerN(arr1, arr2, pow):

	arr1 = sorted(set(arr1))
	arr2 = sorted(set(arr2))

	if len(arr1) != len(arr2) :
		return False

	for i in range(len(arr1)):
		if arr1[i]**pow != arr2[i] :
			return False

	return True


arr1 = [1, 2, 3, 4]
arr2 = [4, 9, 1, 16]
n = 2
print("arr1 =", arr1, "arr2 =", arr2, "n =", n)
print("output = ", checkPowerN(arr1, arr2, n))

arr1 = [3, 4, 5, 2]
arr2 = [1, 2, 3]
n = 4
print("arr1 =", arr1, "arr2 =", arr2, "n =", n)
print("output = ", checkPowerN(arr1, arr2, n))
