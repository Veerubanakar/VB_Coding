/*C program to find sum of all natural numbers.
Series: 1+2+3+4+..N */

#include<stdio.h>

int main()
{
	int i,N,sum;

	printf("Enter the value of N: \n");
	scanf("%d", &N);

	sum = 0;

	for(i=0; i<=N; i++)
	{
		sum = sum + i;
		printf("Sum of the series is: %d\n",sum);
	}
		
	return 0;
}
