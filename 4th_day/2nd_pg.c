/*C-program to find multiple bits from LSB*/
#include<stdio.h>

#define Get(n,bits)   (n & ((1<<bits) - 1))
#define CLEAR(n,bits) (n & ~((1<<bits) - 1))
#define SET(n,bits)   (n | ((1<<bits) -1))

int main()
{
	int n=10,bits=3;

	printf("Get bits:%d\n",Get(n,bits));
	printf("CLEAR bits:%d\n",CLEAR(n,bits));
	printf("SET bits:%d\n",SET(n,bits));

	return 0;
}
