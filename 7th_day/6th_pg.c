/* ctype.h - isprint() function Example in C */

#include <stdio.h>
#include <ctype.h>

int main()
{
	// defining the type of variable
	char a;
	int b;

	// assigning the value of variable
	a = 'A';
	b = 0;

	// condition to test the printing characters
	if (isprint(a) != 0)
	{
		printf("%c is a printing character\n\n", a);
	}
	else
	{
		printf("%c is not a printing character\n\n", a);
	}

	if (isprint(b) != 0)
	{
		printf("NULL is a printing character\n");
	}
	else
	{
		printf("NULL is not a printing character\n");
	}

	return 0;
}

