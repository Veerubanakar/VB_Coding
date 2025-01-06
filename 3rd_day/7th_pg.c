/* steps to create, write and read text in/from file
Creating variable of file pointer
Opening/creating a file
Write some of the characters in a file
Reading one by one character from a file
Closing a file
And with second example
Writing continuous text (complete paragraph until we do not press any special character defined in program).
Reading all text until EOF (End of the file) is not found.
And closing the file */

/*writing some of the characters (without taking input from the keyboard) and reading, printing , written characters.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char fname[20];

	printf("\nEnter file name to create :");
	scanf("%s",fname);

	fp = fopen(fname,"w");
	if(fp == NULL)
	{
		printf("File not created");
		exit(0);
	}
	printf("File crated successfully");

	/*writing into file*/
	putc('v',fp);
	putc('e',fp);
	putc('e',fp);
	putc('r',fp);
	putc('u',fp);

	printf("\nData written successfully.");
	fclose(fp);

	fp = fopen(fname, "r");
	if(fp == NULL)
	{
		printf("\ncan't open file");
		exit(0);
	}
	printf("Contents of file is: \n");
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	printf("%c",getc(fp));

	fclose(fp);
	return 0;
}
