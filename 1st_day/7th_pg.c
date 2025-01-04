/* C program to read gender (M/F) and print corresponding gender using switch */
#include <stdio.h>
int main()
{
	char gender;

	printf("Enter the gender(M,m or F,f) : \n");
	scanf("%c", &gender);

	switch(gender)
	{
		case 'M':
		case 'm':
			printf("Male\n");
			break;
		case 'F':
		case 'f':
			printf("Female\n");
			break;
		default:
			printf("Unspecified gender\n");
	}
	return 0;
}
