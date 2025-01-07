/*C-program to print bits of given number*/
#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter value of num: \n");
	scanf("%d",&num);

	if(num & (1<<(31-i)))
	{
		printf("1");
	}else{
		printf("0");
	}
	printf("\n");
	return 0;
}
