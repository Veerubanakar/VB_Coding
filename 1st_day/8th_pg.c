/*C program to check whether a character is VOWEL or CONSONANT using switch*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character(A,a - Z,z): \n");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Vowel\n");
			break;
		default:
			printf("Consonant\n");
	}
	return 0;
}
