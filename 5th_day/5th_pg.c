/* C program to find sum of following series:
1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N */

#include <stdio.h>

int main()
{
	int i, N;
	float sum;

	printf("Enter the value of N: \n");
	scanf("%d", &N);

	sum = 0.0f;

	for(i=1;i<=N;i++)
	{
		sum = sum + ((float) 1 / (float) i);
		printf("sum of series is: %d\n",sum);
	}
	return 0;
}

