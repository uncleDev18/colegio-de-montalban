/*  ARCE, JHON BRIAN
    BSIT 1F

    SEATWORK : BITWISE
*/

#include <stdio.h>
#include <stdlib.h>

    int a, b;
    char slt;

int main()
{
    system("COLOR 0A");

    do
    {
        system("cls");

        printf("\n\n\n\t\t\tBitwise");
        printf("\n\n\t\tEnter the value of A : "); scanf("%d", &a);
        printf("\t\tEnter the value of B : "); scanf("%d", &b);

        printf("\n\n\t\tXOR OUTPUT : %d", a ^ b);
        printf("\n\t\tOR OUTPUT : %d", a | b);
        printf("\n\t\tAND OUTPUT : %d", a & b);
        printf("\n\n\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    }while(slt == 'Y' || slt == 'y');

    return 0;
}
