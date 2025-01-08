/*C program to find sum of the square of all natural numbers from 1 to N.
Series: 1^2+2^2+3^2+4^2+..N^2 */

#include<stdio.h>

int main()
{
	int i, N;
	unsigned long sum;

	printf("Enter the value of N: \n");
	scanf("%d", &N);

	sum = 0;
	for(i=1; i<=N;i++)
	{
		sum = sum + (i * i);
		printf("sum of series is: %ld\n",sum);
	}
	return 0;
}
