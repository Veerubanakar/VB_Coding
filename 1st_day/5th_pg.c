/*Person is eligible for voting or not */
#include<stdio.h>
int main()
{
	int age;
	printf("Enter age of person: \n");
	scanf("%d",&age);

	if(age >= 18)
	{
		printf("Eligible for voting\n");
	}else{
		printf("Not Eligible\n");
	}
	return 0;
}
