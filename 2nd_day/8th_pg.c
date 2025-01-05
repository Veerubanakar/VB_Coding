/*C program to create, initialize, assign and access a pointer variable*/
#include<stdio.h>

int main()
{
	int number;
	int *pnumber;

	pnumber = &number;
	number = 10;

	printf("value of number: %d\n address of number: %u\n",number,&number);

	//using pointer variable
	printf("valueof pnumber is: %d\n address of pnumber: %u\n",*pnumber,&pnumber);
	return 0;
}
