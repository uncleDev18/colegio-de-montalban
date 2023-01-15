/*  ARCE, JHON BRIAN
    BSIT 1F

    SEATWORK : BITWISE
*/

#include <stdio.h>
#include <stdlib.h>

    int a, b;

int main()
{
    printf("\n\n\n\t\t\tBitwise");
    printf("\n\n\t\tEnter the value of A : "); scanf("%d", &a);
    printf("\t\tEnter the value of B : "); scanf("%d", &b);

    printf("\n\n\t\tXOR OUTPUT : %d", a ^ b);
    printf("\n\t\tOR OUTPUT : %d", a | b);
    printf("\n\t\tAND OUTPUT : %d", a & b);

    return 0;
}
