/*Appending to a file or Adding content to an existing file*/

#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("Viresh.txt","a");
	if(fp == NULL)
	{
		printf("error opening file\n");
		return 1;
	}
	fprintf(fp, "How are you.\n");
	fclose(fp);
	printf("Text appended sucessfully.\n");
	return 0;
}
