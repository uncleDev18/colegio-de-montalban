/*  Jhon Brian V.
    BSIT 1F

    Area of Triangle
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float area;

    float base = get_float("Enter the Base : ");
    float height = get_float("Enter the Height of Triangle : ");

    area = (base * height) / 2;

    //system("CLS");

    printf("The Area of a Triangle is %g\n\n", area);
}
