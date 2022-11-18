/*Arce, Jhon Brian V.
  BSIT 1F

  Prelim Exam (Lab)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cs50.h>

int main ()
{
    float add, sub, product, quote;
    long double expo;

    float num1 = get_float("\nEnter the First Number : ");
    float num2 = get_float("Enter the Second Number : ");
    float num3 = get_float("Enter the Third Number : ");

    add = num1 + num2 + num3;
    sub = num3 - num2;
    product = num1 * num3;
    quote = num1 / num2;
    expo = pow(num3, num2);

    printf("\n%g + %g + %g = %g\n", num1, num2, num3, add);
    printf("%g - %g = %g\n", num3, num2, sub);
    printf("%g * %g = %g\n", num1, num3, product);
    printf("%g / %g = %g\n", num1, num2, quote);
    printf("%g ^ %g = %.2Lf\n\n", num3, num2, expo); // %.2Lf is to storing a large byte of number

    return 0;
}
