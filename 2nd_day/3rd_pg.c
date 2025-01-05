/*C program to read an integer and print its multiplication table*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter value of num: \n");
	scanf("%d",&num);

	int i=1;
	while(i<=10)
	{
		int number = num *i;
		printf("%d\n",number);
		i++;
	}
	return 0;
}
