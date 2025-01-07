/*Check whether num is SET/CLEAR*/
#include<stdio.h>

#define Get(n,pos)   (n & (1<<pos))
#define CLEAR(n,pos) (n & ~(1<<pos))
#define SET(n,pos)   (n | (1<<pos))

int main()
{
	int n=11, pos=3;

	printf("Get bits %d\n",Get(n,pos));
	printf("CLEAR bits %d\n",CLEAR(n,pos));
	printf("SET bits %d\n",SET(n,pos));

	return 0;
}
