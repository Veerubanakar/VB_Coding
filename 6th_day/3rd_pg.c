/* C program to convert string into lowercase and uppercase without using library function */

#include<stdio.h>

void stringlwr(char *s);
void stringupr(char *s);

int main()
{
	char str[100];

	printf("Enter any string: ");
	scanf("%[^\n]s",str);

	stringlwr(str);
	printf("String after stringlwr:%s\n",str);

	stringupr(str);
	printf("String after stringupr: %s\n",str);
	return 0;
}

void stringlwr(char *s)
{
	int i=0;
	while(s[i] != '\0')
	{
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}
		++i;
	}
}

void stringupr(char *s)
{
	int i=0;
	while(s[i] != '\0')
	{
		if(s[i]>='a' && s[i]<='z'){
			s[i]=s[i]-32;
		}
		++i;
	}
}
