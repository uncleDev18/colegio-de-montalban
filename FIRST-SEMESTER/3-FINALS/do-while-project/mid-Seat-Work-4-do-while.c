/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Positive To Negative
*/

#include <stdio.h>
#include <stdlib.h>

    int number;
    char slt;

int main()
{
    system("COLOR 0A");

    do
    {
        system("cls");

        printf("\n\n\n\t\t\tPositive to Negative");
        printf("\n\n\t\tEnter a Number : "); scanf("%d", &number);

        if(number >= 0)
        {
            printf("\n\t\tPOSITIVE NUMBER!");
        }
        else
        {
            printf("\n\t\tNEGATIVE NUMBER!");
        }

        printf("\n\n\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    }while(slt == 'Y' || slt == 'y');

    return 0;
}
