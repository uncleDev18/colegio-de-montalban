/*  Jhon Brian Arce
    BSIT 1F

    ACTIVITY #3 : CELSIUS TO FAHRENHEIT
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    float fah;

    float cel = get_float("Enter the Celsius : ");

    fah = ((cel * 9) / 5) + 32;

    //system("cls");

    printf("%g°C is equivalent to %g°F\n\n", cel, fah);
}
