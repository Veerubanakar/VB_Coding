/* ctype.h - isspace() function Example in C */

#include <stdio.h>
#include <ctype.h>

int main()
{
	// defining the type of variable
	char a,b;

	// assigning the value of variables
	a = 'A';
	b = '\n';

	// condition to test the space characters
	if (isspace(a) != 0)
	{
		printf("%c is a space character\n\n", a);
	}
	else
	{
		printf("%c is not a space character\n\n", a);
	}

	if (isspace(b) != 0)
	{
		printf("Value of b is a space character\n");
	}
	else
	{
		printf("Value of b is not a space character\n");
	}

	return 0;
}

