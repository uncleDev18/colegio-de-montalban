/*  ARCE, JHON BRIAN
    BSIT 1F

    SEATWORK : Logical Operator
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 10;
    int a = 20;
    int b = 21;

    if(x == y && a != b)
    {
        printf("\nx is less than y AND a is equal to b\n");
    }
    if(x == y || a == b)
    {
        printf("\nx is less than y OR a is equal to b\n");
    }
    if(!(x == y && a == b))
    {
        printf("\nNOT OPERATION\n");
    }

    printf("CODES AFTER IF!\n\n");
    
    return 0;
}