/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Equivalent color
*/

#include <stdio.h>
#include <stdlib.h>

char color, slt;

int main()
{

    do
    {
        system("cls");
        printf("\n\n\n\t\t\tEquivalent Color");
        printf("\n\n\t\t[B or b] - Blue");
        printf("\n\t\t[R or r] - Red");
        printf("\n\t\t[G or g] - Green");
        printf("\n\t\t[Y or y] - Yellow");

        printf("\n\n\t\tEnter a Character : "); scanf("%s", &color);
        if(color == 'B' || color == 'b')
        {
            system("COLOR 0B");
            printf("\n\n\t\tColor : Blue");
        }
        else if(color == 'R' || color == 'r')
        {
            system("COLOR 0C");
            printf("\n\n\t\tColor : Red");
        }
        else if(color == 'G' || color == 'g')
        {
            system("COLOR 0A");
            printf("\n\n\t\tColor : Green");
        }
        else if(color == 'Y' || color == 'y')
        {
            printf("\n\n\t\tColor : Yellow");
            system("COLOR 0E");
        }
        else
        {
            printf("\n\n\t\tUNKNOWN COLOR");
        }

        printf("\n\n\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    }while(slt == 'Y' || slt == 'y');
}
