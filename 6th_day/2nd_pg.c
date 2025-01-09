/*program to copy one string to another (implementation of strcpy) in C */

#include<stdio.h>

void stringcpy(char *s1, char *s2);

int main()
{
	char str1[100], str2[100];

	printf("Enter string1: ");
	scanf("%[^\n]s", str1);

	stringcpy(str2,str1);

	printf("String1: %s \nString2: %s\n", str1,str2);
	return 0;
}

void stringcpy(char *s1, char *s2)
{
	int i=0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}
