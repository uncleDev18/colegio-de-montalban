/*  ARCE, JHON BRIAN
    BSIT 1F

    PRELIM ACTIVITY 3.1 : CELSIUS TO FAHRENHEIT
*/

#include <stdio.h>
#include <math.h>

    float c, f;

int main()
{
    printf("\n\n\t\t\tCelsius to Fahrenheit");
    printf("\n\n\t\tEnter the Celsius : "); scanf("%f", &c);

    f = ((c * 9) / 5) + 32;

    printf("\n\n\t\t%g°C is equivalent to %g°F\n\n", c, f);

    return 0;
}
