/*C program to demonstrate example of Nested Structure*/
#include<stdio.h>

struct employee{
	char name[30];
	int age;

	struct dateofBirth{
		int dd;
		int mm;
		int yy;
	}DOB;
};

int main()
{
	struct employee emp;

	printf("Enter name: ");
	scanf("%s",&emp.name);

	printf("Enter age: ");
	scanf("%d",&emp.age);

	printf("Enter Date of Birth[DD MM YY] format: ");
	scanf("%d%d%d", &emp.DOB.dd, &emp.DOB.mm, &emp.DOB.yy);

	printf("\nName : %s \nage : %d \nDate of birth : %02d/%02d/%02d\n", emp.name, emp.age, emp.DOB.dd, emp.DOB.mm,emp.DOB.yy);
       return 0;
}       
