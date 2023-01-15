/*  ARCE, JHON BRIAN
    BSIT 1F

    PRELIM ACTIVITY 3.1 : FAHRENHEIT TO 
*/

#include <stdio.h>
#include <math.h>

    float f, c;

int main()
{
    printf("\n\n\t\t\tFahrenheit to Celsius");
    printf("\n\n\t\tEnter the Fahrenheit : "); scanf("%f", &f);

    c = (f - 32) * 5/9;

    printf("\n\n\t\t%g°F is equivalent to %g°C\n\n", f, c);

    return 0;
}