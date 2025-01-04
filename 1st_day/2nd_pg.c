/*Addition,substraction,multiplication,division of two numbers */
#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mul,div;
	printf("Enter value of num1: \n");
	scanf("%d\n", &num1);

	printf("Enter value of num2: \n");
	scanf("%d\n", &num2);
	
	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;

	printf("addition of num1=%d & num2=%d is add=%d\n",num1,num2,add);
	printf("subtraction of num1=%d & num2=%d is sub=%d\n",num1,num2,sub);
	printf("multiplication of num1=%d & num2=%d is mul=%d\n",num1,num2,mul);
	printf("division of num1=%d & num2=%d is div=%d\n",num1,num2,div);
	return 0;
}	



