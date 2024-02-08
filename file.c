# include <stdio.h>
main()
{
	FILE*fp;
	fp=fopen("file.txt","w");
	fprintf(fp,"Hello file by fprintf...\n");
	fclose(fp);
}