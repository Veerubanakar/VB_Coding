/*C-program to reading from a file*/

#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("Viresh.txt", "r");
	if(fp == NULL)
	{
		printf("Error in opening file\n");
		return 1;
	}
	char buffer[256];
	while(fgets(buffer, sizeof(buffer),fp))
	{
		printf("%s",buffer);
	}
	fclose(fp);
	return 0;
}
