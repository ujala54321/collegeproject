#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry!unable to allocate memory");
		exit(0);
		
	}
	printf("Enter element of an aaray:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum=%d",sum);
	free(ptr);
	return 0;
}