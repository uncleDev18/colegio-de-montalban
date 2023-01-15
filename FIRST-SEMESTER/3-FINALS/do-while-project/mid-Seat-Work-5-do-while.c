/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Qualified to vote
*/

#include <stdio.h>
#include <stdlib.h>

    int age;
    char slt;

int main()
{
    system("COLOR 0A");
    
    do
    {
        system("cls");

        printf("\n\n\n\t\t\tQualification to vote");
        printf("\n\n\t\tEnter the Age : "); scanf("%d", &age);

        if(age >= 18)
        {
            printf("\n\n\t\tQualified To Vote!");
        }
        else
        {
            printf("\n\n\t\tToo Young!");
        }
        printf("\n\n\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    }while(slt == 'Y' || slt == 'y');
    
    return 0;
}