![cover](./cover.png)

# Day 28 - Search and Sort Algorithms Part A: the Linear Search

It's almost a month sincec we starated this initiative and we did questions on Strings, Arrays, Recursion and Misc. Also, in some questions, we tried to solve the question in best possible runtime, which improved our concepts of time complexity. Now, to make our code more efficient, it's highly essential that we know some frequently used searching and sorting algorithms and apply them in the code accordingly whenever required.

So this week we will be be focusing on various searching and sortinig algorithms. Today's Algorithm -- Linear Search

## Question

Write a program to implement linear search, to find the index of a given element in a given array

**Example**

```
input: arr = [1, 2, 3, 4, 5], num = 2
output: 1 (index of found element)

input: arr = [1, 2, 3, 4, 5], num = 7
output: undefined
```

![ques](./ques.png)

## Solution

### [JavaScript Implementation](./JavaScript/linear.js)

```js
function linearSearch (arr, n) {
    for (let i=0; i<arr.length; i++)
        if (arr[i] === n)
            return i;

    return undefined;
}

console.log (linearSearch ([1, 2, 3, 4, 5], 2));
console.log (linearSearch ([1, 2, 3, 4, 5], 7));
```

## Java Implementation

### [Solution](./Java/linearSearch1.java)

```java
/**
 * @date 28/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class linearSearch1 {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n;int i;int p,c=-1;
        System.out.println("Enter size and array elements");
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter element to be found");
        p=sc.nextInt();
        for(i=0;i<n;i++)
           if(arr[i]==p)
           {
               c=i;
               break;
           }
        if(c!=-1)
            System.out.println(c);
        else
            System.out.println("undefined");
    }
}
```

### [Solution by thefluffyoshi](./Java/linearSearch_thefluffyoshi.java)
```java
/*
 * @author thefluffyoshi
 * date: 31/10/2020
 */

import java.util.Scanner;

public class linearSearch_thefluffyoshi
{
    public static void main(String []args)
    {
        //vars
        int arr_size, i, searchnum, storeNum = -2;

        //Array size
        System.out.print("Enter an array size: ");
        Scanner arr_scan = new Scanner(System.in);
        arr_size = arr_scan.nextInt();

        //Storing the size into an array
        int array[] = new int[arr_size];

        //Putting in the array elements based on the size of the array
        for (i = 0; i < arr_size; i++)
        {
            System.out.print("Enter the elements inside the array: ");
            array[i] = arr_scan.nextInt();
        }//end input elements inside array

        //Specific element/number to be found in the array
        System.out.print("Enter element to be found: ");
        searchnum = arr_scan.nextInt();
        for (i = 0; i < arr_size; i++)
        {
            if (array[i] == searchnum)
            {
                storeNum = i;
                break;
            }//end searching for specific num
        }//end for loop to search

        //Confirmation if specific element is inside array or not and at what position instead of index
        if (storeNum != -2)
        {
            System.out.println("Output at position: " + storeNum + 1);
        }//end comparing if storeNum was changed
        else
        {
            System.out.println("Output: undefined");
        }//end if storeNum stayed the same
    }//end main
}//end linearSearch class


```

## C++ Implementation

### [Solution](./C++/linearSearch.cpp)

```cpp

/*
* @author : imkaka
* @date   : 29/1/2019
*/

#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int> arr, int val){

    int size = arr.size();
    for(int i = 0; i < size; ++i){
        if(arr[i] == val)
          return i;
     return -1;
     }
        
 int main(){

    vector<int> arr = {1, 2, 5, 10, 6, 100};
    vector<int> arr2 = {500, 22, 101, 10, 6, 0};
    int val = 10;
    int val2 = 1;

    cout << linearSearch(arr, val) << endl;
    cout << linearSearch(arr2, val2) << endl;
    return 0;
}
```
## C Implementation
### [Solution](./C/Linear_Search.c)

```c
/*
 * @author : ashwek
 * @date : 29/01/2019
 */

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int n, int search){

    int i;

    for(i=0; i<n; i++){
        if( arr[i] == search )
            return i;
    }

    return -1;
}

void main(){

    int *arr, n, search, i;

    printf("Enter size of array = ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    printf("Enter %d elements : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter a value to search = ");
    scanf("%d", &search);

    i = linear_search(arr, n, search);

    if( i == -1 ){
        printf("%d not found in array", search);
    }
    else{
        printf("%d found at %d index", search, i);
    }
}
```
