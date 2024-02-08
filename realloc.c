#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr,n1,n2;
	printf("Enter a no");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("Address of previously allocate memory:\n");
	for(i=0;i<n1;i++)
	printf("%pc\n",ptr+i);
	printf("\nEnter the new size:");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("addresh of newly allocate memory:\n");
	for(i=0;i<n2;i++)
	{
		printf("%pc\n",ptr+i);
		
	}
	free(ptr);
	return 0;
}