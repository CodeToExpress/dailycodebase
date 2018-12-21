# Day 2 -- String Reversal and Palindrome

## Part A -- String Reversal

**Question** - Given a string, write a program to return a new string with reversed order of characters.

## JavaScript Implementation

### [Solution 1](./JavaScript/sol1.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Strings are immutable (in JavaScript), hence convert it into array.
// Step 2: Run a loop from 0 to (size of array)/2 and interchange the element at i index with element at position size-1-i 
// Step 3: Join the array to form a string

function strRev (str) {
    var i, j, temp, len = str.length;

    // Strings are immutable in javascript, hence we convert the string into an array
    str = str.split('');

    // Reverse the array elements by interchanging the elements which are equidistant from start and end
    for (i=0, j=len-1; i<=len/2; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Join the reversed array into a string
    str = str.join('');

    // Return the reversed string
    return str;
}

console.log(strRev('Hello!'));
```

### [Solution 2](./JavaScript/sol2.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Declare a temporary array, say tempArr[]
// Step 2: Run a loop from size-1 to 0 and add corresponding character of string to the tempArr[] from beginning
// Method 2.1 (Add using index)
// for (i=0, j=len-1; i<len; i++, j--) {
//     tempArr[i] = str[j];
// }
// Method 2.2 (Add using `push()` )
// for (j=len-1; j>=0; j--) {
//     tempArr.push(str[j]);
// }
// Step 3: Join the elements of the tempArr[] to form a string

function strRev (str) {
    var i, j,
      len = str.length,
      tempArr = [];
    
    // Read string in reverse order and store each letter in the array
    for (j=len-1; j>=0; j--) {
        tempArr.push(str[j]); 
    }

    // Join the tempArr to convert it into a string
    tempArr = tempArr.join('');

    // Return tempArr
    return tempArr;
}

console.log(strRev('Hello!'));
```

### [Solution 3](./JavaScript/sol2.1.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

function strRev (str) {
    var i, j,
      len = str.length,
      tempArr = [];
    
    // Read string in reverse order and store each letter in the array
    for (i=0, j=len-1; i<len; i++, j--) {
        tempArr[i] = str[j]; // You can use push() instead of assigning by index
    }

    // Join the tempArr to convert it into a string
    tempArr = tempArr.join('');

    // Return tempArr
    return tempArr;
}

console.log(strRev('Hello!'));
```

### [Solution 4](./JavaScript/sol3.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Split the given string into array
// Step 2: Reverse the array using reverse() function
// Step 3: Join the reversed array to form a string

// This solution works with JS only (or any other language which supports in built methods)
function strRev (str) {
    // Convert str to array
    // Reverse the array
    // Join the array to form a string

    // let arr = str.split('');
    // arr.reverse();
    // return arr.join('');

    // One Liner answer
    return str.split('').reverse().join('');
}

console.log(strRev('Hello!'));
```

### [Solution 5](./JavaScript/sol4.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Declare an empty string, say reverse = ''
// Step 2: Run a loop from 0 to length of string
// Step 3: For each letter of original string, concatenate reverse with it. (concatenate each element of string with reverse string, such that element gets concatenated before the current reverse string)

// Using basic string concatenation
function strRev (str) {
    // Initialize an empty string "Reverse"
    let reverse = '';

    for (i=0; i<str.length; i++) {
        // for each letter of original string, concatenate reverse with it
        reverse = str[i] + reverse;
    }

    return reverse;
}

console.log(strRev('Hello!'));
```

### [Solution 6](./JavaScript/sol5.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Method 5 -- Using reduce helper

// Using reduce helper function (JS only)
function strRev(str) {
    // return str.split('').reduce((reversed, character) => {
    //     return character+reversed;
    // }, '');

    // One Liner
    return str.split('').reduce((rev, letter) => letter + rev, '');
}

console.log(strRev('Hello!'));
```

## Java Implementation

### [Solution 1](./Java/Reverse.java)

```java
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

import java.util.Scanner;

public class Reverse {
    public static void main(String[] args) {
        System.out.println("/* ===== String Reversal ===== */");
        System.out.print("\nPlease enter the string: ");
        Scanner input = new Scanner(System.in);
        String str = input.next();
        String reversed = "";

        for (int i=0; i<str.length(); i++) {
            reversed = str.charAt(i) + reversed;
        }

        System.out.println("Reversed String: " + reversed);
    }
}

```

## Python Implementation

### [Solution 1](./Python/Reverse.py)

```python
'''
 * @author: ashwek
 * @date: 21/12/2018
'''

Str = input("Enter a string : ")

print("Reverse of", Str, "=", Str[::-1])
```


<hr />

## Part B -- Palindrome Check

**Question** - Given a string, write a function which prints whether or not the given string is a Palindrome

## JavaScript Implementation

### [Solution 1](./JavaScript/palindrome1.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Method 1 (Check the equidistant characters)
// Step 1: Set a flag variable ( = 1 )
// Step 2: Run a loop from 0 to stringLength/2 
// Step 3: In each iteration check whether character at ith position is equal to the character at length-i-1 position.
// Step 4: If the condition is satisfied even once, set the flag to 0
// Step 5: After the iterations are over, if the flag = 1, print "Palindrome" else print "Not Palindrome"

function isPalindrome (str) {
    let i, len = str.length, flag = 1;

    // Check the equidistant characters
    for (i=0; i>=len/2; i++) {
        if (str[i] !== str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    // Print the result based on flag
    if (flag === 1) {
        console.log("The given string \"" + str + "\" is a palindrome");
    } else {
        console.log("The given string \"" + str + "\" is not a palindrome");
    }
}

isPalindrome("hello");
isPalindrome("level");
```

### [Solution 2](./JavaScript/palindrome2.js)

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Find the reverse of the given string
// Step 2: If reverse is equal to original string, print "Palindrome", else print "Not Palindrome".

function isPalindrome (str) {
    let reversed = str.split('').reverse().join('');
    if (str === reversed) {
        console.log("The given string \"" + str + "\" is a palindrome");
    } else {
        console.log("The given string \"" + str + "\" is not a palindrome");
    }
}

isPalindrome('hello');
isPalindrome('level');
```

### [Solution 3](./JavaScript/palindrome3.js) -- One Liner

```js
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// One Liner
function isPalindrome (str) {
    (str === (str.split('').reverse().join(''))) ? console.log("Palindrome") : console.log("Not Palindrome");
}

isPalindrome('hello');
isPalindrome('level');
```

## Java Implementation

### [Solution 1](./Java/Palindrome1.java)

```java
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */
 
import java.util.Scanner;

public class Palindrome {
    public static void main (String[] args) {
        System.out.println("/* ===== Palindrome Check ===== */");
        System.out.print("\nPlease enter a string to check: ");

        // Read the string
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int size = str.length(), flag =1;

        // Check whether it is palindrome
        for (int i=0, j=size-1; i<=size/2; i++, j--) {
            // Check whether the characters equidistant from start and end are same or not
            if (str.charAt(i) != str.charAt(j)) {
                flag = 0;
                break;
            }
        }

        // Print results according to flag
        if (flag == 0) {
            System.out.println("The given string \"" + str + "\" is not a palindrome");
        } else {
            System.out.println("The given string \"" + str + "\" is a palindrome");
        }
    }
}
```

### [Solution 2](./Java/Palindrome2.java)

```java
/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */
 
import java.util.Scanner;
// Method 2: Check whether reversed string is equal to the original string

public class Palindrome2 {
    public static void main (String[] args) {
        System.out.println("/* ===== Palindrome Check ===== */");
        System.out.print("\nPlease enter a string to check: ");

        // Read the string
        Scanner input = new Scanner(System.in);
        String str = input.next();
        String reversed = "";
        int size = str.length();

        // Reverse the string
        for (int i=0; i<str.length(); i++) {
            reversed = str.charAt(i) + reversed;
        }
        
        // Check if the reversed string is same as the original string
        if (str.equals(reversed)) {
            System.out.println ("The given string \"" + str + "\" is a Palindrome");
        } else {
            System.out.println ("The given string \"" + str + "\" is not a Palindrome");
        }
    }
}
```

## Python Implementation

### [Solution 1](./Python/Palindrome.py)

```python
'''
 * @author: ashwek
 * @date: 21/12/2018
'''

Str = input("Enter a string : ")

print(Str, "is", end=" ")

if( Str != Str[::-1] ):
    print("Not", end=" ")

print("Palindrome")
```
