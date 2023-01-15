/*  ARCE, JHON BRIAN V.
    BSIT 1F

    SEATWORK : INTERGERS COMPARISON
*/

#include <stdio.h>
#include <stdlib.h>

    int a, b;

int main()
{
    printf("\n\n\n\t\t\tIntegers Comparison");
    printf("\n\n\t\tEnter the value of A : "); scanf("%d", &a);
    printf("\t\tEnter the value of B : "); scanf("%d", &b);

    if(a > b)
    {
        printf("\n\t\ta : %i", a);
    }

    if(a < b)
    {
        printf("\n\t\tb : %i", b);
    }

    if(a == b)
    {
        printf("\n\t\ta : %i and b : %i", a, b);
    }

    return 0;
}
