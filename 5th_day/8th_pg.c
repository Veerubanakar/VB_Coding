/*Making a valid pointer as NULL pointer in C */

#include<stdio.h>

int main()
{
	int num = 10;
	int *ptr = &num;

	if(ptr == NULL)
	{
		printf("ptr:NULL\n");
	}else{
		printf("ptr:NOT NULL\n");
	}
	//assigning 0
	ptr = 0;

	if(ptr == NULL)
	{
		printf("ptr:NULL\n");
	}else{
		printf("ptr:NOT NULL\n");
	}
	return 0;
}
