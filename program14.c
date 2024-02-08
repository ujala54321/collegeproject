#include<stdio.h>
int main()
{
	int arr[6],i,largest,smallest,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	smallest=arr[0];
	for(i=0;i<n;i++)
	{
		if(largest<arr[i])
		{
			largest=arr[i];
		}
		if(smallest>arr[i])
		{
			smallest=arr[i];
		}
	}
	printf("largest no is :%d\n",largest);
	printf("smallest no is :%d",smallest);
	return 0;
}