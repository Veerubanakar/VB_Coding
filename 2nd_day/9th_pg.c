/*C program to swap two numbers using pointers*/
#include<stdio.h>

int main()
{
	int num1,num2;
	printf("Enter value of num1: \n");
	scanf("%d",&num1);
	printf("enter value of num2: \n");
	scanf("%d",&num2);

	printf("Before swapping:num1=%d, num2=%\n",num1,num2);

	swap(&num1,&num2);
	printf("after swapping:num1=%d, num2=%d\n",num1,num2);

	return 0;
}

void swap(int *a,int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
