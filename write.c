#include <stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("New test.txt","w");
	char ch;
	fscanf(fptr,"%c",ch);
	fclose(fptr);
	return 0;
}