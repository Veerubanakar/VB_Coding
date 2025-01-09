/* isprint()
This function checks whether character is printable or not. */

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);

	if(isprint(ch))
	{
		printf("%c is a printable character.\n",ch);
	}else{
		printf("%c is not a printable character.\n",ch);
	}
	return 0;
}
