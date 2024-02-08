#include<stdio.h>
int main()
{
	int number=0;
	printf("enter a num");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("%d is even num",number);
	}
	else
	printf("%d is odd num",number);
	return 0;
}