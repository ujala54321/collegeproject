#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if (isFibonacci(n))
	{
		printf("%d is an element of the fibbonacci series\n",n);
		
	} else
	{
		printf("%d is not an element of the fibonacci series\n",n);
		printf("so Fibonacci series upto %d is\n",n);
		printFibonacci(n);
	}
	return 0;
}
int isFibonacci(int n)
{
	int a=0,b=1,c=1;
	while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
	}
	if (c==n)
	{
		return 1;
		
	} else
	{
		return 0;
	}
}
void printFibonacci(int n)
{
	int a=0,b=1,c=1;
	while(c<=n)
	{
		printf("%d",c);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
}