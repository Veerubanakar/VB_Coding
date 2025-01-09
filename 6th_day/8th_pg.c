/* islower()
This function checks whether character is a lowercase character or not.

Example of isspace(), isupper(), and islower() functions */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)){
        printf("%c is an uppercase character.\n", ch);
    }
    else if (islower(ch)){
        printf("%c is an lowercase character.\n", ch);
    }
    else if (isspace(ch)){
        printf("%c is space.\n", ch);
    }
    else{
        printf("%c is none from uppercase, lowercase and space.\n", ch);
	}
    return 0;
}
