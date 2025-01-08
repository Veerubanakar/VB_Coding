/*Program to compare two strings using pointers in C */

#include<stdio.h>

#define MAX (100)

int main()
{
	char str1[MAX] = {0};
	char str2[MAX] = {0};

	int loop;
	int flag = 1;

	char *pstr1 = str1;
	char *pstr2 = str2;

	printf("Enter string1: \n");
	scanf("%[^\n]s", pstr1);

	printf("Enter string2: \n");
	getchar();
	scanf("%[^\n]s",pstr2);

	printf("string1: %s\n string2: %s\n", pstr1, pstr2);

	for(loop = 0; (*(pstr1 + loop)) != '\0'; loop++){
		if(*(pstr1 + loop) != *(pstr2 + loop)){
			flag = 0;
			break;
		}
	}

	if(flag)
	{
		printf("strings are same.\n");
	}else{
		printf("strings are not same.\n");
	}
	return 0;
}
