/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Equivalent color
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color;

    printf("\n   Equivalent Color\n\n");
    printf("[B or b] - Blue\n");
    printf("[R or r] - Red\n");
    printf("[G or g] - Green\n");
    printf("[Y or y] - Yello\n\n");

    printf("Enter a Character : ");
    scanf("%s", &color);

    if(color == 'B' || color == 'b')
    {
        printf("Color : Blue\n\n");
    }
    else if(color == 'R' || color == 'r')
    {
        printf("Color : Red\n\n");
    }
    else if(color == 'G' || color == 'g')
    {
        printf("Color : Green\n\n");
    }
    else if(color == 'Y' || color == 'y')
    {
        printf("Color : Yellow\n\n");
    }
    else
    {
        printf("UNKNOWN COLOR\n\n");
    }
}
