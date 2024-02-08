// switch statement
# include <stdio.h>
int main()
{
	int year,y;
	printf("Enter the year:");
	scanf("%d",&year);
	y= year%400==0 || year%100==0 || year%4 == 0;
	switch(y){
		case 1:
			printf("%d is a leap year.\n",year);
			break;
			case 0:
				printf("%d is not a leap year.\n",year);
				break;
				default:
					printf("Invalid input.\n");
	}
	return 0;
	
	// single if statement
	int yr;
	printf("Enter the year: ");
	scanf("%d",&yr);
	if((yr%4==0&&yr%100!=0)||yr%400==0)
	{
		printf("%d is a leap year.",yr);
	} else{
		printf("%d is not a leap year.",yr);
	}
	return 0;
	
	// conditional operator
	int yer;
	printf("Enter a year: ");
	scanf("%d",&yer);
	(yer%4==0&&yer%100!=0)||yer%400==0?
	printf("%d is a leap year.",yer):printf("%d is a not leap year.",yer);
	
	// multiple if statement
	int isleapyear(int year)
	{
		if(year%4==0)
		{
			if(year%100==0)
			{
				if(year%400==0)
				{
					return 1;
					
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	int ear;
	printf("enter a year: ");
	scanf("%d",&ear);
	if(isleapyear(ear))
	{
		printf("%d is a leap year.\n",ear);
	}
	else
	{
		printf("%d is not a leap year.\n",ear);
	}
	
	// ternary operator
	int yaer;
	printf("enter a year: ");
	scanf("%d",&yaer);
	(yaer%100==0) ?
	((yaer%100==0) ?
	(printf("%d is leap yaer\n",yaer)):
		(printf("%d is not leap yaer\n",yaer))
) :
	( (yaer%4==0)?
		(printf("%d is leap yaer\n",yaer)):
	(printf("%d is leap yaer\n",yaer))

	);
	return 0;
}