/* Program to print all lowercase alphabets from 'a' to 'z' using while loop in C*/
#include<stdio.h>
int main()
{
	//char alphabet;
	int abc;
	abc=1;
	//alphabet = 'a';

	printf("Lowercase alphabets:\n");
	while(abc <= 100)
	{
		printf("%d \n", abc);
		abc++;
	}
	return 0;
}
