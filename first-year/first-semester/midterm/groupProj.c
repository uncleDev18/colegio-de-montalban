/*  Group Activity #2

    Members:
        Arce, Jhon Brian V.
        Betinol, Aron James
        Meredores, Joshua
        Calpo, Maxell
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

    printf("Enter the Time in Month : ");
    scanf("%f", &t);

    printf("What did you want to find? ");
    scanf("%s", &opt);

    // processing or a computation to rate onto decimal
    t /= 12;
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
            printf("                A = %.0f therefore, the City population would be about            \n", ans);
            printf("                                %.0f after %g Years.                           \n", ans, t);
            printf("=======================================================================================\n");
            printf("                                © Group #2   2022-2022                                 \n");
            printf("                                 Colegio De Montalban                                  \n");
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
            printf("                P = %.0f therefore, the initial number of Population would be     \n", ans);
            printf("                                   %.0f in %.0f Years.                         \n", ans, t);
            printf("=======================================================================================\n");
            printf("                                © Group #2   2022-2022                                 \n");
            printf("                                 Colegio De Montalban                                  \n");
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
            printf("                r = %.3f therefore, the rate of growth of the Population would be \n", ans);
            printf("                                       %.3f in the %.0f Years.                 \n", ans, t);
            printf("=======================================================================================\n");
            printf("                                © Group #2   2022-2022                                 \n");
            printf("                                 Colegio De Montalban                                  \n");
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
            printf("                t = %.0f therefore, in the %.0f Years the size of Population was %g \n", ans, ans, A);
            printf("                                                                                       \n");
            printf("=======================================================================================\n");
            printf("                                © Group #2   2022-2022                                 \n");
            printf("                                 Colegio De Montalban                                  \n");
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
        printf("                        Sorry! this variable number was not EXIST.                     \n");
        printf("                                       Please try Again.                               \n");
        printf("                                                                                       \n");
        printf("                                                                                       \n");
        printf("=======================================================================================\n");
        printf("                                © Group #2   2022-2022                                 \n");
        printf("                                 Colegio De Montalban                                  \n");
    }
    // the Code after if
    printf("                           Thank You for using our Program!                             \n");
}
