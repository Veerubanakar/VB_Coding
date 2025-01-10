/* ctype.h - toupper() function Example in C */

#include <stdio.h>
#include <ctype.h>

int main()
{
    // defining the type of variable
    char a,b,c,d,e,f,g,h,i,j;

    // assigning the values of variables
    a = 'v';
    b = 'w';
    c = 'x';
    d = 'y';
    e = 'z';

    // getting the upper case values of the above assigned variables
    f = toupper(a);
    g = toupper(b);
    h = toupper(c);
    i = toupper(d);
    j = toupper(e);


    // printing the lower case and their upper case values

    printf("Uppercase of '%c' is '%c'\n", a, f);

    printf("Uppercase of '%c' is '%c'\n", b, g);

    printf("Uppercase of '%c' is '%c'\n", c, h);

    printf("Uppercase of '%c' is '%c'\n", d, i);

    printf("Uppercase of '%c' is '%c'\n", e, j);

    return 0;
 }

