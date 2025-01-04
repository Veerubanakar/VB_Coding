/* C program to create, declare and initialize structure */
#include <stdio.h>

struct vb{
	char name[15];
	int age;
	float networth;
};

int main()
{
	struct vb v = {"Veeru", 25, 15000.00f};

	printf("\n Name: %s",v.name);
	printf("\n age :%d",v.age);
	printf("\n networth:%f\n",v.networth);

	return 0;

}

