#include<stdio.h>
int main()
{
	int arr[20],i,s,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Enter number which you want to search in array:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==arr[i])
		{
			printf("%d is present in the array at the %d position",s,i+1);
			break;
		}
		if(i==(n-1))
		{
			printf("number not found");
		}
	}
}