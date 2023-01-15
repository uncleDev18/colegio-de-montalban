/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Positive To Negative
*/

#include <stdio.h>
#include <stdlib.h>

    int number;
    
int main()
{
    printf("\n\n\n\t\t\tPositive to Negative");
    printf("\n\n\t\tEnter a Number : "); scanf("%d", &number);

    if(number >= 0)
    {
        printf("\n\t\tPOSITIVE NUMBER!");
    }
    else
    {
        printf("\n\t\tNEGATIVE NUMBER!");
    }
    return 0;
}
