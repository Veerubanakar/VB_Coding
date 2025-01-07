/*C-program to find whether number is odd or even suing bitwise*/
#include<stdio.h>

/*if LSB is 1 ->odd
 if LSB is 0->even */

int main()
{
	int num;
	printf("Enter value of num: \n");
	scanf("%d", &num);

	if(num & 0x01)
	{
		printf("odd number\n");
	}else{
		printf("Even number\n");
	}
	return 0;
}
