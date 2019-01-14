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

### C++ Implementation

#### [Solution 1](./C++/day18a.cpp)

```cpp
/*
* @author : dhruv-gupta14
* @date : 14/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int cnt[n] = {0};
	for(int i=0;i<n;i++)
	{
	    cin >> arr[i];
	    cnt[arr[i]]++;
	}
	
	for(int j=0;j<n;j++)
	{
	    if(cnt[arr[j]] != -1)
	    {
	        cout << arr[j] << " is present " << cnt[arr[j]] << " times" << endl;
	        cnt[arr[j]] = -1;
	    }
	}
	
	
	return 0;
}
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

### C++ Implementation

#### [Solution 1](./C++/day18b.cpp)

```cpp
/*
* @author : dhruv-gupta14
* @date : 14/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    std::set<int> s(arr,arr+n);
    
    cout << "Number of unique elements = " << s.size() << endl;
	
	
	return 0;
}
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

### C++ Implementation

#### [Solution 1](./C++/day18c.cpp)

```cpp
/*
* @author : dhruv-gupta14
* @date : 14/01/2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,cnt=0;
	cin >> n;
	cin >> m;
	int arr1[n];
	int arr2[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    
    for(int j=0;j<n;j++)
    {
        cin >> arr2[j];
    }
    
    sort(arr1,arr1 + n);
    sort(arr2,arr2 + n);
    
    for(int k =0 ;k<n; k++)
    {

        if(arr2[k] == pow(arr1[k],m))
        {
            cnt++;
        } else
        {
            cout << "false";
            break;
        }
    }
	
	if (cnt == n)
	{
	    cout << "true";
	}
	
	return 0;
}
```
