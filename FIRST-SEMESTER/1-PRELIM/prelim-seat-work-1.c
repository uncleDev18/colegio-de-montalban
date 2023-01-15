/*  Jhon Brian V.
    BSIT 1F

    Seat Work 1 : Area of Triangle
*/

#include <stdio.h>
#include <math.h>

    float area, base, height;

int main(void)
{
    printf("\n\n\n\t\t\tArea of Triangle");
    printf("\n\n\t\tEnter the Base : "); scanf("%f", &base);
    printf("\t\tEnter the Height of Triangle : "); scanf("%f", &height);

    area = (base * height) / 2;

    printf("\n\t\tThe Area of a Triangle is %g\n\n", area);

    return 0;
}
