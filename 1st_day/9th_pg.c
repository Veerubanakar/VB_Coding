/* C program to check whether number is EVEN or ODD using switch */
#include<stdio.h>
int main()
{
	int number;

	printf("Enter the number: \n");
	scanf("%d",&number);

	switch(number % 2)
	{
		case 0:
			printf("The number %d is EVEN\n",number);
			break;
		case 1:
			printf("The number %d is ODD\n",number);
			break;
	}
	return 0;

}
