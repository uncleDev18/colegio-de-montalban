/*  Jhon Brian Arce
    BSIT 1F

    ACTIVITY #3 : FAHRENHEIT TO CELSIUS
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    float cel;

    float fah = get_float("Enter the Fahrenheit : ");

    cel = (fah - 32) * 5/9;

    //system("cls");

    printf("%g°F is equivalent to %g°C\n\n", fah, cel);
}
