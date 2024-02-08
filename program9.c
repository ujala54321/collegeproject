#include<stdio.h>
int checkArmstrong(int);
int power(int,int);
void main()
{
	int n,sum=0,range,res=0,i;
	printf("Enter any number:");
	scanf("%d",&n);
	sum=checkArmstrong(n);
	if(sum==n)
	{
		printf("%d is an Armstrong number",n);
	} else
	{
	
	printf("%d is not an Armstrong number",n);
}
	printf("\nEnter Range:");
	scanf("%d",&range);
	printf("Armstrong in range 1-%d:",range);
	for(i=1;1<=range;i++)
	{
		res=checkArmstrong(i);
		if(i==res)
		printf("%d",i);
	}
}
int checkArmstrong(int n)
{
	int c=0,temp,sum=0;
	temp=n;
	while(temp!=0)
	{
		temp/=10;
		c++;
	}
	temp = n;
	while(temp!=0)
	{
		temp = n;
		while(temp!=0)
		{
			sum+=power(temp%10,c);
			temp/=10;
		}
		return sum;
	}
	int power(int x,int y)
	{
		int i,p=1;
		for(i=1;i<=y;i++)
		p*=x;
		return p;
	}
	return 0;
}