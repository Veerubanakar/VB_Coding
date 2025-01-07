/*C-program creating & writing to a file*/

#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("Viresh.txt","w");
	if(fp == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	fprintf(fp, "Hello Veeru\n");
	fclose(fp);
	printf("File created & text writte successfully\n");
	return 0;
}
