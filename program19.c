#include<stdio.h>
int main()
{
	int a[20],*ptr,*ptr2,i,n;
	printf("Enter the length of array:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	ptr=a;
	printf("\nValue of last element of array:%d",*(ptr+(n-1)));
	ptr=&a;
	ptr2=&a[n-1];
	printf("\nAdress of last element is %u getting two locations back address is %u",ptr2,ptr2-2);
	printf("\nValue at a[%d]is %d",(ptr2-(ptr+(n-1))),*ptr);
	ptr++;
	ptr--;
	if(ptr==ptr2)
	printf("\nptr & ptr2 pointing to same location");
	else
	printf("\nptr & ptr2 pointing to different location");
}