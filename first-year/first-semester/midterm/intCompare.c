/*  ARCE, JHON BRIAN V.
    BSIT 1F

    SITWORK : INTERGERS COMPARISON
*/

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    int a = get_int("\nEnter the value of A : ");
    int b = get_int("Enter the value of B : ");

    if(a > b)
    {
        printf("a : %i\n\n", a);
    }

    if(a < b)
    {
        printf("b : %i\n\n", b);
    }

    if(a == b)
    {
        printf("a : %i and b : %i\n\n", a, b);
    }

    return 0;
}
