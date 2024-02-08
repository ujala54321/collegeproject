# include<stdio.h>
int main()
{
	int n,sr,er;
	printf("Enter the cheq from prime no or not:");
	scanf("%d",&n);
	checkPrime(n);
	printf("\nEnter the starting range for check prime:");
	scanf("%d",&sr);
	printf("Enter the encoding range:");
	scanf("%d",&er);
	for(int i=sr;i<=er;i++)
	{
		RangePrime(i);
	}
}
void checkPrime(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is a prime",a);
	}
	else
	{
		printf("%d is not a prime",a);
	}
}
void RangePrime(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d\t",a);
	}
}