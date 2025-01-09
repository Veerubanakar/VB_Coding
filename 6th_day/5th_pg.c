/*  isalnum()
This function checks whether character is alphanumeric or not. */

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;

	printf("Enter a character: ");
	scanf("%c", &ch);

	if(isalnum(ch))
	{
		printf("%c is an alphanumeric character.\n",ch);
	}else{
		printf("%c is not alphanumeric character.\n",ch);
	}
	return 0;
}
