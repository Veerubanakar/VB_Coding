/* ctype.h - iscntrl() function Example in C */

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


	// condition to test the control characters

	if (iscntrl(a) != 0)
	{
		printf("%c is a control character\n", a);
	}
	else
	{
		printf("%c is not a control character\n", a);
	}

	if (iscntrl(b) != 0)
	{
		printf("NULL is a control character\n");
	}
	else
	{
		printf("NULL is not a control character\n");
	}

	return 0;
}

