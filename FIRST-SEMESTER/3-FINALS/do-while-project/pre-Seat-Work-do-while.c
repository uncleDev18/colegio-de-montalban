/*  Jhon Brian V.
    BSIT 1F

    Area of Triangle
*/

#include <stdio.h>
#include <math.h>

    float area, base, height;
    char slt;

int main(void)
{
    system("COLOR 0A");

    do
    {
        system("cls");

        printf("\n\n\n\t\t\tArea of Triangle");
        printf("\n\n\t\tEnter the Base : "); scanf("%f", &base);
        printf("\t\tEnter the Height of Triangle : "); scanf("%f", &height);

        area = (base * height) / 2;

        printf("\n\t\tThe Area of a Triangle is %g\n\n", area);
        printf("\t\tDo you want to TRY AGAIN? [y/n] : "); scanf("%s", &slt);

    }while(slt == 'Y' || slt == 'y');

    return 0;
}
