/*  Group Finals Activity 2 : For Loop

    Members:
        Arce, Jhon Brian V.
        Betinol, Aron James
        Meredores, Joshua
        Calpo, Maxwell
        Santelices, Albert
*/

#include <stdio.h>
#include <stdlib.h>

    int opt, i, j, n, x;

int main()
{
    printf("\n\n\n\t\t\tFor Loop");
    printf("\n\n\t\t[1] - For Loop Increment");
    printf("\n\t\t[2] - For Loop Decrement");
    printf("\n\t\t[3] - For Loop Triangle");
    printf("\n\t\t[4] - For Loop Inverter Triangle");

    printf("\n\n\t\tPick a Number [1-4] : "); scanf("%d", &opt);

    system("cls");

    switch(opt)
    {
        case 1:
            printf("\n\n\n\t\t\tFor Loop Increment");
            printf("\n\n\t\tEnter the Initial Value : "); scanf("%d", &i);
            printf("\t\tEnter the Ending Value : "); scanf("%d", &n);
            printf("\n\t\t\tIncrement by 1\n\n");

            for(x = i; x <= n; x++)
            {
                printf("\t\t\t\t%d\n", x);
            }
            break;

        case 2:
            printf("\n\n\n\t\t\tFor Loop Decrement");
            printf("\n\n\t\tEnter the Initial Value : "); scanf("%d", &i);
            printf("\t\tEnter the Ending Value : "); scanf("%d", &n);
            printf("\n\t\t\tDecrement by 1\n\n");

            for(x = i; x >= n; x--)
            {
                printf("\t\t\t\t%d\n", x);
            }
            break;

        case 3:
            printf("\n\n\n\t\t\tFor Loop Triangle");
            printf("\n\n\t\tEnter the Number of Row : "); scanf("%d", &n);
            printf("\n");

            for(i = 1; i <= n; i++)
            {
                printf("\t\t\t");
                for(j = 1; j <= n - i; j++)
                {
                    printf(" ");
                }
                for(j = 1; j <= i; j++)
                {
                    printf("\* ");
                }
                printf("\n");
            }
            break;

        case 4:
            printf("\n\n\n\t\t\tFor Loop Inverted Triangle");
            printf("\n\n\t\tEnter the Number of Row : "); scanf("%i", &n);
            printf("\n");

            for(i = n; i >= 0; i--)
            {
                printf("\t\t\t");
                for(j = 1; j <= n - i; j++)
                {
                    printf(" ");
                }
                for(j = 1; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        default:
            printf("\n\n\t\tIncorrect Number!");
            break;
    }

    return 0;
}
