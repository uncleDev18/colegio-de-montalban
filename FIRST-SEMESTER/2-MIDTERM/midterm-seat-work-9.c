/*  ARCE, JHON BRIAN
    BSIT 1F

    SEATWORK : Truth Table
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 1;
    int B = 0;

    int LT = ((A || B ) && (A && B));
    int NO = !(A || B);
    int NA = !(A && B);

    int a = 12;
    int b = 25;

    printf("Not OR  : %i \n", NO);
    printf("Not And : %i \n", NA);
    printf("Combine : %i \n", LT);
    printf("Bitwise OR : %d \n", a | b);

    return 0;
}