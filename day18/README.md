![cover](./cover.png)

# Day 18 - Array Series Part 1

Till now we looked at some basic problems, then we went to string related problems, then we did some recursion based problems, now we will do some array based problems.

## Ques A - Frequency Counter

**Question** -- Given an array, write a program to print the number of times each element is present

**Example**

```
input - [ 1, 2, 3, 1, 3, 4, 4, 4, 4, 2, 5]
output -
'1' is present 2 time(s)
'2' is present 2 time(s)
'3' is present 2 time(s)
'4' is present 4 time(s)
'5' is present 1 time(s)
```

## Ques B - Count Uniques

**Question** -- Given a **sorted** array, write a function `countUniques` which counts the number of unique elements

**Example**

```
input: [1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7]
output:
Number of unique elements = 7
```

## Ques C -- Check Power N

**Question** -- Write a function "checkPowerN" which accepts 2 arrays and a number 'N' and returns true if each elements in array 2 are the elements of array 1 raised to the power 'N'

**Example**

```
input: arr1 = [1, 2, 3, 4], arr2 = [4, 9, 1, 16], N = 2
output: true

input: arr1 = [3, 4, 5, 2], arr2 = [1, 2, 3], N=4
output: false
```

![ques](./ques.png)

## Question 1 -- Frequency Counter

### JavaScript Implementation

#### [Solution by @MadhavBahlMD](./JavaScript/freqCounter_madhav.js)

```js
/**
 * @author MadhavBahlMD
 * @date 01/14/2018
 * Frequency Ccounter using object
 */

function freqCounter (arr) {
    let freq = {};

    // Iterate over the array and update frequency object
    for (let element of arr) {
        freq[element] = (freq[element] || 0) + 1;
    }
    
    // Print the output
    printFrequency (freq);
}

function printFrequency (freqObj) {
    for (let key in freqObj)
        console.log (`'${key}' is present ${freqObj[key]} time(s)`);
}

freqCounter ([ 1, 2, 3, 1, 3, 4, 4, 4, 4, 2, 5]);
```

### Python Implementation

#### [Solution](./Python/A_Frequency_Counter.py)

```python
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
```

***

## Question 2 -- Count Uniques

### JavaScript Implementation

#### [Solution 1](./JavaScript/countUniques1.js)

Using Multiple Pointer

```js
/**
 * @author MadhavBahlMD
 * @date 14/01/2019
 * Count uniques using multiple pointers (since the input array is sorted)
 */


function countUniques (arr) {
    if (arr.length === 0)   return 0;

    let i=0;

    for (let j=1; j<arr.length; j++) {
        if (arr[i] !== arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i+1;
}

console.log (`Number of unique elements = ${countUniques([1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7])}`);
```

#### [Solution 2](./JavaScript/countUniques2.js)

Using Frequency Object

```js
/**
 * @author MadhavBahlMD
 * @date 14/01/2019
 * Count Uniques using frequency object
 */

function countUniques (arr) {
    let freq = {},
        count = 0;

    for (let element of arr) {
        if (!(element in freq)) {
            count++;
            freq[element] = 1;
        } else
            freq[element]++;
    }

    return count;
}

console.log (`Number of unique elements = ${countUniques([1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7])}`);
```

#### [Solution 3](./JavaScript/countUniques3.js)

Using Brute Force Search

```js
/**
 * @author MadhavBahlMD
 * @date 14/01/2019
 * Count Uniques using brute force search
 */

function countUniques (arr) {
    if (arr.length === 0)   return 0;

    let count = 1; // first element is always unique, since there is nothing behind it
    for (let j=1; j<arr.length; j++) {
        let flag = true;
        for (let i=0; i<j; i++) {
            if (arr[i] === arr[j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            count++;
    }

    return count;
}

console.log (`Number of unique elements = ${countUniques([1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7])}`);
```

### Python Implementation

#### [Solution](./Python/B_Count_Uniques.py)

```python
"""
  @author : ashwek
  @date : 15/1/2019
"""

def countUniques(data):
	return len(set(data))

data = [1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7]
print("Number of unique elements =", countUniques(data))
```
***

## Question 3 -- Check Power N

### JavaScript Implementation

#### [Solution 1](./JavaScript/checkPowerN_madhav.js)

Using Frequency Count

```js
/**
 * @author MadhavBahlMD
 * @date 14/01/2019
 * Using frequency counter
 */

function checkPowerN (arr1, arr2, num) {
    if (arr1.length !== arr2.length)    return false;

    let freq1 = {};
        freq2 = {};
    
    // Make frequency counter for array 1
    let powElement;
    for (let element of arr1) {
        powElement = Math.pow (element, num);
        freq1[powElement] = (freq1[powElement] || 0) + 1;
    }

    // Make frequency counter for array 2
    for (let element of arr2) 
        freq2[element] = (freq2[element] || 0) + 1;
        
    // Compare the objects
    for (let key in freq1) {
        if (!(key in freq2))
            return false;
        if (freq1[key] !== freq2[key])
            return false;
    }
    return true;
}

console.log (checkPowerN ([1, 2, 3, 4], [4, 9, 1, 16], 2));
console.log (checkPowerN ([3, 4, 5, 2], [1, 2, 3], 4));
```

#### [Solution 2](./JavaScript/checkPowerN_madhav.js)

Using Brute Force search

```js
/**
 * @author MadhavBahlMD
 * @date 14/01/2019
 * Using Brute Force Search
 */

function checkPowerN (arr1, arr2, num) {
    if (arr1.length !== arr2.length)    return false;

    for (let i=0; i<arr1.length; i++)
        arr1[i] = Math.pow (arr1[i], num);

    for (let element of arr1) {
        let pos = arr2.indexOf (element);

        if (pos < 0)
            return false;
        
        arr2.splice (pos, 1);
    }
    return true;
}

console.log (checkPowerN ([1, 2, 3, 4], [4, 9, 1, 16], 2));
console.log (checkPowerN ([3, 4, 5, 2], [1, 2, 3], 4));
```

### Python Implementation

#### [Solution](./Python/C_Check_Power_N.py)

```python
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
```
