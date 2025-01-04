/* largest among 3 numbers */
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the values of num1: \n");
	scanf("%d",&num1);
	printf("Enter the values of num2: \n");
	scanf("%d",&num2);
	printf("Enter the values of num3: \n");
	scanf("%d",&num3);

	if(num1 > num2 && num1 > num3)
	{
		printf("largest = %d\n",num1);
	}else if(num2 > num1 && num2 > num3)
	{
		printf("largest = %d\n", num2);
	}
	else {
		printf("largest = %d\n", num3);
	}
	return 0;
}

