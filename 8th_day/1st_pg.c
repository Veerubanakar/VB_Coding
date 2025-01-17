/* Palindrome Checker */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int len, i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0, j = len - 1; j >= 0; i++, j--) {
        reversedStr[i] = str[j];
    }
    reversedStr[i] = '\0';

    if (strcmp(str, reversedStr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}

