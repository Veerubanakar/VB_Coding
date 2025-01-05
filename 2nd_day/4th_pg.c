/* C program to find factorial of a number*/
#include<stdio.h>
int main()
{
	int num,i;
	long int fact;

	printf("Enter a number: \n");
	scanf("%d",&num);

	fact = 1;
	for(i=num; i>=1; i--)
	{
		fact=fact * i;
		printf("Factorial of %d is = %ld\n",num,fact);
	}
	return 0;
}
