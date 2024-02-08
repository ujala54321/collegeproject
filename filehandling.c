//FILE HANDLING:
#include<stdio.h>
void main()
{
	FILE*fp;
	int nos=0,nol=0,noc=0;
	char ch;
	fp=fopen("C:\\abc\\abd.txt","r");
	if(fp==NULL)
	{
		puts("could not open the file");
		return 1;
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		if(ch==' ')
		nos++;
		if(ch=='\n')
		nol++;
		noc++;
	}
	fclose(fp);
	printf("space:%d\nLINE:%d\ncharacter:%d",nos,nol,noc);
	return 0;
}
	