/*  ARCE, JHON BRIAN
    BSIT 1F

    PRELIM ACTIVITY 3.1 : FAHRENHEIT TO CELSIUS*/
#include <stdio.h>
#include <math.h>

    float f, c;
    char slt;

int main()
{
    system("COLOR 0A");

    do
    {
        system("cls");
        printf("\n\n\t\t\tFahrenheit to Celsius");
        printf("\n\n\t\tEnter the Fahrenheit : "); scanf("%f", &f);

        c = (f - 32) * 5/9;

        printf("\n\n\t\t%g°F is equivalent to %g°C\n\n", f, c);
        printf("\n\n\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);
    }while(slt == 'y' || slt == 'Y');
    return 0;
}
