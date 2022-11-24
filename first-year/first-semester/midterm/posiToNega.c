/*  Arce, Jhon Brian V.
    BSIT 1F

    Exercises : Positive To Negative
*/

#include <stdio.h>
#include <cs50.h>

int main()
{
    int number = get_int("Enter a Number : ");

    if(number >= 0)
    {
        printf("POSITIVE NUMBER!\n");
    }
    else
    {
        printf("NEGATIVE NUMBER!\n");
    }
    return 0;
}
