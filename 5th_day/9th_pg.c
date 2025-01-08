/* C program to modify value stored in other variable using pointer */

#include<stdio.h>

int main()
{
	int num = 10;

	int *ptr = &num;

	printf("value of num:%d\n", num);
	printf("value of num(using pointer): %d\n", *ptr);

	//update the value
	*ptr = 20;

	printf("value of num:%d\n",num);
	printf("value of num(using pointer):%d\n", *ptr);

	return 0;
}
