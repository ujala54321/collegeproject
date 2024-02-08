#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("enter a element:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("sorry unable to allocate memmory");
		exit(0);
	}
	printf("Enter a element of an array:");
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
		
	}
	printf("sum=%d",sum);
	free(ptr);
	return 0;
}