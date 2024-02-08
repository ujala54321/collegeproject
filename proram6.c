#include <stdio.h>
int main()
{
	int start,end;
	printf("Enter the start of the range:");
	scanf("%d",&start);
	printf("Enter the end of the range:");
	scanf("%d",&end);
	printf("\t");
	for(int i=1;i<=10;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	for(int i=start;i<=end;i++)
	{
		printf("%d\t",i);
		for(int j=1;j<=10;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	return 0;
}