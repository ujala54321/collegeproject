#include<stdio.h>
int main()
{
	int i,j,rows,column,a[10][10],sum=0;
	printf("Please Enter number of rows and column:\n");
	scanf("%d %d",&i,&j);
	printf("\nPlease enter the matrix elements:\n");
	for(rows=0;rows<i;rows++)
	{
		for(column=0;column<j;column++)
		{
			scanf("%d",&a[rows][column]);
		}
	}
	for(rows=0;rows<i;rows++)
	{
		sum=sum + a[rows][rows];
	}
	printf("\nThe sum of diagonal element of a matrix = %d",sum);
	return 0;
}