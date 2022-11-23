/*  Group Activity #2

    Members:
        Arce, Jhon Brian V.
        Betinol, Aron James
        Meredores, Joshua
        Calpo, Maxwell
        Santelices, Albert
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    char opt;
    float ans, A, P, r, t;
    const float e = 2.718;

    //View
    printf(" ____________________________________ \n");
    printf("|####################################|\n");
    printf("|#|                                |#|\n");
    printf("|#|     Population Growth Rate     |#|\n");
    printf("|#|________________________________|#|\n");
    printf("|####################################|\n");
    printf("|#|   What did you want to FIND?   |#|\n");
    printf("|#|                                |#|\n");
    printf("|#| [1] - Size of Population       |#|\n");
    printf("|#|                                |#|\n");
    printf("|#| [2] - Number of People         |#|\n");
    printf("|#|                                |#|\n");
    printf("|#| [3] - Rate of Growth           |#|\n");
    printf("|#|                                |#|\n");
    printf("|#| [4] - Time                     |#|\n");
    printf("|#|________________________________|#|\n");
    printf("|####################################|\n\n");

    //Getting input to a User
    printf("          Enter zero if no value      \n\n");

    printf("Size of the Population after in grows : ");
    scanf("%f", &A);

    printf("Initial Number of People : ");
    scanf("%f", &P);

    printf("Enter the Rate of Growth : ");
    scanf("%f", &r);

    printf("Enter the Time : ");
    scanf("%f", &t);

    printf("What did you want to find? ");
    scanf("%s", &opt);

    // processing or a computation to rate onto decimal
    r /= 100;

    // the Decision of opt
    if(opt <= '4' && opt > 0)
    {
        if(opt == '1')
        {
            //procesd
            ans = P * pow(e,(r * t));

            // To clear
            system("cls");

            //The outout
            printf("=======================================================================================\n");
            printf("                                Population after in grows                              \n");
            printf("=======================================================================================\n");
            printf("            Given :                                                                    \n");
            printf("                P = %g                                                              \n", P);
            printf("                e = 2.718                                                              \n");
            printf("                r = %g                                                              \n", r);
            printf("                t = %g                                                              \n", t);
            printf("                A = ?                                                                  \n");
            printf("            Answer :                                                                   \n");
            printf("                A = %g therefore, the City population would be about              \n", ans);
            printf("                                %g after %g years.                             \n", ans, t);
            printf("=======================================================================================\n");
            }

        if(opt == '2')
        {
            //processing
            ans = A / pow(e,(r * t));

            //to Clear
            system("cls");

            //Output
            printf("=======================================================================================\n");
            printf("                                Initial Number of People                               \n");
            printf("=======================================================================================\n");
            printf("            Given :                                                                    \n");
            printf("                A = %g                                                              \n", A);
            printf("                e = 2.718                                                              \n");
            printf("                r = %g                                                              \n", r);
            printf("                t = %g                                                              \n", t);
            printf("                P = ?                                                                  \n");
            printf("            Answer :                                                                   \n");
            printf("                P = %g therefore, the initial number of Population would be       \n", ans);
            printf("                                   %g in %g years.                             \n", ans, t);
            printf("=======================================================================================\n");
        }

        if(opt == '3')
        {
            //process
            ans = log10(A / P) / ( t * log10(e));

            //to clear
            system("cls");

            //Output
            printf("=======================================================================================\n");
            printf("                                    Rate of Growth                                     \n");
            printf("=======================================================================================\n");
            printf("            Given :                                                                    \n");
            printf("                A = %g                                                              \n", A);
            printf("                P = %g                                                              \n", P);
            printf("                e = 2.718                                                              \n");
            printf("                t = %g                                                              \n", t);
            printf("                r = ?                                                                  \n");
            printf("            Answer :                                                                   \n");
            printf("                r = %g therefore, the rate of growth of the Population would be   \n", ans);
            printf("                                       %g in the %g years.                     \n", ans, t);
            printf("=======================================================================================\n");
        }

        if(opt == '4')
        {
            //processing
            ans = log10(A / P) / (r * log10(e));

            //To Clear
            system("cls");

            //Output
            printf("=======================================================================================\n");
            printf("                                       Time                                            \n");
            printf("=======================================================================================\n");
            printf("            Given :                                                                    \n");
            printf("                A = %g                                                              \n", A);
            printf("                p = %g                                                              \n", P);
            printf("                e = 2.718                                                              \n");
            printf("                r = %g                                                              \n", r);
            printf("                t = ?                                                                  \n");
            printf("            Answer :                                                                   \n");
            printf("                t = %g therefore, in the %g the size of Population was %g \n", ans, ans, A);
            printf("                                                                                       \n");
            printf("=======================================================================================\n\n");
        }
    }

    //if the user input a Wrong Character
    if(opt > '4' || opt < '0')
    {
        system("cls");
        
        printf("=======================================================================================\n");
        printf("                                      !! WARNING !!                                    \n");
        printf("=======================================================================================\n");
        printf("                                                                                       \n");
        printf("                                                                                       \n");
        printf("                               Sorry! you input a Wrong Number.                        \n");
        printf("                                       Please try Again.                               \n");
        printf("                                                                                       \n");
        printf("                                                                                       \n");
        printf("=======================================================================================\n");
    }
    // the Code after if this is a copyright
    printf("                                © Group #2   2022-2022                                  \n");
    printf("                                 Colegio De Montalban                                   \n");
}
