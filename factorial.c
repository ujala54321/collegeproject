#include <stdio.h>
int main()
{
	int i,f=1,n;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial %d is %d",n,f);
}