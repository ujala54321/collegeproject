#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
}