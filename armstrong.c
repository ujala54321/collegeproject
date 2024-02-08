# include <stdio.h>
int main()
{
	int n,m,r,result=0;
	printf("Enter a three-digit integer: ");
	scanf("%d",&n);
	m=n;
	
	while (m != 0) {
		r = m % 10;
		result += r*r*r;
		m/=10;
	}
	if(result == n)
	printf("%d is an armstrong number.",n);
	else
	printf("%d is not an armstrong number.",n);
	return 0;
}
