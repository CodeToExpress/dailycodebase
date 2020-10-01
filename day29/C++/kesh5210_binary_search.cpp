/**
* @author: Hrishikesh-Thakkar
* @date: 10/1/2020
**/

#include<bits/stdc++.h>
using namespace std;

//Recursive Approach
int binarySearchRecurse(vector<int> &arr,int low,int high,int key){

	if(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid] == key) {
			return mid;
		}
		else if(arr[mid]<key) {
			return binarySearchRecurse(arr,mid+1,high,key);
		}
		else {
			return binarySearchRecurse(arr,low,mid-1,key);
		}
	}
	return -1;
}

//Iterative Approach
int binarySearchIterate(vector<int> &arr,int low, int high, int key){

	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid]<key){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}

	return -1;
}
int main(){

	//Input array
	vector<int> arr;
	for(int i=0;i<=8;i++)
		arr.push_back(pow(2,i));

	//Number to search for
	int key = 32;

	//In case Array is not sorted as Binary Search works only with Sorted Arrays
	sort(arr.begin(),arr.end());
	cout<<"For the given array: ";
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"For the key: "<<key<<endl;

	//Returns 0 indexed position of element in sorted array.
	cout<<"Binary Search using Recursion:"<<binarySearchRecurse(arr,0,arr.size()-1,key)<<endl;
	cout<<"Binary Search using Iteration:"<<binarySearchIterate(arr,0,arr.size()-1,key)<<endl;
	return 0;
}

/*
	Algorithmic Analysis: 

	Binary Search Time Complexity is log(n)
	This is due to fact that at each comparison if the element is not matched then half of the remaining array is ignored
	based on the key and the value of the array we are currently at.

	Binary Search takes:
		1. Input Array
		2. Lower Search Bound
		3. Upper Search Bound
		4. Number to search for

	Returns 0 based index of element if found or -1 if not found.
*/