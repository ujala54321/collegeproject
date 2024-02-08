# include <stdio.h>
void main()
{
	int a,b ,*p;
	a=10;
	p=&a;
	b=*p+20;
	printf("%d",b);
}