/*
    @author: AkshitAggarwal
    @date: 17/03/2019
*/

#include<iostream>

using namespace std;
int partition(int A[], int left, int right);
void quickSort(int A[], int left, int right);

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quickSort(a, 0, n - 1);
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}
void quickSort(int A[], int left, int right)
{
    if(left < right)
    {
        int pivot = partition(A, left, right);
        quickSort(A, left, pivot - 1);
        quickSort(A, pivot + 1, right);
    }
}

int partition(int A[], int left, int right)
{
    int x = A[right];
    int i = left - 1;
    int j = 0;
    for(j = left; j < right; j++)
    {
        if(A[j] <= x)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[right]);
    return ++i;
}