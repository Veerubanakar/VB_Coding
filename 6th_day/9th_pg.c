/* ispunct()
This function checks whether character is a punctuation character or not.
Punctuation characters are , . : ; ` @ # $ % ^ & * ( ) < > [ ] \ / { } ! | ~ - _ + ? = ' " */

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);

	if(ispunct(ch))
	{
		printf("%c is a punctuation character.\n",ch);
	}else{
		printf("%c is not a punctuation character.\n",ch);
	}
	return 0;
}
