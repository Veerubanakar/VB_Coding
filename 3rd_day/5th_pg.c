/*C program to declare, initialize an union, example of union*/

#include<stdio.h>

union pack{
	int a;
	char b;
	double c;
};

int main()
{
	union pack p;
	printf("\nsize of pack: %d", sizeof(p));

	p.b = 'B';
	printf("\nvalue of b:%c",p.b);

	p.a = 9;
	printf("\nvalue of a:%d",p.a);

	p.c = 1234.678;
	printf("\nvalue of c:%f",p.c);

	return 0;
}
