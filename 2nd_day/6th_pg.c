/*C program to print all VOWEL and CONSONANT characters separately.*/
#include<stdio.h>
int main()
{
	char text[100];
	int i;

	printf("Enter any string: ");
	gets(text);

	printf("string is: ");
	for(i=0;text[i]!='\0';i++)
	{
		printf("%c",text[i]);
	}
	printf("\n");

	printf("VOWEL characters are: ");
	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]=='A'||text[i]=='a'|| text[i]=='E' || text[i]=='e' || text[i]=='I' || text[i]=='i' || text[i]=='O' || text[i]=='o' || text[i]=='U' || text[i]=='u')
            printf("%c",text[i]);
    }
    printf("\n");
    printf("CONSONANT Characters are: ");
    for(i=0;text[i]!='\0';i++)
    {
        if(!(text[i]=='A' || text[i]=='a' || text[i]=='E' || text[i]=='e' || text[i]=='I' || text[i]=='i' || text[i]=='O' || text[i]=='o' || text[i]=='U' || text[i]=='u'))
            printf("%c",text[i]);
    }
    printf("\n");

    return 0;
}
