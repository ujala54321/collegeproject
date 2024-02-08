#include <stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=rows;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=rows;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
		printf("*");
		}
		printf("\n");
	}
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	int p;
	printf("Enter the rows:");
	scanf("%d",&p);
	int num = 1;
	for(int i=1;i<=p;i++)
	{
		for(int j=1;j<=i;++j);
		{
			printf("%d",&num);
			++num;
		}
		printf("\n");
	}
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	int space,k=0,n=-1;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(space=rows;space>=i;--space)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",i-k);
		}
		for(k=1;k<=i;k++)
		{
		printf("%d",k);	
		}
		printf("\n");
	}
	int numRows;
	printf("Enter the rows:");
	scanf("%d",&numRows);
	int row,col,coefficient;
	for(row=0;row<numRows;row++)
	{
		coefficient=1;
		for(col=0;col<=row;col++)
		{
			printf("%d",coefficient);
			coefficient=coefficient*(row-col)/(col+1);
		}
		printf("\n");
	}
	return 0;
}