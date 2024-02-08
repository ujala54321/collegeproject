#include<stdio.h>
int main()
{
	int n,t=0,Case,a,sum=1,p,pk,fa=0,fb=1,fc;
	printf("Enter your choice\n");
	scanf("%d",&Case);
	fflush(stdin);
	switch(Case)
	{
		case 1:
			printf("Enter n term for sum natural number\n");
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			t=t+i;
			printf("Sum of %d natural number is %d",n,t);
			break;
			case 2:
				printf("Enter number for find factorial\n");
				scanf("%d",&a);
				for(int i=1;i<=a;i++)
				sum=sum*i;
				printf("factorial value of given number is :%d",sum);
				break;
				case 3:
					printf("Enter number for power calculation\n");
					scanf("%d",&n);
					printf("Enter power \n");
					scanf("%d",&p);
					for(int i=1;i<=p;i++)
					sum=sum*n;
					printf("%d",sum);
					break;
					case 4:
						fflush(stdin);
						printf("Enter the length of fibbonaci series:");
						scanf("&d",&pk);
						printf("print fibonacci series \n");
						printf("%d %d",fa,fb);
						for(int i=1;i<=pk;i++)
						{
							fc=fa+fb;
							printf("%d",fc);
							fa=fb;
							fb=fc;
							
						}
						break;
						default:
							printf("Wrong input");
	}
}