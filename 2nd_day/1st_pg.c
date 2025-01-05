/*Program to print all uppercase alphabets from 'A' to 'Z' using while loop in C*/
#include<stdio.h>
int main()
{
	char alphabet;
	alphabet = 'A';
	printf("Uppercase alphabets:\n");
	
	while(alphabet <= 'Z')
	{
		printf("%c\n",alphabet);
		alphabet++;
	}
	return 0;
}

