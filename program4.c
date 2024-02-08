# include<stdio.h>
int main()
{
	int m,p,c,a,b;
	printf("Enter marks m: ");
	scanf("%d",&m);
	printf("Enter marks p: ");
	scanf("%d",&p);
	printf("Enter marks c: ");
	scanf("%d",&c);
	a=m+p+c;
	b=m+p;
	if((m>60&& p>50&& c>40) || (a>=200 || b>=150))
	printf("candidate is eligible.");
	else
	printf("candidate is not eligible.");
}