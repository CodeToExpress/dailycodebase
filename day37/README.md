![cover](./cover.png)

# Day 37 - Search and Sort Algorithms Part J: Applications

Now that we are practising searching and sorting algorithms since past 2 weeks, it's the time to do some questions that involves their usage. Since the weeekend is here, try out these problems.

A huge shoutout to Hackerearth and Geeks4Geeks for having such great collecton of problems. 

Try out as many problems as you can, the contribution guidelines for today would be a little different (I've mentioned them after this list of links)

### Hackerearth Problems

1. [Linear Search](https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/)
2. [Binary Search](https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/)
3. [Ternary Search](https://www.hackerearth.com/practice/algorithms/searching/ternary-search/practice-problems/)
4. [Bubble Sort](https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/)
5. [Selection Sort](https://www.hackerearth.com/practice/algorithms/sorting/selection-sort/practice-problems/)
6. [Insertion Sort](https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/)
7. [Merge Sort](https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/)
8. [Quick Sort](https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/)
9. [Radix Sort](https://www.hackerearth.com/practice/algorithms/sorting/radix-sort/practice-problems/)
10. [Heap Sort](https://www.hackerearth.com/practice/algorithms/sorting/heap-sort/practice-problems/)

### GeeksForGeeks Problems

1. [Searching Algorithms - G4G](https://www.geeksforgeeks.org/searching-algorithms/)
2. [Sorting Algorithms - G4G](https://www.geeksforgeeks.org/sorting-algorithms/)

## Contribution Guidelines

1. Make a folder in this directory (day37), and the name of the folder should be the name of the problem (Example: ```divide apples```).
2. In the folder add the README.md 
3. Copy paste the question and sample input output in the README.md
4. Add credits at the start like this

```
Question Source: HackerEarth
Question Link: https://www.hackerearth.com/practice/algorithms/sorting/heap-sort/practice-problems/algorithm/divide-apples/
```

5. Add your code to README
6. Add the file containing the code in the same directory.

## Question

Linear Search

**Example**
```
Enter the value of n 4
Enter array elements:
6 8 9 1

Enter element to search:9
Element found at index 2
```

### [C Solution](./Linear Search.c)

```c
/**
 * @author Rutuja Rajesh
 * @date 8/2/19
 */
 #include<stdio.h>
int main()
{
	int a[20],i,x,n;
	printf("Enter the valu of n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	printf("\nEnter element to search:");
	scanf("%d",&x);
	for(i=0;i<n;++i)
		if(a[i]==x)
			break;	
	if(i<n)
		printf("Element found at index %d",i);
	else
		printf("Element not found");
	return 0;
  }
```
