/*C-program to copying content from one file to another or one file to another file*/

#include<stdio.h>

int main()
{
	FILE *source = fopen("Viresh.txt","r");
	FILE *destination = fopen("Veeresh.txt","w");

	if(source == NULL || destination == NULL)
	{
		printf("Error opening files\n");
		return 1;
	}
	char ch;
	while((ch = fgetc(source)) != EOF)
	{
		fputc(ch, destination);
	}
	fclose(source);
	fclose(destination);
	printf("Content copied successfully.\n");
	return 0;
}
