/* ctype.h - isalnum() function Example in C */


#include <stdio.h>
#include <ctype.h>

int main()
{
	// Defining the type of variables and initializing them
	char a='A';
	char b='@';

	// condition to prove that the value a is character
	if ( isalnum(a) == 1 )
	{
		printf("%c is a character \n\n", a);
	}

	// condition to prove that the value b is not a character
	if ( isalnum(b)== 0 )
	{
		printf("%c is not a character \n", b);
	}

	return 0;
}
