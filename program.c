#include <stdio.h>
int main()
{
	int month;
	printf("Enter month number (1-12): ");
	scanf("%d", &month);
	switch(month)
	{
		case 1:
		case 3:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("31 days");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("30 days");
		break;
		case 2:
		printf("28/29 days");
		break;
		default:
		printf("Invalid input!please enter the case");
		return 0;	
	}
	
	
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(((year%4==0) && (year%100!=0)) || (year%400==0))
	
	
	printf("year is leap year",year);
    
	else
	
	
	printf("year is not leap year");
	return 0;
}

   