/* ctype.h - ispunct() function Example in C */

#include <stdio.h>
#include <ctype.h>
 
int main()
{
	// Defining the type of variables and initializing them
	char a='!';
 
	char b= 'M';
 
	// condition to prove that the value a is a punctuation mark
	if(ispunct(a)!= 0)
	{
		printf("%c is a punctuation mark \n\n", a);
	}
 
	// condition to prove that the value b is not a punctuation mark
	if(ispunct(b)== 0)
	{
		printf("%c is not a punctuation mark \n\n", b);
	}
 
	return 0;
}
 
