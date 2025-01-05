/* *C program to read and print employee's record using structure**/
#include<stdio.h>

struct employee{
	char name[10];
	int empId;
	float salary;
};

int main()
{
	struct employee emp;

	printf("Enter details :\n");
	printf("Name :");  gets(emp.name);
	printf("ID :");    scanf("%d",&emp.empId);
	printf("Salary :"); scanf("%f",&emp.salary);

	printf("\n entered employee details :");
	printf("Name: %s\n"   ,emp.name);
	printf("Id:%d\n"      ,emp.empId);
	printf("Salary:%f\n",emp.salary);
	return 0;
}
