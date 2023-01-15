/*  Group Finals Activity 1 : Increment and Decrement

    Members:
        Arce, Jhon Brian V.
        Betinol, Aron James
        Meredores, Joshua
        Calpo, Maxwell
        Santelices, Albert
*/

#include <stdio.h>
#include <stdlib.h>

    int opt, x, y;

int main()
{
    printf("\n\n\n\t\t\t Increment & Decrement");
    printf("\n\n\t\t[1] - Pre-Increment");
    printf("\n\n\t\t[2] - Post-Increment");
    printf("\n\n\t\t[3] - Pre-Decrement");
    printf("\n\n\t\t[4] - Post-Decrement");

    printf("\n\n\t\tPick a Number [1-4] : "); scanf("%d", &opt);

    switch(opt)
    {
        case 1:
            system("cls");

            printf("\n\n\n\t\t\tPre-Increment");
            printf("\n\n\t\tEnter a value of X : "); scanf("%d", &x);

            x++;

            printf("\n\n\t\tThe UPDATED value of X : %d", x);
            break;

        case 2:
            system("cls");

            printf("\n\n\n\t\t\tPost-Increment");
            printf("\n\n\t\tEnter a value of X : "); scanf("%d", &x);

            y = x++;

            printf("\n\n\t\tThe ORIGINAL value of X : %d", y);
            printf("\n\t\tThe UPDATED value of X : %d", x);
            break;

        case 3:
            system("cls");

            printf("\n\n\n\t\t\tPre-Decrement");
            printf("\n\n\t\tEnter a value of X : "); scanf("%d", &x);

            x--;

            printf("\n\n\t\tThe UPDATED value of X : %d", x);
            break;

        case 4:
            system("cls");

            printf("\n\n\n\t\t\tPost-Decrement");
            printf("\n\n\t\tEnter a value of X : "); scanf("%d", &x);

            y = x--;

            printf("\n\n\t\tThe ORIGINAL value of X : %d", y);
            printf("\n\t\tThe UPDATED value of X : %d", x);
            break;

        default:
            printf("\n\n\t\tIncorrect Number!");
            break;
    }

    return 0;
}
