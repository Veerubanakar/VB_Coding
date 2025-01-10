/* ctype.h - isxdigit() function Example in C */

#include <stdio.h>
#include <ctype.h>

int main()
{
    // defining the type of variable
    char a,b,c;

    // assigning the values of variables
    a = '5';
    b = 'c';
    c = 'z';


    // Condition to check, if the value of variable is hexadecimal digit
    if (isxdigit(a))
    {
     printf("%c is hexadecimal\n", a);
    }
    else
    {
     printf("%c is not hexadecimal\n", a);
    }

    // Condition to check, if the value of variable is hexadecimal digit
    if (isxdigit(b))
    {
     printf("%c is hexadecimal\n", b);
    }
    else
    {
     printf("%c is not hexadecimal\n", b);
    }

    // Condition to check, if the value of variable is hexadecimal digit
    if (isxdigit(c))
    {
     printf("%c is hexadecimal\n", c);
    }
    else
    {
     printf("%c is not hexadecimal\n", c);
    }

    return 0;
 }

