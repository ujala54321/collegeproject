# include<stdio.h>
int main()
{
	int n,reversedno,remainder;
	printf("Enter an no");
	scanf("%d",&n);
	
	while(n!=0){
	remainder = n%10;
	reversedno = reversedno*10+remainder;
    n/=10;	
	}
	printf("reversedno = %d",reversedno);
	return 0;
}