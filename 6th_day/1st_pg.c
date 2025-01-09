/*C program to calculate length of the string without using strlen() */

#include<stdio.h>

//function to return length of string 
int stringLength(char *);

int main()
{
	char str[100] = {0};
	int length;

	printf("Enter any string: ");
	scanf("%s", str);

	length = stringLength(str);

	printf("String length is : %d\n", length);
	return 0;
}

//function definition
int stringLength(char *txt)
{
	int i=0, count=0;

	while(txt[i++] != '\0'){
		count +=1;
	}
	return count;
}
