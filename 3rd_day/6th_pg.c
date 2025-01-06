/*C program to create a text file*/
/* syntax for creating file in c
 * file_pointer = fopen("file_name","mode"); */

#include<stdio.h>
int main()
{
	FILE *fp;  //file pointer
	char fname[30];
	printf("Enter file name to create: ");
	scanf("%s",fname);

	/*creating(open) a file, in 'w': write mode*/
	fp = fopen(fname, "w");

	if(fp == NULL)
	{
		printf("File does not created ");
		exit(0);
	}
	printf("File created successfully.");
	return 0;
}
