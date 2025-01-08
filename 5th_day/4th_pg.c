/*C program to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N.
Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N! */

#include<stdio.h>

unsigned int factorial(int num);

int main()
{
	int i, N;
	float sum;

	printf("Enter value of N: \n");
	scanf("%d", &N);

	sum = 0.0f;

	for(i=1;i<=N;i++)
	{
		sum = sum + ((float) (i)) / (float) (factorial(i));

		printf("sum of the series is: %f\n",sum);
		
	}
	 return 0;
}

unsigned int factorial(int num)
{
	int i;
	unsigned long fact = 1;

	for(i=num; i>=1; i--)
	{
		fact = fact * i;
	}
	return fact;
}
