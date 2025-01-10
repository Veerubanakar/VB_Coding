/* ctype.h - isgraph() function Example in C */

#include <stdio.h>
#include <ctype.h>
 
int main()
{
	char a='A';
	char b='0';
	if(isgraph(a)==1)
	{
		printf("%c is a character \n\n",a);
	}
	if(isgraph(b)==0)
	{
		printf("NULL is not a character\n");
	}
 
	return 0;
}
 
