/*Arce, Jhon Brian V.
  BSIT 1F

  Prelim Exam (Lab)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float num1, num2, num3, add, sub, product, quote, expo;
    char slt;

int main ()
{
    system("COLOR 0A");
    do
    {
        system("cls");

        printf("\n\n\n\t\t\tBasic Calculator");
        printf("\n\n\t\tEnter the First Number : "); scanf("%f", &num1);
        printf("\t\tEnter the Second Number : "); scanf("%f", &num2);
        printf("\t\tEnter the Third Number : "); scanf("%f", &num3);

        add = num1 + num2 + num3;
        sub = num3 - num2;
        product = num1 * num3;
        quote = num1 / num2;
        expo = pow(num3, num2);

        printf("\n\t\t%g + %g + %g = %g\n", num1, num2, num3, add);
        printf("\t\t%g - %g = %g\n", num3, num2, sub);
        printf("\t\t%g * %g = %g\n", num1, num3, product);
        printf("\t\t%g / %g = %g\n", num1, num2, quote);
        printf("\t\t%g ^ %g = %g\n\n", num3, num2, expo);
        printf("\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    }while(slt == 'y' || slt == 'Y');
    return 0;
}
