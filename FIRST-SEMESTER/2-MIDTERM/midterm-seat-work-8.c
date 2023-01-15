/*  ARCE, JHON BRIAN
    BSIT 1F

    SEATWORK : Relational Operator
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 15;
    int y = 10;

    if(x == y)
    {
        printf("\nBoth variables are equal\n");
    }
    else if(x > y)
    {
        printf("\nx is greater than y\n");
    }
    else if(x != y)
    {
        printf("\nx  is not equal to y");
    }
    else if(x <= y)
    {
        printf("\nx is lesser or eequal to y\n");
    }
    else
    {
        printf("\nx is greater or equal to y\n");
    }

    printf("CODES AFTER IF\n\n");

    return 0;
}