#include<stdio.h>
int main()
{
	int num,a=2;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num>1)
	{
		if(num%a==0)
		{
			printf("%d",a);
			num=num/a;
		}
		else
		{
			a++;
		}
	}
}