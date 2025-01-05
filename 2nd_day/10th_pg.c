/*C program to print a string character by character using pointer*/
#include<stdio.h>

int main()
{
	char str[100];
	char *ptr;

	printf("Enter a string: ");
	gets(str);

	ptr=str;

	printf("Entered string is: ");
	while(*ptr!='\0')
	{
		printf("%c\n",*ptr++);

	}
	return 0;
}
