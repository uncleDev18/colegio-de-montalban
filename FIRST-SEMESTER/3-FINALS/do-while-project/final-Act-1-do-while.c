/*  Arce, Jhon Brian
    BSIT 1F

    Finals Activity 1 : FOR LOOP
*/

#include <stdio.h>
#include <stdlib.h>

    char slt;
    int i, n;

int main()
{
    system("COLOR 0A");

    do
    {
        system("cls");

        printf("\n\n\n\t\t\tFor Loop");
        printf("\n\n\t\tEnter the Initial Value : "); scanf("%d", &i);
        printf("\n\t\tEnter the Ending Value : "); scanf("%d", &n);

        for(i; i <= n; i++)
        {
            printf("\t\t\t\t%d\n", i);
        }
        printf("\n\n\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    } while (slt == 'Y' || slt == 'y');


    return 0;
}
