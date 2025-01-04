/* Given numver is ODD or EVEN */
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number: \n");
	scanf("%d", &number);

	if(number % 2 == 0)
	{
		printf("Number %d is EVEN\n",number);
	}else{
		printf("Number %d is odd\n",number);
	}
	return 0;
}
