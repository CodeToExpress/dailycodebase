#include<stdio.h>
int main()
{
	/* @author Rutuja Rajesh */
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
