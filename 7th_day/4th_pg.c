/* ctype.h - isalpha() function Example in */

#include <stdio.h>
#include <ctype.h>

int main()
{
	// defining the type of variable
	char a,b;

	// assigning the value of variable
	a = 'A';
	b = '1';

	// condition to check the character
	if (isalpha(a) != 0)
	{
		printf("%c is an alphabet\n", a);
	}
	else
	{
		printf("%c is not an alphabet\n", a);
	}

	// condition to check the character
	if (isalpha(b) != 0)
	{
		printf("%c is a the alphabet\n", b);
	}
	else
	{
		printf("%c is not a the alphabet\n", b);
	}

	return 0;
}

